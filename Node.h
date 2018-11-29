#ifndef AVLTREE_NODE_H
#define AVLTREE_NODE_H

template <typename T>
class Node {
private:
    Node<T>* left;
    Node<T>* right;
    int height(Node<T> *n);
    T info;
public:
    Node<T>* getLeft();
    Node<T>* getRight();
    T getinfo();
    Node<T>* next(const T &info);
    bool isLeaf();
    int factor();
    void setLeft(Node<T>*);
    void setRight(Node<T>*);
    void setinfo(T);

    explicit Node(const T &info);
};

#include "Node.inl"

#endif


