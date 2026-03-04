#ifndef PRODUTO_HPP
#define PRODUTO_HPP
#include<string>
#include<vector>

using namespace std;

class produto{
public:
double peso;
string unidade;
double preco;
string nome;
int ID;
int quantidade;

produto(int _id, string _nome, double _preco, double _peso, string _unidade);
};

#endif