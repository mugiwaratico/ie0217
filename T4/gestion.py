from HeladoCacique import HeladoCacique
from MenusTematicos import MenusTematicos
from Restaurante import Restaurante

def validar_entrada(entrada, numero_entrada):
    # Verificar si la entrada no es de tipo string
    if not isinstance(entrada, str):
        if numero_entrada == 0:
            print("[Error]: El nombre tiene que ser un string. Intentelo de nuevo")
        if numero_entrada == 1:
            print("[Error]: El tipo de cocina tiene que ser un string. Intenlo de nuevo")
        if numero_entrada == 2:
            print("[Error]: El nombre del menu tiene que ser un string. Intenlo de nuevo")
        if numero_entrada == 3:
            print("[Error]: El nombre del sabor tiene que ser un string. Intenlo de nuevo")
                
        return False
        
    # Verificacion string vacio o espacio en blanco
    if not entrada.strip():
        if numero_entrada == 0:
            print("[Error]: El nombre no puede estar vacio. Intentelo de nuevo")
        if numero_entrada == 1:
            print("[Error] El tipo de cocina no puede estar vacio. Intentelo de nuevo")
        if numero_entrada == 2:
            print("[Error]: El nombre del menu no puede estar vacio. Intenlo de nuevo")
        if numero_entrada == 3:
            print("[Error]: El nombre del sabor no puede estar vacio. Intenlo de nuevo")
        return False

    # Restriccion de caracteres no permitidos
    caracteres_no_permitidos = ["'", '"', ".", ",", ";", ":", "?",
                                "!", "@", "#", "$", "%", "&", "*",
                                "(", ")", "[", "]", "{", "}", "<", ">"]
    for caracter in caracteres_no_permitidos:
        if caracter in entrada:
            print(f"Error: La entrada no puede contener",
                  "el caracter '{caracter}'!")
            return False

    # Si la entrada pasa todas las validaciones, es válida
    return True

if __name__ == '__main__':
    print("Bienvenido al sistema de gestion de Bares. \n")
    
    while 1:
        entrada = input("Por favor, ingrese el nombre del restaurante: ")
    
        if validar_entrada(entrada,0):
            restaurante = Restaurante()
            restaurante.set_nombre(entrada)
            break
        
    
    while 1:
        entrada = input("Ingrese el tipo de cocina: ")

        if validar_entrada(entrada,1):
            restaurante.set_tipo_cocina(entrada)
            break

    print("Restaurante registrado con exito \n")
    restaurante.describe_restaurante()

    while 1:
        entrada = input("Desea agregar un menu tematico? (s/n): \n")

        if not isinstance(entrada, str) or not entrada.split():
            print("[Error] Respuesta invalida. Por favor responda con s o n")
        if entrada == "s":
            while 1:
                entrada = input("Ingrese el nombre del menu tematico: ")
                if validar_entrada(entrada, 2):
                    menu_tematico = MenusTematicos()
                    menu_tematico.set_tema(entrada)
                    print("Menu tematico agregado con exito: " + menu_tematico.get_tema())
                    break
            break

        elif entrada == "n":
            break

        else:
            print("[Error] Respuesta invalida. Por favor responda con s o n")

    
    while 1:
        entrada = input("Desea agregar un sabor de helado Cacique? (s/n): \n")

        if not isinstance(entrada, str) or not entrada.split():
            print("[Error] Respuesta invalida. Por favor responda con s o n")
        if entrada == "s":
            while 1:
                entrada = input("Ingrese el sabor: ")
                if validar_entrada(entrada, 3):
                    helado_cacique = HeladoCacique()
                    helado_cacique += helado_cacique
                    print("Sabor gregado con exito:" + entrada)
                    helado_cacique.mostrar_sabores()
                    break

        elif entrada == "n":
            print("Gracias por usar el sistema de gestion de bares."
                  "Hasta pronto querido usuario")
            break

    
    



