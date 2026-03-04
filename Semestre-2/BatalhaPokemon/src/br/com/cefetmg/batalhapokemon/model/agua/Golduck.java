package br.com.cefetmg.batalhapokemon.model.agua;

import br.com.cefetmg.batalhapokemon.model.Pokemon;
import br.com.cefetmg.batalhapokemon.model.dtos.Ataque;
import br.com.cefetmg.batalhapokemon.model.enums.Tipo;

public class Golduck extends Psyduck {
   public Combusken(String apelido) {
      super(apelido);
        this.especie = "Golduck";
        this.nivelEvolucao = 2;
        this.vidaMaxima = (double) 80.0F;
        this.vida = (double) 80.0F;
        this.ataque = (double) 82.0F;
        this.defesa = (double) 80.0F;
        this.velocidade = (double) 85.0F;
        this.adicionarAtaque(new Ataque("Waterjet", 90, Tipo.AGUA));
   }

   public Pokemon evoluir() {
      return this;
   }

   public void realizarSom() {
      System.out.println("Golduck!");
   }
}