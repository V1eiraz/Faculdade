package br.com.cefetmg.batalhapokemon.model.normal;

import br.com.cefetmg.batalhapokemon.model.Pokemon;
import br.com.cefetmg.batalhapokemon.model.dtos.Ataque;
import br.com.cefetmg.batalhapokemon.model.enums.Tipo;

public class Raticate extends Rattata{

    public Raticate(String apelido) {
        super(apelido);
        this.especie = "Raticate";
        this.nivelEvolucao = 2;
        this.vidaMaxima = 55.0F;
        this.vida = 55.0F;
        this.ataque = 81.0F;
        this.defesa = 60.0F;
        this.velocidade = 97.0F;
        this.adicionarAtaque(new Ataque("Double-Edge", 90, Tipo.NORMAL));
    }

    public Pokemon evoluir() {
        return this;
    }

    public void realizarSom() {
        System.out.println("Raticate!");
    }

}