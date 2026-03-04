import scipy.integrate as spi
print('Calcule a integral de 𝑓 𝑥 = 𝑥2 no intervalo [0,2]')
def f(x):
    return x**2
resultado, erro = spi.quad(f, 0, 2)
print(resultado)
print(erro)

print('-'*50)

print('Calcule a integral de 𝑓 𝑥 = 𝑥2 + 𝑦2,sendo 𝑥 ∈ [0, 1]e y ∈ [0, 2]')

def f(x, y):
    return x**2 + y **2
resultado, erro = spi.dblquad(f, 0, 1, 0, 2)
print(f"Resultado da integral dupla: {resultado}")
print(f"Erro estimado: {erro}")

print('-'*50)

#Interpolação.
#Ex.:
import numpy as np
import matplotlib.pyplot as plt
import scipy.interpolate as scip
# Dados conhecidos
x = np.array([0, 1, 2, 3, 4])
y = np.array([0, 1, 4, 9, 16]) # f(x) = x^2
f_linear = scip.interp1d(x, y, kind='linear')
y_1 = f_linear(x)
# Gráficos
plt.plot(x, y, label='Dados originais') # Dados originais
plt.plot(x, y_1, label='Interpolação Linear') # Interpolação
plt.legend()
plt.title('Interpolação Linear')
plt.show()

print('-'*50)

x = np.array([0, 1, 2, 3, 4, 5])
y = np.array([0, 1, 4, 9, 16, 25])
polinomio = scip.lagrange(x, y)
print(polinomio)
y_new = polinomio(x)
plt.plot(x, y, 'o', label='Pontos conhecidos') # Pontos conhecidos
plt.plot(x, y_new, '-', label='Polinômio de Lagrange') # Polinômio
plt.legend()
plt.title('Interpolação de Lagrange')
plt.show()

print('-'*50)

