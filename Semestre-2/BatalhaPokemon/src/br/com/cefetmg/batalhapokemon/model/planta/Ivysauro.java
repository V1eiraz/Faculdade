package br.com.cefetmg.batalhapokemon.model.normal.Bulbassauro;

import br.com.cefetmg.batalhapokemon.model.Pokemon;
import br.com.cefetmg.batalhapokemon.model.dtos.Ataque;
import br.com.cefetmg.batalhapokemon.model.enums.Tipo;

public class Ivysauro extends Bulbassauro{

    public Ivysauro(String apelido) {
        super(apelido);
        this.especie = "Ivysauro";
        this.nivelEvolucao = 2;
        this.vidaMaxima = 60.0F;
        this.vida = 60.0F;
        this.ataque = 62.0F;
        this.defesa = 63.0F;
        this.velocidade = 60.0F;
        this.adicionarAtaque(new Ataque("Magical Leaf", 60, Tipo.PLANTA));
    }

    public Pokemon evoluir() {
        return new Venusauro(this.getApelido());
    }

    public void realizarSom() {
        System.out.println("Ivysaur!");
    }

}