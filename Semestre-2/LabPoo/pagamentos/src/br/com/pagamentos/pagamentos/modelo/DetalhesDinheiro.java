package br.com.pagamentos.pagamentos.modelo;

public record DetalhesDinheiro(double valor, double recebido) implements DetalhesEspecificosPagamento {
    public DetalhesDinheiro {
        validarValor(valor);
        if (recebido <= 0) {
            throw new IllegalArgumentException("O valor recebido deve ser positivo.");
        }
    }

    @Override
    public void validarValor(double valor) {
        if (valor <= 0) {
            throw new IllegalArgumentException("Valor do pagamento deve ser positivo.");
        }
    }
}