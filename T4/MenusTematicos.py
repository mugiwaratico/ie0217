from Restaurante import Restaurante

class MenusTematicos(Restaurante):
    def __init__(self):
        super().__init__()
        self.__tema = ""

    '''def __init__(self, nombre, tipo_cocina, tema):
        super().__init__(nombre, tipo_cocina)
        self.__tema = tema'''

    def get_tema(self):
        return self.__tema

    def set_tema(self, tema):
        self.__tema = tema

    def describe_restaurante(self):
        super().describe_restaurante()
        print(f"Tema: {self.__tema}")
