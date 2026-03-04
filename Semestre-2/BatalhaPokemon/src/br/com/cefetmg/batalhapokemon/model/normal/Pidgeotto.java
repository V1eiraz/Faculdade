package br.com.cefetmg.batalhapokemon.model.normal;

import br.com.cefetmg.batalhapokemon.model.Pokemon;
import br.com.cefetmg.batalhapokemon.model.dtos.Ataque;
import br.com.cefetmg.batalhapokemon.model.enums.Tipo;

public class Pidgeotto extends Pidgey{

    public Pidgeotto(String apelido) {
        super(apelido);
        this.especie = "Pidgeotto";
        this.nivelEvolucao = 2;
        this.vidaMaxima = 63.0F;
        this.vida = 63.0F;
        this.ataque = 60.0F;
        this.defesa = 55.0F;
        this.velocidade = 71.0F;
        this.adicionarAtaque(new Ataque("Air Slash", 75, Tipo.NORMAL));
    }

    public Pokemon evoluir() {
        return new Pidgeot(this.getApelido());
    }

    public void realizarSom() {
        System.out.println("Pidgeotto!");
    }

}