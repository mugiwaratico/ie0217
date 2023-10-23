class Restaurante:
    def __init__(self, nombre, tipo_cocina):
        self.__nombre = nombre
        self.__tipo_cocina = tipo_cocina
    
    def get_nombre(self):
        return self.__nombre
    
    def set_nombre(self, nombre):
        self.__nombre = nombre
    
    def get_tipo_cocina(self):
        return self.__tipo_cocina
    
    def set_tipo_cocina(self, tipo_cocina):
        self.__tipo_cocina = tipo_cocina
    
    def describe_restaurante(self):
        print(f"Restaurante: {self.__nombre}")
        print(f"Tipo de cocina: {self.__tipo_cocina}")