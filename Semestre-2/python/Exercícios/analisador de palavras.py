frase=input("Insira uma frase qualquer: ")
lista_frase=frase.split()
palavra_unica=0
for i in range(len(lista_frase)):
    if lista_frase.count(lista_frase[i])==1:
        palavra_unica+=1

print(f'Total de palavras únicas {palavra_unica}')

maior_palavra=max(lista_frase, key=len)
menor_palavra=min(lista_frase, key=len)
print(f'Mais longa {maior_palavra}| Mais curta {menor_palavra}')

vogais='aeiouAEIOU'
lista_vogais=[palavra for palavra in lista_frase if palavra[0] in vogais]
print(f'palavras que começam com vogal {lista_vogais}')

lista_invertida=[palavra[::-1] for palavra in lista_frase]
print(lista_invertida)

total_letras= sum(len(palavra) for palavra in lista_frase)
total_palavras=len(lista_frase)
media=total_letras/total_palavras
print(f'Média de caracters por palavra {media}')

lista_invertida.sort()
lista_invertida.reverse()
print(lista_invertida)