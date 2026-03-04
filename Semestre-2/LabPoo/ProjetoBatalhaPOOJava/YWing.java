
public class YWing extends NaveEspacial implements IHiperdrive {

    public YWing(String nomePiloto) {
        super("Y-Wing de " + nomePiloto, 80, 50); // Define energia padrão de 100
    }

    @Override
    public void mover() {
        System.out.println(getNome() + "Se move lentamente, focada no bombardeio");
    }

    @Override
    public void disparar() {
        System.out.println(getNome() + " dispara um torpedo de prótons");
    }

    public void disparar(IDestruivel alvo) {
        System.out.println(getNome() + " mira e dispara lasers em " + alvo.getNome() + "!");
        alvo.receberDano(10);
        alvo.receberDano(10);
        alvo.receberDano(10);
        alvo.receberDano(10);
    }
    @Override
    public void saltarParaHiperespaco(){ System.out.println(getNome() + " entrando no Hiperespaço!!");}
}
