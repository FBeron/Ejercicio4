import numpy as np
import matplotlib.pyplot as plt

data = np.loadtxt("random.walks.txt")

plt.hist(data, normed=True, bins=30)
plt.xlabel("Posicion final")
plt.ylabel("Probabilidad")
plt.title("Histograma")
plt.savefig("rand.png")
