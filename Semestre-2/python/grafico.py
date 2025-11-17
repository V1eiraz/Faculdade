import matplotlib.pyplot as plt

dados=[0,5,9,1,4,2,3,4,5]
plt.plot(dados) # .plot(): Gráfico simples de linhas
plt.grid() #.grid(): mostra o grid do gráfico.
plt.show() #.show(): Mostra o gráfico

plt.plot(dados, linewidth=5) # aumenta a espessura da linha (padrão = 1).
plt.title('Dados', fontsize=24) #Define o título ‘Dados’ e tamanho da fonte.
plt.xlabel('Obs', fontsize=14) #Nomeia o exio x.
plt.ylabel('Valor', fontsize=14) #Nomeia o exio y.
plt.tick_params(axis='both', labelsize=14) # definem o tamanho da fonte dos rótulos.
plt.show()
#exemplo
plt.title('Quadrados', fontsize=24)
xdata = [1, 2, 3, 4, 5]
ydata = [1, 4, 9, 16, 25]
plt.xlabel('tempo',fontsize=14)
plt.ylabel('velocidade', fontsize=14)
plt.plot(xdata, ydata)
plt.show()

#Gráfico de dispersão (scatter plot)
import matplotlib.pyplot as plt
xdata = [1, 2, 3, 4, 5]
ydata = [1, 4, 9, 16, 25]
plt.scatter(xdata, ydata, s=100) # s: parâmetro tamanho do ponto
plt.axis([0, 6, 0, 30]) # Eixo x de 0 a 6 e eixo y de 0 a 30
plt.show()

#Gráfico de barras simples
#.bar(eixo_x, eixo_y, argumentos)
#Exemplo:
fruits = ['apple', 'blueberry', 'cherry', 'orange']
counts = [40, 100, 30, 55]
plt.bar(fruits, counts)
plt.show()
#Funções de Parâmetros:
#.legend(title=‘título da legenda')
#.set_ylabel(‘título do exio y’)
#.set_title(‘título do gráfico’)
#Argumentos
#label: nome das séries (barras) na legenda
#color: cor das barras.
#width: largura das barras em cm.

#Gráfico de barras horizontais simples
#.barh()
#Exemplo:
fruits = ['apple', 'blueberry', 'cherry', 'orange']
counts = [40, 100, 30, 55]
plt.barh(fruits, counts)
plt.show()

#Gráfico de pizza (pie)
#.pie(valores, categorias)
#autopct: argumento que mostra o valor da categoria.
#explode: argumento que destaca o maior valor da categoria
#Exemplo:
labels = 'Frogs', 'Hogs', 'Dogs', 'Logs'
sizes = [15, 30, 45, 10]
plt.pie(sizes, labels=labels, autopct='%1.1f%%')
plt.show()

#Box plot
#.boxplot(valores, categorias)
#Exemplo:
fruit_weights = [
(1,2,3,4,3,2,3,4,5,3,2,1,2,3,4,5,80),
(2,3,4,5,6,4,3,4,5,3,6,7,8,9,4,10,2),
]
labels = ['peaches', 'oranges']
plt.boxplot(fruit_weights, labels=labels)
plt.show()

#Variáveis categóricas
#Exemplo:
cat = ["bored", "happy", "happy", "bored", "bored", "bored"]
dog = ["happy", "happy", "happy", "happy", "happy", "bored"]
activity = ["combing", "drinking", "feeding", "napping", "playing", "washing"]
plt.plot(activity, dog, label="dog")
plt.plot(activity, cat, label="cat")
plt.legend()
plt.show()

data = {'apple': 10, 'orange': 15, 'lemon': 5, 'lime': 20}
names = list(data.keys())
values = list(data.values())
plt.plot(names, values, color='red')
plt.bar(names, values)
plt.show()