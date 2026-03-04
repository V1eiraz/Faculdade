package br.com.cefetmg.batalhapokemon.model.normal.Treecko;

import br.com.cefetmg.batalhapokemon.model.Pokemon;
import br.com.cefetmg.batalhapokemon.model.dtos.Ataque;
import br.com.cefetmg.batalhapokemon.model.enums.Tipo;

public class Grovyle extends Treecko{

    public Grovyle(String apelido) {
        super(apelido);
        this.especie = "Grovyle";
        this.nivelEvolucao = 2;
        this.vidaMaxima = 50.0F;
        this.vida = 50.0F;
        this.ataque = 65.0F;
        this.defesa = 45.0F;
        this.velocidade = 95.0F;
        this.adicionarAtaque(new Ataque("Giga Drain", 75, Tipo.PLANTA));
    }

    public Pokemon evoluir() {
        return new Sceptile(this.getApelido());
    }

    public void realizarSom() {
        System.out.println("Grovyle!");
    }

}