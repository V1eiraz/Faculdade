package br.com.cefetmg.batalhapokemon.model.fogo;

import br.com.cefetmg.batalhapokemon.model.Pokemon;
import br.com.cefetmg.batalhapokemon.model.dtos.Ataque;
import br.com.cefetmg.batalhapokemon.model.enums.Tipo;

public class Blaziken extends Combusken {
   public Blaziken(String apelido) {
      super(apelido);
        this.especie = "Blaziken";
        this.nivelEvolucao = 3;
        this.vidaMaxima = (double) 80.0F;
        this.vida = (double) 80.0F;
        this.ataque = (double) 120.0F;
        this.defesa = (double) 70.0F;
        this.velocidade = (double) 80.0F;
        this.adicionarAtaque(new Ataque("Flare Blitz", 120, Tipo.FOGO));
   }

   public Pokemon evoluir() {
      return this;
   }

   public void realizarSom() {
      System.out.println("Blaziken!");
   }
}