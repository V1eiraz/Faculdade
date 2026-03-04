#ifndef LISTA_PRODUTOS_HPP
#define LISTA_PRODUTOS_HPP

#include"produto.hpp"
#include<vector>

class lista_produtos
{
private:
    vector <produto> lista;

public:
void add_produto(produto p);
bool add_quantidade(int idBusca, int quantidade);
int deduzir_lista(int idBusca, int quantidadeComprada);
produto* buscarproduto(int idBusca);
void listarTudo();
};
#endif