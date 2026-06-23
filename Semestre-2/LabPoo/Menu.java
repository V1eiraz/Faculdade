package br.com.pagamentos.menu;

import java.util.List;
import java.util.Objects;
import java.util.Scanner;

public class Menu implements MenuOpcao{
    private final String titulo;
    private final List<MenuOpcao> opcoes ;
    private final Scanner scanner;
    public Menu(String titulo, Scanner scanner) {
        this.titulo = Objects.requireNonNull(titulo, "O titulo do menu nao pode ser nulo")
    }
}