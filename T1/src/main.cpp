#include "header.hpp"
#include <iostream>

int main() {
    const int tamano = 30;
    PreguntaRespuesta preguntas[tamano] = {
        {"¿Cuál es la principal diferencia entre C y C++?", "La principal diferencia es que C++ es un lenguaje orientado a objetos, mientras que C no lo es.", "Además de ser orientado a objetos, C++ también tiene características adicionales como el manejo de excepciones y plantillas."},
        {"¿Cuál es la diferencia entre un intérprete y un compilador", "La principal diferencia entre un intérprete y un compilador radica en cómo procesan y ejecutan el código fuente de un programa", "Mientras que un compilador traduce todo el código fuente a un lenguaje de máquina antes de su ejecución, un intérprete ejecuta el código fuente línea por línea sin necesidad de una fase de compilación previa. "}, 
        {"¿Qué es el namespace y para qué se utiliza?","Es una forma de crear un bloque, y que todas las funciones que estén dentro del mismo, estén asociadas a ese namespace (o espacio de nombres), al cual se le asigna un nombre para identificarlo.","Todo se remonta al lenguaje C, en el que no existe el concepto de namespace. En este lenguaje, a la hora de importar una librería, si esa librería tenía, por ejemplo, una función print, si nuestro programa contenía ya esa función, teníamos un problema, ya que ni en C ni en C++ se pueden declarar y definir funciones con el mismo nombre. La solución para que eso no ocurriera fue comenzar a utilizar acrónimos, para que las funciones empezaran o acabaran con ese nombre"},   
        {"¿Cuál es la diferencia entre declarar e inicializar una variable?","Una variable se declara para indicarle al programa a partir de qué lugar empieza a existir, qué nombre tendrá y qué tipo de datos almacenará. La asignación de un valor inicial se llama inicialización.","Para declarar una variable usaremos una instrucción compuesta del nombre del tipo de datos de la variable, el nombre de la variable y opcionalmente un operador de asignación y un valor inicial. La inicialización puede hacerse en la misma instrucción que la declara o en una instrucción separada. Es importante tener en cuenta que las variables deben recibir un valor inicial antes de poder leer los datos que contienen. Si un programador trata de leer los datos el valor de una variable que no ha sido inicializada, los compiladores normalmente reportan un error y no compilan el programa."},
        {"¿Cuál es la diferencia entre un break y un continue en los bucles de C++?","Significa detener la ejecución de un bucle y salirse de él. continue: Sirve para detener la iteración actual y volver al principio del bucle para realizar otra iteración, si corresponde.","La instrucción break termina la instrucción de iteración contenedora más próxima (es decir, los bucles for, foreach, while o do) o la instrucción switch. La instrucción break transfiere el control a la instrucción que hay a continuación de la instrucción finalizada, si existe. La instrucción continue inicia una nueva iteración de la instrucción de iteración contenedora más próxima (es decir, los bucles for, foreach, while o do)."},
        {"¿Qué es el polimorfismo en clases?","es la capacidad que tienen ciertos lenguajes para hacer que, al enviar el mismo mensaje (o, en otras palabras, invocar al mismo método) desde distintos objetos, cada uno de esos objetos pueda responder a ese mensaje (o a esa invocación) de forma distinta"," El polimorfismo es una relajación del sistema de tipos, de tal manera que una referencia a una clase (atributo, parámetro o declaración local o elemento de un vector) acepta direcciones de objetos de dicha clase y de sus clases derivadas (hijas, nietas, ...)."},
        {"¿Qué hace la sentencia extern?","indica al compilador que puede reutilizar la otra creación de instancias, en lugar de crear una nueva en la ubicación actual","Este modificador se usa para indicar que el almacenamiento y valor de una variable o la definición de una función está definido en otro módulo o fichero fuente. Las funciones declaradas con extern son visibles por todos los ficheros fuente del programa, salvo que se redefina la función como static."},
        {"¿Qué son las palabras reservadas?","Se refiere a una palabra previamente definida que es reconocida por el lenguaje de programación como una instrucción o comando específico.","Las palabras reservadas son un conjunto de palabras clave que tienen un significado especial para el compilador de C++. Son utilizadas para definir la sintaxis y estructura del lenguaje de programación. Algunas de estas palabras se usan para declarar variables, instrucciones o realizar acciones en el código, mientras que otras se usan para crear estructuras dentro del programa. "},
        {"","",""},
        {"","",""},
        {"","",""},
        {"","",""},
        {"","",""},
        {"","",""},
        {"","",""},
        {"","",""},
        {"","",""},
        {"","",""},
        {"","",""},
        {"","",""},
    };

    while (true) {
        std::cout << "Opciones:" << std::endl;
        std::cout << "a. Mostrar todas las definiciones almacenadas." << std::endl;
        std::cout << "b. Hacer una pregunta." << std::endl;
        std::cout << "Ingrese una opción: ";
        std::string opcion;
        std::getline(std::cin, opcion);

        if (opcion == "a") {
            mostrarTodasLasDefiniciones(preguntas, tamano);
        } else if (opcion == "b") {
            hacerUnaPregunta(preguntas, tamano);
        } else {
            std::cout << "Opción inválida. Inténtelo nuevamente." << std::endl;
        }
    }

    return 0;
}