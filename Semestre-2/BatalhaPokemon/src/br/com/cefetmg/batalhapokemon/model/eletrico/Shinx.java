package br.com.cefetmg.batalhapokemon.model.eletrico;

import br.com.cefetmg.batalhapokemon.model.Pokemon;
import br.com.cefetmg.batalhapokemon.model.dtos.Ataque;
import br.com.cefetmg.batalhapokemon.model.enums.Tipo;

public class Shinx extends Pokemon {

    public Shinx(String apelido) {
        super(apelido, "Shinx", Tipo.ELETRICO, 1, 45.0, 65.0, 34.0, 45.0);
        this.adicionarAtaque(new Ataque("Tackle", 10, Tipo.NORMAL));
        this.adicionarAtaque(new Ataque("Spark", 25, Tipo.ELETRICO));
    }

    public Pokemon evoluir() {
        return new Luxio(this.getApelido());
    }

    public void realizarSom() {
        System.out.println("Shinx!");
    }



}