template<typename T>
Node<T> *Node<T>::getLeft() {
    return this->left;
}

template<typename T>
Node<T> *Node<T>::getRight() {
    return this->right;
}

template<typename T>
void Node<T>::setLeft(Node<T> *data) {
    this->left = data;
}

template<typename T>
void Node<T>::setRight(Node<T> *data) {
    this->right = data;
}

template<typename T>
T Node<T>::getinfo() {
    return this->info;
}

template<typename T>
void Node<T>::setinfo(T data) {
    this->info = data;
}

template<typename T>
int Node<T>::factor() {
    if(this->isLeaf())
        return 0;

    int leftHeight = height(this->left);
    int rightHeight = height(this->right);

    return leftHeight - rightHeight;
}

template<typename T>
int Node<T>::height(Node<T> *n) {
    if (n == nullptr)
        return 0;

    if (n->isLeaf())
        return 1;

    return std::max(height(n->left), height(n->right)) + 1;
}

template<typename T>
Node<T> *Node<T>::next(const T &info) {
    if (info > this->info)
        return this->right;
    else
        return this->left;
}

template<typename T>
bool Node<T>::isLeaf() {
    return this->right == nullptr && this->left == nullptr;
}

template<typename T>
Node<T>::Node(const T &info) {
    this->info = info;
    this->left = nullptr;
    this->right = nullptr;
}




