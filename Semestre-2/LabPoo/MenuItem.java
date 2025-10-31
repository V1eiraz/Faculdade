import java.util.Objects;

public class MenuItem implements MenuOpcao{
    private final String titulo;
    private final Runnable acao;
    public MenuItem(String titulo, Runnable acao){
        this.titulo = Objects.requireNonNull(titulo, "O titulo do menu nao pode ser nulo");
        this.acao = Objects.requireNonNull(acao, "A ação do menu nao pode ser nula");
    }
    @Override
    public String getTitulo() {
        return this.titulo;
    } 
    @Override
    public void executar(){
        this.acao.run();
    }
}