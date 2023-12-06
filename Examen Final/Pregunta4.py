# Manejo de un archivo con with, 
with open("archivo.txt", "r") as archivo:
    contenido = archivo.read()
    print(contenido)