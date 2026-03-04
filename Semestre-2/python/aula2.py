
nome ='Guido'
idade = 20
print("Idade: "+str(idade),"Nome :"+nome) #nao recomendado pois é forma antiga

#entrada do teclado
nome = input('Digite seu nome: ')
idade = int(input('Digite sua idade: '))#voce pode ou nao usar o tipo
print(f'{nome} tem {idade} anos')
#input
#

#tipos de dados basicos
#inteiro : int
#ponto flutuante : float
#texto :str
#booleanoa :bool(true==1 false==0)

#exemplo

letra='A'
print(letra)
print(type(letra))#tipo
print(len(letra))#tamanho

x=10
print(x)
print(x>5)
print(x==0)

x=3.14159
print(type(x))
print(x)

#se quiser mais precisao usa o modulo decimal
from decimal import Decimal#importei apenas a funçao Decimal , decimal seria a biblioteca completa


x=Decimal('0.1')+Decimal('0.2')
print(x)

