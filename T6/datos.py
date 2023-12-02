import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn.preprocessing import StandardScaler
from sklearn.cluster import KMeans

data = pd.read_csv('T1.csv',index_col=0)

#print(data.head())

"""

#Limpieza de datos, se verifican datos nulos o duplicados
print(data.head()) # Muestra las primeras filas del DataFrame
print(data.info()) # Muestra información sobre las columnas y tipos de datos
#print(data.describe()) # Muestra estadísticas descriptivas de las columnas numéricas

print("\n -------- Valores faltantes: ",data.isnull().sum()) # Muestra la cantidad de valores faltantes por columna

print("\n -------- Registros duplicados: ", data.duplicated().sum()) # Muestra la cantidad de registros duplicados


data = data.dropna() # Elimina las filas con valores faltantes 

data = data.drop_duplicates() # Elimina los registros duplicados

data.to_csv('datos_limpios.csv', index=False) # Guarda los datos limpios en un archivo CSV


"""

#Para este ejercicio extraigo los datos de Costa Rica y genero una variable que contenga estos




#Elimino columnas innecesarias y acomodo el dataframe
data = data.drop(['Country Code','Indicator Name','Indicator Code'], axis=1)

data = data.transpose()

data = data.reset_index()

data.columns= ['Anho', 'Cantidad']

#print(data.head(5))


#Escalamiento de datos
scaler = StandardScaler()
scaled_data = scaler.fit_transform(data)


#Grafica de los datos

'''
plt.plot(data['Anho'],data['Cantidad'])
plt.xlabel('Cantidad')
plt.ylabel('Anho')
plt.title('Tasa de muertes infantiles anual por cada 1000 nacimientos en Costa Rica')
plt.show()
'''


# Seleccion numero de clusters
'''
inertia = []
for k in range(1,11):
    kmeans = KMeans(n_clusters=k, random_state = 42)
    kmeans.fit(scaled_data)
    inertia.append(kmeans.inertia_)
'''
# Grafica metodo del codo
'''
plt.plot(range(1,11), inertia, marker = 'o')
plt.title("Metodo del codo para seleccion de k")
plt.xlabel('Numero de Clusters (k)')
plt.ylabel('Inercia')
plt.show()
'''

# Basado en la grafica anterior se asume num de cluster = 3

kmeans = KMeans(n_clusters=3, random_state = 42)
cluster_labels = kmeans.fit_predict(scaled_data)

# Se agregan las etiquetas de cluster al conjunto de datos original
data['Cluster'] = cluster_labels

# Analisis de segmentos
segment_analysis = data.groupby('Cluster').mean(numeric_only=True)


# Visualizacion de segmentos
plt.figure(figsize=(12, 6))

for cluster in range(3):
    plt.scatter(data[data['Cluster'] == cluster]['Anho'],
                data[data['Cluster'] ==  cluster]['Cantidad'],
                label=f'Cluster {cluster}')
    
plt.title('Segmentacion de muertes por Cantidad y anho')
plt.xlabel('Anho')
plt.ylabel('Cantidad')
plt.legend()
plt.xticks(fontsize=4)
plt.show()

