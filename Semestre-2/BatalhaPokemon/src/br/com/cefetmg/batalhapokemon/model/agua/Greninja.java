package br.com.cefetmg.batalhapokemon.model.agua;

import br.com.cefetmg.batalhapokemon.model.Pokemon;
import br.com.cefetmg.batalhapokemon.model.dtos.Ataque;
import br.com.cefetmg.batalhapokemon.model.enums.Tipo;

public class Greninja extends Frogadier {
   public Greninja(String apelido) {
      super(apelido);
        this.especie = "Greninja";
        this.nivelEvolucao = 3;
        this.vidaMaxima = (double) 72.0F;
        this.vida = (double) 72.0F;
        this.ataque = (double) 95.0F;
        this.defesa = (double) 67.0F;
        this.velocidade = (double) 122.0F;
        this.adicionarAtaque(new Ataque("Hyper Beam", 150, Tipo.NORMAL));
   }

   public Pokemon evoluir() {
      return this;
   }

   public void realizarSom() {
      System.out.println("Grrsháa!");
   }
}