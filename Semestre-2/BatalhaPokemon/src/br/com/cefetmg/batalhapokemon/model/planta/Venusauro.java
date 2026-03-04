package br.com.cefetmg.batalhapokemon.model.normal.Bulbassauro;

import br.com.cefetmg.batalhapokemon.model.Pokemon;
import br.com.cefetmg.batalhapokemon.model.dtos.Ataque;
import br.com.cefetmg.batalhapokemon.model.enums.Tipo;

public class Ivysauro extends Ivysauro{

    public Pidgeot(String apelido) {
        super(apelido);
        this.especie = "Ivysauro";
        this.nivelEvolucao = 3;
        this.vidaMaxima = 80.0F;
        this.vida = 80.0F;
        this.ataque = 82.0F;
        this.defesa = 83.0F;
        this.velocidade = 80.0F;
        this.adicionarAtaque(new Ataque("Solar Beam", 120, Tipo.PLANTA));
    }

    public Pokemon evoluir() {
        return this;
    }

    public void realizarSom() {
        System.out.println("Venusaur!");
    }

}