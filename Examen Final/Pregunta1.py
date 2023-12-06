class Datos:
    def carga_datos(self, file_path):
        print("Cargando datos del archivo:", file_path)
        # Código para cargar los datos desde el archivo

    def procesa_datos(self):
        print("Realizando procesamiento de datos")
        # Código ejemplo para procesar los datos

class DatasetCSV(Datos):
    def carga_datos(self, file_path):
        super().carga_datos(file_path)  # Llamada del metodo carga_datas de la clase padre



# Ejemplo de uso. En este caso se hereda de la clase Datos a la clase DatasetCSV, se prueba utilizando el metodo carga_datos desde la clase hija
dataset = DatasetCSV()
dataset.carga_datos("conjunto_datos12071959.csv")
dataset.procesa_datos()

