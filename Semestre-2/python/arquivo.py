with open("txt/pi.txt") as arq:
    conteudo = arq.read()
print(conteudo)

with open("txt/arq3.txt", "rt", encoding="utf-8")as arq:
    conteudo = arq.read()
    print (conteudo)
    print(type(conteudo))

with open("txt/arq3.txt", "rb")as arq:
    conteudo = arq.read()
    print (conteudo)  
    print(type(conteudo))

file_name='txt/arq.txt'
with open(file_name)as file_object:
    for lin in file_object:
        print(lin)

with open(file_name) as file_object:
    linhas = file_object.readlines()
    print(linhas)

#lendo dados valor por valor
dist = list()
with open('txt/arq2.dat') as arquivo:
    for i in arquivo:
        valores = list(map(int,i.strip().split()))
        dist.append(valores)
print (dist)