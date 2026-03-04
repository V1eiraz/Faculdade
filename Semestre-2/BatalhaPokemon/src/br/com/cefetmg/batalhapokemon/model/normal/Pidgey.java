package br.com.cefetmg.batalhapokemon.model.normal;

import br.com.cefetmg.batalhapokemon.model.Pokemon;
import br.com.cefetmg.batalhapokemon.model.dtos.Ataque;
import br.com.cefetmg.batalhapokemon.model.enums.Tipo;

public class Pidgey extends Pokemon {

    public Pidgey(String apelido) {
        super(apelido, "Pidgey", Tipo.NORMAL, 1, 40.0, 45.0, 40.0F, 56.0F);
        this.adicionarAtaque(new Ataque("Tackle", 20, Tipo.NORMAL));
        this.adicionarAtaque(new Ataque("Quick Attack", 15, Tipo.NORMAL));
    }

    public Pokemon evoluir() {
        return new Pidgeotto(this.getApelido());
    }

    public void realizarSom() {
        System.out.println("Pidgey!");
    }
}