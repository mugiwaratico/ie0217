import pandas as pd
import matplotlib.pyplot as plt


# Cargo los datos
df = pd.read_csv('conjunto_datos12071959.csv')

# Por medio de scatter de la lib matplotlib creo el grafico de dispersion
plt.scatter(df['Altura'], df['Peso'])
plt.xlabel('Altura')
plt.ylabel('Peso')
plt.title('Relación entre altura y peso')
plt.show()
