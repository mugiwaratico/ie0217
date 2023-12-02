import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

data = pd.read_csv('T1.csv')

print(data.head()) # Muestra las primeras filas del DataFrame
print(data.info()) # Muestra información sobre las columnas y tipos de datos
print(data.describe())

print("\n --------\n",data.isnull().sum()) # Muestra la cantidad de valores faltantes por columna

print("\n --------\n", data.duplicated().sum()) # Muestra la cantidad de registros duplicados

data = data.dropna() # Elimina las filas con valores faltantes 

data = data.drop_duplicates() # Elimina los registros duplicados

data.to_csv('datos_limpios.csv', index=False) # Guarda los datos limpios en un archivo CSV