#ifndef AVLTREE_TREE_H
#define AVLTREE_TREE_H

#include <iostream>
#include "Node.h"
#include <stack>

template <typename T>
class Tree {
public:
    void insert(const T &data);
    void remove(const T &data);
    void balance(std::stack<Node<T>*> &path);

    Tree();

private:
    void leftRotation(Node<T>*parent, Node<T>* child);
    void rightRotation(Node<T>*parent, Node<T>* child);

    Node<T>* root;

    template<typename U>
    friend std::ostream &operator<<(std::ostream &os, const Tree<U> &avl);
};

#include "Tree.inl"

#endif
