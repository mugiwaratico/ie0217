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




```"python"

```

### 6. Utilizando el conjunto de datos, cree un gráfico de dispersión que represente la relación entre la altura y el peso de los individuos.

```"python"

```

### 7. Explique en qué situaciones se podría utilizar una regresión lineal y proporcione un ejemplo práctico relacionado con el conjunto de datos.

```"python"

```

### 8. Describa el concepto de clustering y proporcione un ejemplo práctico de cómo se podría aplicar al conjunto de datos para identificar grupos de personas.

```"python"

```
