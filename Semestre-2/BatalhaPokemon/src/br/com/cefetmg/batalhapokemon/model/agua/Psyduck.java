package br.com.cefetmg.batalhapokemon.model.agua;

import br.com.cefetmg.batalhapokemon.model.Pokemon;
import br.com.cefetmg.batalhapokemon.model.dtos.Ataque;
import br.com.cefetmg.batalhapokemon.model.enums.Tipo;

public class Psyduck extends Pokemon {
   public Psyduck(String apelido) {
      super(apelido, "Psyduck", Tipo.AGUA, 1, 50.0, 52.0, 48.0, 55.0);
      this.adicionarAtaque(new Ataque("Bubble", 15, Tipo.AGUA));
      this.adicionarAtaque(new Ataque("Watergun", 10, Tipo.AGUA));
   }

   public Pokemon evoluir() {
      return new Golduck(this.getApelido());
   }

   public void realizarSom() {
      System.out.println("Psyduck!");
   }
}