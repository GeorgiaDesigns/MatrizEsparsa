
template<typename T>
T Matriz<T>::getValorPadrao() {
    return this->valorPadrao;
}

template<typename T>
int Matriz<T>::getLinhas() {
    return this->linhas;
}

template<typename T>
int Matriz<T>::getColunas() {
    return this->colunas;
}

template<typename T>
void Matriz<T>::setValorPadrao(const T &vp) {
    this->valorPadrao = v;
}

template<typename T>
void Matriz<T>::setLinhas(int m) {
    this->linhas = m;
}

template<typename T>
void Matriz<T>::setColunas(int n) {
    this->colunas = n;
}

template<typename T>
Matriz<T>::Matriz(int m, int n) {
    setLinhas(m);
    setColunas(n);
}

template<typename T>
Matriz<T>::Matriz(int m, int n, const T &valorPadrao) {

}

template<typename T>
void Matriz<T>::inserirValor(const T &data, int m, int n) {
    if (m>this->linhas && n> this->colunas)
        throw "Número de linha/coluna excede limite existente. Não foi possível inserir";
    if (data = this->valorPadrao)
        return ;
    else
        //procurar nó da linha
        if 

}

template<typename T>
T Matriz<T>::acessarValor() {
    return nullptr;
}


//https://www.youtube.com/watch?v=C_ePgrEbLs0