package br.com.cefetmg.batalhapokemon.model.agua;

import br.com.cefetmg.batalhapokemon.model.Pokemon;
import br.com.cefetmg.batalhapokemon.model.dtos.Ataque;
import br.com.cefetmg.batalhapokemon.model.enums.Tipo;

public class Froakie extends Pokemon {
   public Froakie(String apelido) {
      super(apelido, "Froakie", Tipo.AGUA, 1, 41.0, 56.0, 40.0, 71.0);
      this.adicionarAtaque(new Ataque("Bubble Beam", 25, Tipo.AGUA));
      this.adicionarAtaque(new Ataque("Watergun", 15, Tipo.AGUA));
   }

   public Pokemon evoluir() {
      return new Frogadier(this.getApelido());
   }

   public void realizarSom() {
      System.out.println("Froakie!");
   }
}