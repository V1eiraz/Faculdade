package br.com.pagamentos.pagamentos.acoes;

import br.com.pagamentos.pagamentos.modelo.DetalhesDinheiro;
import br.com.pagamentos.pagamentos.modelo.DetalhesPagamento;

import java.util.Scanner;

public class DetalhesDinheiroPagamentoFactory implements DetalhesPagamentoFactory {
    @Override
    public DetalhesPagamento criar(Scanner scanner) throws IllegalArgumentException {
        System.out.print("Digite o valor do pagamento: ");
        double valor = Double.parseDouble(scanner.nextLine());

        System.out.print("Digite o valor recebido em dinheiro: ");
        double recebido = Double.parseDouble(scanner.nextLine());

        return new DetalhesDinheiro(valor, recebido);
    }
}