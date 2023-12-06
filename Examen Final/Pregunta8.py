import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn.preprocessing import StandardScaler
from sklearn.cluster import KMeans
from sklearn.linear_model import LinearRegression
from sklearn import datasets, linear_model


# Cargo los datos
df = pd.read_csv('conjunto_datos12071959.csv')

# Definir las variables para el clustering (Edad, Altura, Peso)
X = df[['Edad', 'Altura', 'Peso']]

# Seleccion numero de clusters

inertia = []
for k in range(1,11):
    kmeans = KMeans(n_clusters=k, random_state = 42)
    kmeans.fit(X)
    inertia.append(kmeans.inertia_)

# Grafica metodo del codo

plt.plot(range(1,11), inertia, marker = 'o')
plt.title("Metodo del codo para seleccion de k")
plt.xlabel('Numero de Clusters (k)')
plt.ylabel('Inercia')
plt.show()

# Creacion objeto de clustering K-means
kmeans = KMeans(n_clusters=5)

# Ajuste del modelo a los datos
kmeans.fit(X)

# Obtencion de etiquetas de los clusters
labels = kmeans.labels_

# Agregar las etiquetas de los clusters al DataFrame original
df['Cluster'] = labels

# Grafico con grafico de dispersion para ver los cluster
plt.scatter(df['Edad'], df['Altura'], c=df['Cluster'], cmap='viridis')
plt.xlabel('Edad')
plt.ylabel('Altura')
plt.title('Gráfico de dispersión de los clusters')
plt.show()




