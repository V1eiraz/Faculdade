#include <iostream>
#include<iomanip>
#include "lista_prod.hpp"
using namespace std;


void lista_produtos :: add_produto(produto p){
    lista.push_back(p);
    cout<< " - Item adicionado na sua lista de compras!!\n";
}

bool lista_produtos :: add_quantidade(int idBusca, int quantidade){
    for (size_t i=0; i<lista.size(); i++){
        if(lista[i].ID==idBusca){
            lista[i].quantidade +=quantidade;
            return true;
        }
    }
    return false;
}

int lista_produtos :: deduzir_lista(int idBusca, int quantidadeComprada){
    for (size_t i=0;i<lista.size();i++){
        if(lista[i].quantidade >= quantidadeComprada){
            lista[i].quantidade-= quantidadeComprada;
            return 0;
        }
        else{
            return 2;
        }
    }
    return 1;
}

produto* lista_produtos::buscarproduto(int idBusca){
    for (size_t i = 0; i < lista.size();i++){
        if(lista[i].ID == idBusca){
            return &lista[i];
        }
    }
    return nullptr;
}

void lista_produtos::listarTudo(){
    if(lista.empty()){
        cout << "Sua lista de compras está vazia. Nada para comprar!\n";
        return;
    }
    cout<< "\n--- ITENS QUE PRECISO COMPRAR ---\n";
    for (const auto& p : lista){
        if(p.quantidade > 0 ){
            cout<< "ID: "<< p.ID
            << "\n - "<<p.nome
            << "\n - Preciso de: "<<p.quantidade << " "<<p.unidade
            << "\n - Preço: R$ "<<fixed<<setprecision(2)<<p.preco<<endl;

        }
    }
    cout << "----------------------------------------------------\n";
}