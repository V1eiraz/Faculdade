package br.com.pagamentos.pagamentos.impl;

import br.com.pagamentos.IMetodoPagamento;
import br.com.pagamentos.pagamentos.modelo.DetalhesDinheiro;
import br.com.pagamentos.pagamentos.modelo.DetalhesPagamento;
import br.com.pagamentos.pagamentos.modelo.ResultadoTransacao;

public class PagamentoDinheiro implements IMetodoPagamento {
    @Override
    public ResultadoTransacao processarPagamento(DetalhesPagamento detalhesPagamento) {
        if (!(detalhesPagamento instanceof DetalhesDinheiro)) {
            System.err.println("Erro: Detalhes de pagamento inválidos para Dinheiro.");
            return ResultadoTransacao.falhou("Detalhes de pagamento inválidos para Dinheiro.");
        }

        DetalhesDinheiro detalhes = (DetalhesDinheiro) detalhesPagamento;

        if (detalhes.recebido() < detalhes.valor()) {
            return ResultadoTransacao.falhou("Valor recebido insuficiente.");
        }

        double troco = detalhes.recebido() - detalhes.valor();

        System.out.println("Processando pagamento em Dinheiro:");
        System.out.println("  Valor da compra: R$ " + detalhes.valor());
        System.out.println("  Valor recebido:  R$ " + detalhes.recebido());
        System.out.println("  Troco:           R$ " + troco);

        return ResultadoTransacao.sucesso(
                "Pagamento em dinheiro aprovado. Troco: R$ " + troco,
                "DIN-" + System.currentTimeMillis()
        );
    }

    @Override
    public String getTipo() {
        return "Dinheiro";
    }
}