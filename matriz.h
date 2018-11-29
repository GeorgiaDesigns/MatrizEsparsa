#ifndef MATRIXESPARSA_MATRIZ_H
#define MATRIXESPARSA_MATRIZ_H

#include "tree.h" // importa a árvore AVL

template <typename T>
class matriz {
private:
    int valorPadrao{};
    //var ponteiro para ponteiros
    int linhas{};
    int colunas{};
public:
    int getValorPadrao();
    int getLinhas();
    int getColunas();

    void setValorPadrao(int);
    void setLinhas(int);
    void setColunas(int);

    matriz(int m, int n);
    matriz(int m, int n , int valorPadrao);  // construtor alternativo caso queira definir o valor padrao
    void atribuirValor(const T &data, int m, int n);
    T acessarValor();   // não tenho certeza se preciso acessar a informação, passando as coordenadas, ou pegar as coordenadas passando a info..

};


#include "matriz.inl"

#endif //MATRIXESPARSA_MATRIZ_H
