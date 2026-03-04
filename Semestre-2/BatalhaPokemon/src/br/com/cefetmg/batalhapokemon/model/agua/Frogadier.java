package br.com.cefetmg.batalhapokemon.model.agua;

import br.com.cefetmg.batalhapokemon.model.Pokemon;
import br.com.cefetmg.batalhapokemon.model.dtos.Ataque;
import br.com.cefetmg.batalhapokemon.model.enums.Tipo;

public class Frogadier extends Froakie {
   public Frogadier(String apelido) {
      super(apelido);
        this.especie = "Frogadier";
        this.nivelEvolucao = 2;
        this.vidaMaxima = (double) 54.0F;
        this.vida = (double) 54.0F;
        this.ataque = (double) 63.0F;
        this.defesa = (double) 52.0F;
        this.velocidade = (double) 97.0F;
        this.adicionarAtaque(new Ataque("Hydro Pump", 110, Tipo.AGUA));
   }

   public Pokemon evoluir() {
      return new Greninja(this.getapelido());
   }

   public void realizarSom() {
      System.out.println("Frogadier!");
   }
}