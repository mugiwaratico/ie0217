# Examen final
# Jacob Gonzalez G, B83417




### 1. Explique el concepto de herencia en programación orientada a objetos (POO) y proporcione un ejemplo específico relacionado con el conjunto de datos bajo estudio.

El concepto de herencia permite crear clases nuevas con base a clases existentes. Esta ultima tiene el nombre de clase padre y la nueva clase es conocida como clase hija, de ahi viene el concepto de herencia, ya que la clase hija hereda las propiedades y metodos del padre. Ademas, la clase hija puede agregar nuevos atributos o metodos, asi como modificar los que ya existen (los heredados). 

A continuacion se presenta un ejemplo simple de herencia usando el conjunto de datos. Basicamente se hereda el metodo carga_datos que permite definir la ruta del archivo para su uso.

```"python"
class Datos:
    def carga_datos(self, file_path):
        print("Cargando datos del archivo:", file_path)
        # Código para cargar los datos desde el archivo

    def procesa_datos(self):
        print("Realizando procesamiento de datos")
        # Código para preprocesar los datos

class DatasetCSV(Datos):
    def carga_datos(self, file_path):
        super().carga_datos(file_path)  # Llamada del metodo carga_datas de la clase padre
        # Código adicional para leer el archivo CSV


# Ejemplo de uso. En este caso se hereda de la clase Datos a la clase DatasetCSV, se prueba utilizando el metodo carga_datos desde la clase hija
dataset = DatasetCSV()
dataset.carga_datos("conjunto_datos12071959.csv")
dataset.procesa_datos()

```

### 2. Diseñe e implemente una clase llamada Persona con atributos como nombre, edad, y un método que imprima la información de la persona. Luego, herede de la clase Persona para crear una clase Estudiante con atributos adicionales relacionados con el conjunto de datos.

A continuacion se presenta el codigo de ejemplo para la implementacion de la herencia:

```"python"
class Persona:
    # Constructor de la clase
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad
    
    # Metodo para imprimir la informacion
    def imprimir_informacion(self):
        print("Nombre:", self.nombre)
        print("Edad:", self.edad)


class Estudiante(Persona):
    def __init__(self, nombre, edad, altura, mano_dominante, genero):
        super().__init__(nombre, edad)
        self.altura = altura
        self.mano_dominante = mano_dominante
        self.genero = genero
    
    def imprimir_informacion(self):
        super().imprimir_informacion()
        print("Altura:", self.altura, "\nMano dominante: ", self.mano_dominante,
              "\nGenero: ", self.genero)
        
        
# Creacion de los objetos y ejecucion de ejemplo
estudiante1 = Estudiante("Mercedes", 16, 160, "diestro", "femenino" )
estudiante1.imprimir_informacion()

```

### 3. Describa una situación en la que se podría utilizar un decorador en Python y proporcione un ejemplo práctico relacionado con el manejo de excepciones.

Se puede usar para implementar un decorador que mida el tiempo que tarda en ejecutarse una funcion y simplemente se decora con esta otra funcion para implementarlo. A continuacion se tiene un ejemplo para un caso donde se da manejo de errores, especificamente cuando se da una division no valida.

```"python"

# En este codigo se define una funcion y se le agrega un decorador que permite manejar el error en caso de que se aplique
# una division no valida, como la division entre cero.
def manejo_error(func):
    def wrapper(*args, **kwargs):
        try:
            return func(*args, **kwargs)
        except Exception as e:
            print("Error detectado:", str(e))
    return wrapper

@manejo_error
def divide(a, b):
    return a / b

# Implementacion
resultado1 = divide(10, 2)
print("Resultado 1:", resultado1)

resultado2 = divide(10, 0)
print("Resultado 2:", resultado2)

```

### 4. Explique el propósito del bloque with en Python y proporcione un ejemplo práctico relacionado con el manejo de archivos.

El bloque `with` en Python se usa para que un recurso se libere correctamente al finalizar su uso, incluso si ocurre una excepción durante la ejecución. Lo que permite una gestión adecuada de recursos y evitar la necesidad de realizar limpiezas manuales.

Un caso donde resulta muy util el uso de `with` es con el manejo de archivos, al abrir y leer uno de estos. Con `with`, nos aseguramos de que el archivo se cierre correctamente al finalizar su uso, sin importar si se producen errores durante la lectura. A continuacion se puede observar un bloque de codigo que permite implementar esta solucion:

```"python"
with open("archivo.txt", "r") as archivo:
    contenido = archivo.read()
    print(contenido)
```


### 5. Utilizando el conjunto de datos proporcionado (guardado en 'conjunto_datos.csv'), cargue los datos en un DataFrame de pandas. Muestre cómo seleccionar solo las filas donde la edad es mayor a 30.

A continuacion se muestra el codigo que realiza el filtro solicitado


```"python"
import pandas as pd

# Cargo el archivo en df
df = pd.read_csv('conjunto_datos12071959.csv')

# Filtro las columnas con la edad nayor a 30 con el metodo loc
df_filtrado = df.loc[df['Edad'] > 30]

# Y puedo probarlo imprimiento el conjunto de datos filtrado
print(df_filtrado)

```

### 6. Utilizando el conjunto de datos, cree un gráfico de dispersión que represente la relación entre la altura y el peso de los individuos.

Por medio de la libreria malplotlib utilizo la funcion scatter que permite realizar el grafico de dispersion. A continuacion se muestra la implementacion:

```"python"
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
```

### 7. Explique en qué situaciones se podría utilizar una regresión lineal y proporcione un ejemplo práctico relacionado con el conjunto de datos.

La regresion lineal es util en caso donde se requiere modelar la relacion entre una variable dependiente con respecto a una o mas variables independiente. Sirve para hacer estimaciones del valor de la variable dependiente en funcion de las independientes.

Con base al conjunto de datos se puede implementar este tipo de modelo para, por ejemplo, predecir el peso en funcio de la edad y la altura:

```"python"

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

```

### 8. Describa el concepto de clustering y proporcione un ejemplo práctico de cómo se podría aplicar al conjunto de datos para identificar grupos de personas.

El clustering es un método de aprendizaje no supervisado que se utiliza para agrupar objetos o individuos similares en función de sus características. El objetivo del clustering es encontrar patrones y estructuras ocultas en los datos sin tener información previa sobre las categorías o grupos a los que pertenecen los objetos. En el contexto de un conjunto de datos con encabezados de Edad, Altura, Peso, ManoDominante y Género, el clustering se puede utilizar para identificar grupos o segmentos de personas que comparten características similares.

Para implementar este metodo, primeramente se debe determinar el numero de cluster optimo, para esto se puede utilzar el metodo del codo, el cual indica que el numero de cluster optimo es de 5. Una vez definido esto se implementa el clustering, a continuacion se puede observar el codigo:


```"python"
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
```
