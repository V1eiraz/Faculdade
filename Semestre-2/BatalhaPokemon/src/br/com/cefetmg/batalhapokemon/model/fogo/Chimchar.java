package br.com.cefetmg.batalhapokemon.model.fogo;

import br.com.cefetmg.batalhapokemon.model.Pokemon;
import br.com.cefetmg.batalhapokemon.model.dtos.Ataque;
import br.com.cefetmg.batalhapokemon.model.enums.Tipo;

public class Chimchar extends Pokemon {
   public Chimchar(String apelido) {
      super(apelido, "Chimchar", Tipo.FOGO, 1, 60.0, 12.0, 15.0, 15.0);
      this.adicionarAtaque(new Ataque("Blaze", 10, Tipo.FOGO));
      this.adicionarAtaque(new Ataque("Iron Fist", 15, Tipo.NORMAL));
   }

   public Pokemon evoluir() {
      return new Monferno(this.getApelido());
   }

   public void realizarSom() {
      System.out.println("Chimchar!");
   }
}