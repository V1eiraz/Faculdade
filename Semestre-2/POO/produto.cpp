#include"produto.hpp"
#include<iostream>
using namespace std;

produto::produto(int _id, string _nome, double _preco, double _peso, string _unidade){
    ID =_id;
    nome =_nome;
    preco =_preco;
    peso =_peso;
    unidade =_unidade;
    quantidade = 0;
}
