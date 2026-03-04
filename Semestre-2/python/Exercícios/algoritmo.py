import numpy as np

def dijkstra(grafo_funcao, inicio_funcao):
    
    vertices=len(grafo_funcao)#vai receber a quantidade de pontos(A,B,C,D,E)
    
    distancias=np.full(vertices, np.inf)#vai criar um array preenchendo todas as distancias como infinitas
    
    distancias[inicio_funcao] = 0 #vai adicionar a distancia do inicio pra ele mesmo, que é 0
    
    visitados= np.zeros(vertices, dtype=bool)#criando um array visitados e preenchendo todas os pontos como false (não visitados)

    for i in range(vertices):

        menor_distancia=distancias.copy()#criando uma copia temporaria das distancias
        menor_distancia[visitados]= np.inf#atribuindo o valor de infinito nos nós ja visitados para ser ignorado pelo argmin
        no_atual=np.argmin(menor_distancia)#o no atual vai receber a menor distancia

        if menor_distancia[no_atual]==np.inf:#se a menor distancia do no atual for infitnito é porque não tem caminho para ele
          
            break
        
        visitados[no_atual]=True#colocando o no atual como visitado
    
        for j in range(vertices):

            peso=grafo_funcao[no_atual][j]#recebendo o valor da saída e da possível próxima chegada

            if peso > 0 and not visitados[j]:#se o caminho existir e ele ainda nao tiver sido visitado, vai ser criada uma nova distancia com o valor do próximo nó
                
                nova_distancia=distancias[no_atual] + peso

                if nova_distancia<distancias[j]:#se a nova distancia for menor que a anterior , atualiza
                   
                    distancias[j]=nova_distancia

    return distancias

grafo = np.array([
#    A  B   C  D   E   <- As colunas representam onde eu vou chegar, as linhas representam de onte eu vou sair
    [0, 10, 0, 30, 100], # A
    [10, 0, 50, 0, 0],   #B
    [0, 50, 0, 20, 10],  #C
    [30, 0, 20, 0, 60],  #D
    [100, 0, 10, 60, 0]  #E
    ])

inicio = 0
resultado = dijkstra(grafo,inicio)

print(f'Distância a partir do nó {inicio}: {resultado}')