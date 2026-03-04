package br.com.cefetmg.batalhapokemon.model.fogo;

import br.com.cefetmg.batalhapokemon.model.Pokemon;
import br.com.cefetmg.batalhapokemon.model.dtos.Ataque;
import br.com.cefetmg.batalhapokemon.model.enums.Tipo;

public class Combusken extends Torchic {
   public Combusken(String apelido) {
      super(apelido);
        this.especie = "Combusken";
        this.nivelEvolucao = 2;
        this.vidaMaxima = (double) 60.0F;
        this.vida = (double) 60.0F;
        this.ataque = (double) 85.0F;
        this.defesa = (double) 60.0F;
        this.velocidade = (double) 55.0F;
        this.adicionarAtaque(new Ataque("Blaze", 50, Tipo.FOGO));
   }

   public Pokemon evoluir() {
      return new Blaziken(this.getApelido());
   }

   public void realizarSom() {
      System.out.println("Combusken!");
   }
}