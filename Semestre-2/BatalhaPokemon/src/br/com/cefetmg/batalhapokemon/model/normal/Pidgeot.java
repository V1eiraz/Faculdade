package br.com.cefetmg.batalhapokemon.model.normal;

import br.com.cefetmg.batalhapokemon.model.Pokemon;
import br.com.cefetmg.batalhapokemon.model.dtos.Ataque;
import br.com.cefetmg.batalhapokemon.model.enums.Tipo;

public class Pidgeot extends Pidgeotto{

    public Pidgeot(String apelido) {
        super(apelido);
        this.especie = "Pidgeot";
        this.nivelEvolucao = 3;
        this.vidaMaxima = 83.0F;
        this.vida = 83.0F;
        this.ataque = 80.0F;
        this.defesa = 75.0F;
        this.velocidade = 101.0F;
        this.adicionarAtaque(new Ataque("Brave Bird", 120, Tipo.NORMAL));
    }

    public Pokemon evoluir() {
        return this;
    }

    public void realizarSom() {
        System.out.println("Pidgeot!");
    }

}