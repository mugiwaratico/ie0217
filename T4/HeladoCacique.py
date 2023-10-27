class HeladoCacique:
    def __init__(self):
        self.__sabores = []

    # sobrecarga de operador de suma
    def __add__(self, sabor):
        self.__sabores.append(sabor)
        return self
    
    def mostrar_sabores(self):
        for sabor in self.__sabores:
            print(sabor)
