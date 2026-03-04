#include <iostream>
#include "lista_prod.hpp"

using namespace std;

int main()
{
    lista_produtos minhaLista;
    int opcao = 0;
    double totalGasto = 0.0;

    while (opcao != 5)
    {
        cout << "\n=== MINHA LISTA DE COMPRAS ===\n";
        cout << "1. Adicionar item na lista (Ex: Arroz)\n";
        cout << "2. Aumentar quantidade de um item (Ex: Mais 1 Arroz)\n";
        cout << "3. Ver o que falta comprar\n";
        cout << "4. COLOCAR NO CARRINHO (Dar baixa na lista)\n";
        cout << "5. Sair\n";
        cout << ">> Total Gasto ate agora: R$ " << totalGasto << endl;
        cout << "Escolha: ";
        cin >> opcao;

        if (opcao == 1)
        {
            int id;
            string nome, unidade;
            double preco, peso;

            cout << "--- Novo Item ---\n";
            cout << "ID (Apenas números inteiros): ";
            cin >> id;
            cout << "Nome do Produto: ";
            cin.ignore();
            getline(cin, nome);
            cout << "Preco estimado (unidade): ";
            cin >> preco;
            cout << "Peso/Volume(apenas o número): ";
            cin >> peso;
            cout << "Unidade (kg, lt, cx): ";
            cin >> unidade;

            produto novo(id, nome, preco, peso, unidade);

            cout << "Quantos voce precisa comprar? ";
            cin >> novo.quantidade;

            minhaLista.add_produto(novo);
        }
        else if (opcao == 2)
        {
            int id, quantidade;
            cout << "Qual ID do produto que você deseja aumentar a quantidade? ";
            cin >> id;
            cout << "Adicionar mais quantos na lista? ";
            cin >> quantidade;

            if (minhaLista.add_quantidade(id, quantidade))
            {
                cout << ">> Lista atualizada!\n";
            }
            else
            {
                cout << ">> Erro: Item nao encontrado na lista.\n";
            }
        }
        else if (opcao == 3)
        {
            minhaLista.listarTudo();
        }
        else if (opcao == 4)
        {
            int id, quantidade;
            cout << "--- NO MERCADO (Pegando produtos) ---\n";
            cout << "Qual ID voce pegou? ";
            cin >> id;
            cout << "Quantas unidades voce colocou no carrinho? ";
            cin >> quantidade;

            int resultado = minhaLista.deduzir_lista(id, quantidade);

            if (resultado == 0)
            {
                produto *p = minhaLista.buscarproduto(id);
                double custo = p->preco * quantidade;
                totalGasto += custo;

                cout << ">> " << quantidade << "x " << p->nome << " colocado(s) no carrinho.\n";
                cout << ">> Custo parcial: R$ " << custo << endl;
                cout << ">> Item riscado da lista!\n";
            }
            else if (resultado == 1)
            {
                cout << ">> Erro: Esse item nao estava na sua lista.\n";
            }
            else if (resultado == 2)
            {
                cout << ">> Voce pegou mais do que estava anotado na lista!\n";
            }
        }
    }
    return 0;
}