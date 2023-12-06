import pandas as pd
from sklearn.linear_model import LinearRegression

df = pd.read_csv('conjunto_datos12071959.csv')

# Defino las variables independientes (edad y altura) y la variable dependiente (peso)
X = df[['Edad', 'Altura']]
y = df['Peso']

# Creo un objeto de regresión lineal
regresion = LinearRegression()

# Ajusto el modelo a los datos
regresion.fit(X, y)

# Prediccion del peso para una nueva persona
nueva_persona = [[27, 174]]
peso_predicho = regresion.predict(nueva_persona)

print("El peso estimado es:", peso_predicho)