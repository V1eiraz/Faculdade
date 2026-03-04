package br.com.cefetmg.batalhapokemon.model.normal;

import br.com.cefetmg.batalhapokemon.model.Pokemon;
import br.com.cefetmg.batalhapokemon.model.dtos.Ataque;
import br.com.cefetmg.batalhapokemon.model.enums.Tipo;

public class Rattata extends Pokemon {

    public Rattata(String apelido) {
        super(apelido, "Rattata", Tipo.NORMAL, 1, 30.0, 56.0, 35.0F, 72.0F);
        this.adicionarAtaque(new Ataque("Tackle", 20, Tipo.NORMAL));
        this.adicionarAtaque(new Ataque("Quick Attack", 15, Tipo.NORMAL));
    }

    public Pokemon evoluir() {
        return new Raticate(this.getApelido());
    }

    public void realizarSom() {
        System.out.println("Ratata!");
    }
}