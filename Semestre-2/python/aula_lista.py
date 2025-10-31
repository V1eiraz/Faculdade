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

#Acessar o elemento individual.
bandas=['ACDC','Guns n roses','metalica']
bandas[0]
print(bandas[0])
#Inserir novo
#.append(‘novo elemento’)
#Insere no fim da lista
bandas.append('Turma do pagode')
print(bandas)

#inserir em qualquer posição
#.insert(índice, elemento)
bandas.insert(0, 'Raul Seixas')
bandas.insert(-2, 'Bêbados e habilidosos')
print(bandas)
#Removendo elementos:
#del nome_lista[índice]
del bandas[-1]
print(bandas)

#Lista vista como uma pilha.
#Retira o último elemento, mas permite que seja utilizado.
#.pop()
retirado = bandas.pop()
print(bandas)
print(retirado)
#E se quiser retirar de outra posição?
#.pop(índice).
retirado = bandas.pop(0)
print(retirado)
print(bandas)

#Não sei a posição.
#Mas sei o valor do elemento.
#.remove(elemento)
elemento = 'ACDC'
bandas.remove(elemento)
print(bandas)

#Comandos úteis para Listas
#‘+’ Concatenação de listas
a = [1, 2, 3]
b = [4, 5, 6]
c = a + b
print(c)

#‘:’ Separação de listas (Fatiamento)
t = [9, 41, 12, 3, 74, 15]
print(t[1:3])

nums = [9, 41, 12, 3, 74, 15]
print(nums[1:3])
print(nums[:4])
print(nums[3:])
print(nums[:])

#‘in’ Verifica se o elemento está na lista
#‘not in’ Verifica se o elemento está na lista
#Retorna True ou False
nums = [9, 41, 12, 3, 74, 15]
print(9 in nums)
print(9 not in nums)
print(0 in nums)
print(0 not in nums)

#‘max’ Retorna o máximo da lista
#‘min’ Retorna o mínimo da lista
#‘sum’ Retorna a soma dos elementos
print(max(nums))
print(min(nums))
print(sum(nums))
print(sum(nums)/len(nums))

#.split()
#Divide uma string e produz uma lista de strings
email = 'From stephen.marquard@uct.ac.za Sat Jan 5 09:14:16 2008'
words = email.split()
#Como faço para imprimir somente o nome do email ‘stephen.marquard’?
#Use o delimitador
#.split(delimitador)
email = 'From stephen.marquard@uct.ac.za Sat Jan 5 09:14:16 2008'
words = email.split()
mail = words[1]
print(mail)
aux = mail.split('@')
print(aux)
nome = aux[0]
print(nome)

#Ordenação de uma lista
# sort()Ordena de forma permanente.
# sorted()Ordena de forma temporária.
cars = ['bmw', 'audi', 'toyota', 'subaru']
cars.sort()
print(cars)