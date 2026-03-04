import numpy as np
import matplotlib.pyplot as plt
temperaturas = np.array([22.4,23.1,22.8,23.0,22.7,22.9,23.2,22.7,23.1,23.6])
media=np.mean(temperaturas)
desvio= np.std(temperaturas)
labels=("media","temperaturas")
plt.boxplot(temperaturas)
plt.show()

#exercicio 2
np.random.seed(100)
deslocamento = np.random.choice([-1,1], size=100)
acumulativo=np.cumsum(deslocamento)
plt.plot(acumulativo)
plt.show()

#execicio 3
imagem= np.array([
    [[100,150,200],[50,100,150],[200,250,100]],
    [[150,200,50],[100,50,200],[250,150,50]],
    [[200,100,150],[50,200,250],[150,50,100]]
])

cinza=0.2989*imagem[:,:,0] + 0.5870*imagem[:,:,1] + 0.1140*imagem[:,:,2]
print(cinza)