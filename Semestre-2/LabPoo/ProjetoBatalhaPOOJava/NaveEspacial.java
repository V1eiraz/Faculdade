/**
 * CONCEITOS: Classe Abstrata, Herança (Base), Encapsulamento
 * * 'abstract' significa que não podemos criar uma "NaveEspacial" genérica.
 * Temos que criar tipos específicos (XWing, TIE).
 * * Implementa 'IDestruivel' pois toda nave é, por definição, um alvo.
 */
public abstract class NaveEspacial implements IDestruivel {

    /**
     * CONCEITO: Encapsulamento
     * Atributos são 'private'. O acesso é controlado via métodos (get/set).
     * Nenhuma classe externa pode fazer 'nave.energia = -1000'.
     */
    private static int navesCriadas = 0;
    private String nome;
    private int energia;
    private int escudos;


    // Construtor usado pelas classes filhas
    public NaveEspacial(String nome, int energiaInicial, int escudoInicial) {
        this.nome = nome;
        this.energia = energiaInicial;
        this.escudos = escudoInicial;
        navesCriadas ++;
    }

    // --- Métodos Abstratos (Obrigatórios para as filhas) ---

    /**
     * CONCEITO: Método Abstrato (parte do Polimorfismo)
     * Toda nave 'move', mas cada uma move de um jeito.
     * Forçamos as classes filhas a implementar (sobrescrever) este método.
     */
    public abstract void mover();

    public abstract void disparar();


    // --- Implementação da Interface IDestruivel ---
    // (Este comportamento é comum a todas as naves)

    @Override
    public String getNome() {
        return this.nome;
    }

    @Override
    public void receberDano(int quantidade) {
        if(this.escudos > 0){
            this.escudos-=quantidade;
        }
        else{
            this.energia -= quantidade;
            if (this.energia > 0) {
                System.out.println(this.nome + "Meu escudo foi quebrado! Ainda tenho " + this.energia + " de energia restante!");
            }
            }
        if (this.energia < 0) {
            this.energia = 0;
        }
        System.out.println(this.nome + " foi atingido! Energia restante: " + this.energia);


    }

    @Override
    public boolean estaDestruido() {
        return this.energia <= 0;
    }

    // --- Métodos de Acesso (Encapsulamento) ---
    
    public int getEnergia() {
        return this.energia;
    }
    public static int getNavesCriadas(){
        return navesCriadas;
    }
}

