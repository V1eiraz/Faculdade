import matplotlib.pyplot as plt
import numpy as np
plt.subplot(2, 2, 1)
plt.title('Computador A')
tempo_A = [0.5, 1.0, 1.5, 2.0, 2.5]
entrada = [100, 200, 300, 400, 500]
plt.plot(entrada, tempo_A, color='purple')

plt.subplot(2, 2, 2)
plt.title('Comuptador B')
tempo_B = tempo_B = [0.6, 1.1, 1.8, 2.4, 3.0]
plt.plot(entrada,tempo_B,color='green')

plt.subplot(2,2,3)
plt.title('Comparação A x B')
indices = np.arange(len(entrada))
largura = 0.35

plt.bar(indices - largura/2, tempo_A, width=largura, label='Computador A', color='purple')
plt.bar(indices + largura/2, tempo_B, width=largura, label='Computador B', color='green')

plt.xticks(indices, entrada)
plt.xlabel('Tamanho da Entrada')
plt.ylabel('Tempo (s)')
plt.legend()
plt.tight_layout()
plt.suptitle("Tempo x Entrada",fontsize=20)
plt.subplots_adjust(top=0.85)
plt.show()