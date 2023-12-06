import pandas as pd

# Cargo el archivo en df
df = pd.read_csv('conjunto_datos12071959.csv')

# Filtro las columnas con la edad nayor a 30
df_filtrado = df.loc[df['Edad'] > 30]

# Y puedo probarlo imprimiento el conjunto de datos filtrado
print(df_filtrado)
