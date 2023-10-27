class HeladoCacique:
    def __init__(self):
        self.__sabores = []
        self.__sabor = ""

    # sobrecarga de operador de suma
    def __add__(self, sabor):
        self.__sabores.append(sabor)
        return self

    def get_sabor(self):
        return self.__sabor

    def set_sabor(self, sabor):
        self.__sabor = sabor

    '''
    Funcion con la que se muestran los sabores registrados
    '''
    def mostrar_sabores(self):
        print("Sabores disponibles: ", end="")
        if len(self.__sabores) == 1:
            print(self.__sabores[0], end="")
        else:
            print(self.__sabores[0], end="")
            for sabor in self.__sabores[1:]:
                print(", " + sabor, end="")
