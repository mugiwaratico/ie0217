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



### 3. Describa una situación en la que se podría utilizar un decorador en Python y proporcione un ejemplo práctico relacionado con el manejo de excepciones.



### 4. Explique el propósito del bloque with en Python y proporcione un ejemplo práctico relacionado con el manejo de archivos.



### 5. Utilizando el conjunto de datos proporcionado (guardado en 'conjunto_datos.csv'), cargue los datos en un DataFrame de pandas. Muestre cómo seleccionar solo las filas donde la edad es mayor a 30.

### 6. Utilizando el conjunto de datos, cree un gráfico de dispersión que represente la relación entre la altura y el peso de los individuos.

### 7. Explique en qué situaciones se podría utilizar una regresión lineal y proporcione un ejemplo práctico relacionado con el conjunto de datos.

### 8. Describa el concepto de clustering y proporcione un ejemplo práctico de cómo se podría aplicar al conjunto de datos para identificar grupos de personas.