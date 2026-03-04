package br.com.cefetmg.batalhapokemon.model.fogo;

import br.com.cefetmg.batalhapokemon.model.Pokemon;
import br.com.cefetmg.batalhapokemon.model.dtos.Ataque;
import br.com.cefetmg.batalhapokemon.model.enums.Tipo;

public class Infernape extends Monferno {
   public Monferno(String apelido) {
      super(apelido);
        this.especie = "Infernape";
        this.nivelEvolucao = 3;
        this.vidaMaxima = (double) 76.0F;
        this.vida = (double) 76.0F;
        this.ataque = (double) 104.0F;
        this.defesa = (double) 71.0F;
        this.velocidade = (double) 108.0F;
        this.adicionarAtaque(new Ataque("Hurricane flame", 120, Tipo.FOGO));
   }

   public Pokemon evoluir() {
      return this;
   }

   public void realizarSom() {
      System.out.println("Infernape!");
   }
}