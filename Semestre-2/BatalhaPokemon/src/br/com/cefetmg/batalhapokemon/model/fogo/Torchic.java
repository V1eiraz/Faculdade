package br.com.cefetmg.batalhapokemon.model.fogo;

import br.com.cefetmg.batalhapokemon.model.Pokemon;
import br.com.cefetmg.batalhapokemon.model.dtos.Ataque;
import br.com.cefetmg.batalhapokemon.model.enums.Tipo;

public class Torchic extends Pokemon {
   public Chimchar(String apelido) {
      super(apelido, "Torchic", Tipo.FOGO, 1, 45.0, 60.0, 40.0, 45.0);
      this.adicionarAtaque(new Ataque("Flamethrower", 25, Tipo.FOGO));
      this.adicionarAtaque(new Ataque("Scratch", 15, Tipo.NORMAL));
   }

   public Pokemon evoluir() {
      return new Combusken(this.getApelido());
   }

   public void realizarSom() {
      System.out.println("Torchic!");
   }
}