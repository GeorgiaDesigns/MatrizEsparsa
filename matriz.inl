
template<typename T>
int matriz<T>::getValorPadrao() {
    return this->valorPadrao;
}

template<typename T>
int matriz<T>::getLinhas() {
    return this->linhas;
}

template<typename T>
int matriz<T>::getColunas() {
    return this->colunas;
}

template<typename T>
void matriz<T>::setValorPadrao(int v) {
    this->valorPadrao = v;
}

template<typename T>
void matriz<T>::setLinhas(int m) {
    this->linhas = m;
}

template<typename T>
void matriz<T>::setColunas(int n) {
    this->colunas = n;
}

template<typename T>
matriz<T>::matriz(int m, int n) {
    setLinhas(m);
    setColunas(n);
}

template<typename T>
matriz<T>::matriz(int m, int n, int valorPadrao) {

}

template<typename T>
void matriz<T>::atribuirValor(const T &data, int m, int n) {

}

template<typename T>
T matriz<T>::acessarValor() {
    return nullptr;
}


//https://www.youtube.com/watch?v=C_ePgrEbLs0