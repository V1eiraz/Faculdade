nome=input("Informe seu nome completo:")
#printa em maiusculo
print("Em maiúsculo ",nome.upper())
#printa em minusculo
print("Em minúsculo", nome.lower())
#conta as letras tirando os espaços
print("Quantas letras sem espaços ",len(nome.replace(" ","")))
#cria um vetor com a primeira frase
primeiro_nome='nome'.split()[0]
print("Quantas letras tem no primeiro nome ", len(primeiro_nome))


