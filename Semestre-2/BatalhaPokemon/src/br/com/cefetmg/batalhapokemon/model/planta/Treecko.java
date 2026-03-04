package br.com.cefetmg.batalhapokemon.model.normal.Treecko;

import br.com.cefetmg.batalhapokemon.model.Pokemon;
import br.com.cefetmg.batalhapokemon.model.dtos.Ataque;
import br.com.cefetmg.batalhapokemon.model.enums.Tipo;

public class Treecko extends Pokemon {

    public Treecko(String apelido) {
        super(apelido, "Treecko", Tipo.PLANTA, 1, 40.0, 45.0, 35.0F, 70.0F);
        this.adicionarAtaque(new Ataque("Tackle", 20, Tipo.NORMAL));
        this.adicionarAtaque(new Ataque("Absorb", 10, Tipo.PLANTA));
    }

    public Pokemon evoluir() {
        return new Grovyle(this.getApelido());
    }

    public void realizarSom() {
        System.out.println("Treecko!");
    }
}