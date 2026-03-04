
import java.util.List;

/**
 * Ponto de entrada da simulação. Aqui demonstramos o POLIMORFISMO e a
 * SOBRECARGA.
 */
public class Main {

    public static void main(String[] args) {

        System.out.println("--- PARTE 1: DEMONSTRAÇÃO DE POLIMORFISMO (HERANÇA) ---");
        System.out.println("Criando uma lista do tipo ABSTRATO (NaveEspacial)...");

        // Criamos uma lista da CLASSE MÃE (Abstrata)
        List<NaveEspacial> esquadrao = List.of(
                new XWing("Luke Skywalker","BB-8"),
                new TIEFighter("Piloto Imperial 001"),
                new YWing("Kallus"),
                new XWing("Wedge Antilles", "R2-D2"),
                new TIEFighter("Darth Vader (Protótipo TIE)"),
                new TIEFighter("Darth Vader Custom", 150));

        // O "Loop Polimórfico"
        // A variável 'nave' é do tipo 'NaveEspacial', mas o Java sabe
        // qual método 'mover()' e 'disparar()' real deve chamar em tempo de execução.
        for (NaveEspacial nave : esquadrao) {
            nave.mover();
            nave.disparar();
            System.out.println("---");
        }

        // -----------------------------------------------------------------
        System.out.println("\n--- PARTE 2: DEMONSTRAÇÃO DE SOBRECARGA (OVERLOAD) ---");

        // Precisamos de uma referência direta à XWing para ver seus métodos específicos
        XWing luke = (XWing) esquadrao.get(0); // Pegando a X-Wing do Luke da lista
        YWing kallus = (YWing) esquadrao.get(2);
        TIEFighter vader = (TIEFighter) esquadrao.get(4); // Pegando o TIE do Vader
        TIEFighter customvader = (TIEFighter) esquadrao.get(5);

        // Chamando o método 1 (sem parâmetros)
        luke.disparar();
        kallus.disparar();

        // Chamando o método 2 (SOBRECARGA, com parâmetro)
        System.out.println("\n(Luke ataca Vader...)");
        luke.disparar(vader); // Chama a versão sobrecarregada!
        kallus.disparar(vader);

        // TIEFighter não tem esse método sobrecarregado:
        // vader.disparar(luke); // -> ISSO DARIA ERRO DE COMPILAÇÃO!
        // -----------------------------------------------------------------
        System.out.println("\n--- PARTE 3: DEMONSTRAÇÃO DE POLIMORFISMO (INTERFACES) ---");
        System.out.println("Criando uma lista do tipo INTERFACE (IDestruivel)...");

        // Esta lista pode conter QUALQUER COISA que implemente 'IDestruivel'
        List<IDestruivel> alvosNaTrincheira = List.of(
                esquadrao.get(1), // O TIE Fighter
                new TorreTurbolaser("Beta-04"),
                esquadrao.get(0), // A X-Wing do Luke
                new TorreTurbolaser("Alfa-01"),
                esquadrao.get(2),
                new TorreTurbolaser("Charlie-02"));

        System.out.println("\n(Um ataque coordenado atinge todos os alvos...)");

        // Loop Polimórfico (baseado na Interface)
        // O loop não se importa se o 'alvo' é uma NaveEspacial ou uma TorreTurbolaser.
        // Ele só sabe que o objeto 'sabe' como 'receberDano'.
        for (IDestruivel alvo : alvosNaTrincheira) {
            System.out.println("Atacando " + alvo.getNome() + "...");
            alvo.receberDano(70); // Aplicando um dano pesado
            if (alvo.estaDestruido()) {
                System.out.println(alvo.getNome() + " foi destruído!");
            }
            System.out.println("---");
        }
        //--------------------------------------------------------------------------------
        System.out.println("PARTE 4 : TESTE DE CAPACIDADE (IHiperdrive)");
        System.out.println("Verificando quais naves podem ir para o hiperespaço");

        for(NaveEspacial nave: esquadrao){
            if (nave instanceof IHiperdrive){
                IHiperdrive navehiper = (IHiperdrive) nave;
                navehiper.saltarParaHiperespaco();
            }
            else{
                System.out.println(nave.getNome() + " Não pode adentrar o Hiperespaço!!");
            }
        }
        //--------------------------------------------------------------------------------
        System.out.println("PARTE 5 : TESTE DE REPARO (DroideAstromech)");

        System.out.println("A energia do TIE customizado de Vader é de " + customvader.getEnergia() );

        luke.iniciarReparo();

        //--------------------------------------------------------------------------------
        System.out.println("PARTE 6 : NAVES CRIADAS");

        System.out.println("Total de naves na batalha: " + NaveEspacial.getNavesCriadas());
    }
}
