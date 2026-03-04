package br.com.cefetmg.batalhapokemon.model.eletrico;

import br.com.cefetmg.batalhapokemon.model.Pokemon;
import br.com.cefetmg.batalhapokemon.model.dtos.Ataque;
import br.com.cefetmg.batalhapokemon.model.enums.Tipo;

public class Pichu extends Pokemon {

    public Pichu(String apelido) {
        super(apelido, "Pichu", Tipo.ELETRICO, 1, 20.0, 40.0, 15.0, 60.0);
        this.adicionarAtaque(new Ataque("Quick Attack", 15, Tipo.NORMAL));
        this.adicionarAtaque(new Ataque("Thunder Shock", 25, Tipo.ELETRICO));
    }

    public Pokemon evoluir() {
        return new Pikachu(this.getApelido());
    }

    public void realizarSom() {
        System.out.println("Pichu!");
    }
}