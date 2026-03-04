package br.com.cefetmg.batalhapokemon.model.fogo;

import br.com.cefetmg.batalhapokemon.model.Pokemon;
import br.com.cefetmg.batalhapokemon.model.dtos.Ataque;
import br.com.cefetmg.batalhapokemon.model.enums.Tipo;

public class Monferno extends Chimchar {
   public Monferno(String apelido) {
      super(apelido);
        this.especie = "Monferno";
        this.nivelEvolucao = 2;
        this.vidaMaxima = (double) 64.0F;
        this.vida = (double) 64.0F;
        this.ataque = (double) 78.0F;
        this.defesa = (double) 52.0F;
        this.velocidade = (double) 81.0F;
        this.adicionarAtaque(new Ataque("Flamethrower", 90, Tipo.FOGO));
   }

   public Pokemon evoluir() {
      return new Infernape(this.getApelido());
   }

   public void realizarSom() {
      System.out.println("sheiiki-ráh!");
   }
}