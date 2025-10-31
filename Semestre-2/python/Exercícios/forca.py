import random

def escolher_palavra_aleatoria(palavras):
    """ escolhe uma palavra aleatória da lista

Args:
 palavras : lista com 50 palavras

Returns:
 uma palavra aleatoria
"""
    return random.choice(palavras)

palavras = ["sol", "mar", "floresta", "vento", "livro", "chuva", "montanha", "rio", "estrela", "cidade",
    "amizade", "tempo", "musica", "flor", "noite", "lua", "passaro", "neve", "fogo", "coraçao",
    "sorriso", "vida", "historia", "caminho", "janela", "palavra", "luz", "sonho", "chave", "porta",
    "raiz", "folha", "pedra", "olhar", "poesia", "areia", "mare", "silencio", "rosa", "terra",
    "relogio", "mundo", "sabedoria", "misterio", "paz", "viagem", "desejo", "saudade", "alegria"]
forca = "JOGO DA FORCA".center(46,'-')
palavra_escolhida=list(escolher_palavra_aleatoria(palavras))
palavra_ficticia=["_"]*len(palavra_escolhida)
tentativas=0
print(forca)
print()
print(f'Seja bem-vindo!'.center(20,' '))
print()
print(f'A palavra escolhida foi {' '.join(palavra_ficticia)}')
print()
print(f'A palavra tem {len(palavra_ficticia)} letras')
print()
letras_tentadas = {"certas": [], "erradas": []}
while '_' in palavra_ficticia:
    letra=input("Qual letra você escolhe?").lower()
    print()
    if len(letra)>1:
        print('Insira uma letra por vez!')
        break
    elif len(letra)==1:
        if letra in palavra_escolhida:
            print('A letra está na palavra!!')
            letras_tentadas["certas"].append(letra)
            for i in range(len(palavra_escolhida)):
                if palavra_escolhida[i]==letra:
                    palavra_ficticia[i]=letra
        else:
            print('A letra não está na palavra!')
            letras_tentadas["erradas"].append(letra)
            tentativas += 1
    print(forca)
    print()
    print(letras_tentadas)
    print()
    print(palavra_ficticia)
    print()
    if tentativas == 6:
        print("Você perdeu! HAHAHAHA")
        break
    if '_' not in palavra_ficticia:
        print()
        print('Parabéns , você venceu !!!!')
        break
    print(f'Você ainda tem {6-tentativas} tentativas')
