#ifndef MATRIXESPARSA_MATRIZ_H
#define MATRIXESPARSA_MATRIZ_H

#include "Tree.h" // importa a árvore AVL

template <typename T>
class Matriz {
private:
    T valorPadrao;
    //var ponteiro para ponteiros
    int linhas;
    int colunas;
public:
    T getValorPadrao();
    int getLinhas();
    int getColunas();

    void setValorPadrao(const T);
    void setLinhas(int);
    void setColunas(int);

    Matriz(int m, int n);
    Matriz(int m, int n , int valorPadrao);  // construtor alternativo caso queira definir o valor padrao
    void inserirValor(const T &data, int m, int n);
    T acessarValor();   // não tenho certeza se preciso acessar a informação, passando as coordenadas, ou pegar as coordenadas passando a info..


};


#include "matriz.inl"

#endif //MATRIXESPARSA_MATRIZ_H
