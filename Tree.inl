#include <stack>
#include <queue>

template<typename T>
void Tree<T>::insert(const T &data) {

    Node<T>* newNode  = new Node<T>(data);

    if (this->root == nullptr) {
        this->root = newNode;
        return ;
    }

    Node<T> *current = root;
    std::stack< Node<T> * > path;

//    while (current->next(data) != nullptr) {
//        current = current->next(data);
//        path.push(current);   // the stack receives the current node in order to make a path
//    }
//
    while (!current->isLeaf()) {
        if (current->next(data) == nullptr) {   // trata se o nó for meio folha, com o next = null
            break;
        }

        path.push(current);   // the stack receives the current node in order to make a path
        current = current->next(data);
    }
    path.push(current);

    if (data < current->getinfo()) {
        current->setLeft(newNode);
    } else {
        current->setRight(newNode);
    }

    balance(path);
}

template<typename T>
void Tree<T>::leftRotation(Node<T>*parent, Node<T>* child) {
    if(child->getLeft() != nullptr){
        Node<T> *current = child->getLeft();
        parent->setRight(current);
        child->setLeft(parent);
    }else{
        child->setLeft(parent);
        parent->setRight(nullptr);
    }
}

template<typename T>
void Tree<T>::rightRotation(Node<T>*parent, Node<T>* child) {
    if(child->getRight() != nullptr){
        Node<T> *current = child->getRight();
        parent->setLeft(current);
        child->setRight(parent);
    }else{
        child->setRight(parent);
        parent->setLeft(nullptr);
    }
}

template<typename T>
void Tree<T>::remove(const T &data) {

}

template<typename T>
Tree<T>::Tree() {
    this->root =  nullptr;
}

template<typename T>
void Tree<T>::balance(std::stack<Node<T> *> &path) {
    Node<T>* current = nullptr;
    Node<T>* next = nullptr;
    int factor;

    while (!path.empty()){
        current = path.top();
        path.pop();    // removes node from the top

        if (path.size() > 0 ) {
            next = path.top();
        } else {
            next = nullptr;
        }

        factor = current->factor();  // guarda numa var para n ter que recalcular toda vez e toimizar tempo

        if(factor < -1 ){
            Node<T> *rightChild = current->getRight();
            if (rightChild->factor() < 0){
                leftRotation(current, rightChild);
                if (next != nullptr)
                    next->setRight(rightChild);
                else
                    this->root = rightChild;
            } else {
                Node<T> *leftOfRightChild = rightChild->getLeft();
                rightRotation(rightChild, leftOfRightChild);
                current->setRight(rightChild->getLeft());
                leftRotation(current, leftOfRightChild);

                if (next != nullptr)
                    next->setRight(leftOfRightChild) ;
                else
                    this->root = leftOfRightChild;
            }
        }

        if(factor > 1){
            Node<T> *leftChild = current->getLeft();
            if (leftChild->factor() > 0){ // mesmo sinal
                rightRotation(current, leftChild);
                if (next != nullptr)
                    next->setLeft(leftChild);
                else
                    this->root = leftChild;
            } else { // joelho
                Node<T> *rightOfLeftChild = leftChild->getRight();
                leftRotation(leftChild, rightOfLeftChild);
                current->setLeft(rightOfLeftChild);
                rightRotation(current, rightOfLeftChild);

                if (next != nullptr)
                    next->setLeft(rightOfLeftChild);
                else
                    this->root = rightOfLeftChild;

            }
        }

    }
}

template<typename U>
std::ostream &operator<<(std::ostream &os, const Tree<U> &avl) {
    std::queue<Node<U>*> queue;  //criação de uma fila
}
