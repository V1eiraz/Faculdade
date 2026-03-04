package br.com.cefetmg.batalhapokemon.model.normal.Bulbassauro;

import br.com.cefetmg.batalhapokemon.model.Pokemon;
import br.com.cefetmg.batalhapokemon.model.dtos.Ataque;
import br.com.cefetmg.batalhapokemon.model.enums.Tipo;

public class Bulbassauro extends Pokemon {

    public Bulbassauro(String apelido) {
        super(apelido, "Bulbassauro", Tipo.PLANTA, 1, 45.0, 49.0, 49.0F, 45.0F);
        this.adicionarAtaque(new Ataque("Tackle", 20, Tipo.NORMAL));
        this.adicionarAtaque(new Ataque("Vine Whip", 25, Tipo.PLANTA));
    }

    public Pokemon evoluir() {
        return new Ivysauro(this.getApelido());
    }

    public void realizarSom() {
        System.out.println("Bulbasaur!");
    }
}