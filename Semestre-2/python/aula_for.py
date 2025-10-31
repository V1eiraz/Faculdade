
print("Acessando pelo índice")
names = ["Ana", "Carlos", "João", "Mariana", "Fernanda"]
# Exibindo cada nome acessando diretamente pelo índice
print(names[0])
print(names[1])
print(names[2])
print(names[3])
print(names[4])
#usando for
convidados=[None,None,None,None] #lista
for n in range( 4 ): #colocando o nome dos convidados
    convidados[n]=input('Informe o nome do convidado: ')
#usando for sem saber o tamanho da lista
for i in range(len(convidados)): #printando os nomes
    print(convidados[i]," você foi convidado!")     
#ou 
tamanho=int(len(convidados))
for i in range(tamanho):                   #prezar por esta forma
    print(f'{convidados[i]} você foi convidado!')
#Outras formas do Comando for
palavra = "Python"
for letra in palavra:
    print(letra)
 
#E se eu quiser imprimir o índice e o valor?
#enumerate()
frutas = ["maçã", "banana", "cereja"]
for indice, fruta in enumerate(frutas):
    print(f"Índice {indice}: {fruta}")

#break para o laço imediatamente

#zip()
#usado para iterar sobre múltiplos iteráveis em paralelo.
nomes = ['Angus','Malcon','Bom Scott']
idades = [25, 30, 22]
for nome, idade in zip(nomes, idades):
    print(f"{nome} tem {idade} anos.")

#else
#executado apenas se o laço completar todas as suas iterações.
for i in range(3):
    print(i)
else:
    print("Loop concluído sem interrupções.")

#Para criar listas (Linha única)
#Sintaxe básica: [instrução for item in iteravel]
#Com condição: [instrução for item in iteravel if condicao]
numeros = [1, 2, 3, 4, 5]
quadrados = [numero * numero for numero in numeros]
print(quadrados)

pares = [numero for numero in range(10) if numero % 2 == 0]
print(pares)

quadrados = [numero * numero for numero in range(1000)]
print(quadrados)

