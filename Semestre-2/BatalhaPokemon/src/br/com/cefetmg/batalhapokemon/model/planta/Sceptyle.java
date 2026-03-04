package br.com.cefetmg.batalhapokemon.model.normal.Treecko;

import br.com.cefetmg.batalhapokemon.model.Pokemon;
import br.com.cefetmg.batalhapokemon.model.dtos.Ataque;
import br.com.cefetmg.batalhapokemon.model.enums.Tipo;

public class Sceptile extends Grovyle{

    public Sceptile(String apelido) {
        super(apelido);
        this.especie = "Sceptile";
        this.nivelEvolucao = 3;
        this.vidaMaxima = 70.0F;
        this.vida = 70.0F;
        this.ataque = 85.0F;
        this.defesa = 65.0F;
        this.velocidade = 120.0F;
        this.adicionarAtaque(new Ataque("Leaf Storm", 130, Tipo.PLANTA));
    }

    public Pokemon evoluir() {
        return this;
    }

    public void realizarSom() {
        System.out.println("Sceptile!");
    }
}