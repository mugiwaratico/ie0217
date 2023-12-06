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