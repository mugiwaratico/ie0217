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