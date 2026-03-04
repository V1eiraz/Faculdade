public class DroideAstromech {
    private String nome;
    public DroideAstromech(String nome){
        this.nome = nome;
    }
    public void reparar (NaveEspacial nave){
        System.out.println(nome + " reparando " + nave.getNome());
    }
}
