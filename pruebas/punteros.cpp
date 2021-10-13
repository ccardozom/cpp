#include <iostream>
#include <iomanip>
#include <cstdio>

/*

    argv es una tabla:
        dos dimensiones
        una dimension para almacenar todos y cada uno de los punteros donde se encuentra la cadena de textso

        argv[0] = 056 :
        argv[1] = 064 : 0435 'h' 0436 'o' +3 0439 '\0'
        argv[2] = 072 : 0440 'q'
        argv[3] = 080 : 0444 't'
        argv[4] = 088 : 0448 'e'


        ""./punteros"
        "hola"
        "que"
        "tal"
        "estas"

    
*/

int main(int argc, char **argv)
{
    //char *tabla[] = {"./punteros", "hola", "que", "tal", "estas"};
    if (argc > 1)
    { //hola
        char *str1 = *argv + 1;

        char **ptr1;
        char **ptr2;
        char c;

        ptr1 = &argv[1];
        //ptr1 = str1;

        ptr2 = ptr1;

        c = **ptr2;

        *argv = argv[3] + 1;
        *argv = *(argv + 3) + 1;
        printf("que coño tiene **argv = '%c'\n", **argv);
        printf("**argv = '%s'\n", *argv);

        while (*argv)
        {
            printf("argv = %s\n", *argv);
            argv++;
        }

return (0);
        for (int i = 1; i < 5; i++)
        {
            printf("Direccion de memoria de argv[%i] = %lu\n", i, ++argv);
            printf("Y apunta a %lu\n", *argv);
            while (**argv)
            {
                printf("el caracter '%c' tiene la direccion %lu\n", **argv, *argv);
                (*argv)++;
            }
            printf("el caracter '%hhi' tiene la direccion %lu\n", **argv, *argv);
//            std::cout << "Direccion de memoria de argv[" << i << "] = " << std::setbase(10) << (argv + i) << std::endl;
        }
return (0);
        std::cout << "La direccion de argv[1] es: " << &argv[1] << std::endl;
        std::cout << "El contenido de argv[1] es: " << argv[1] << std::endl;
        printf("\n");
        std::cout << "El contenido de str1 es: " << *str1 << std::endl;
        std::cout << "El contenido de str1 es: " << str1 << std::endl;
        std::cout << "La direccion de str1 es: " << &str1 << std::endl;
        printf("\n");
        std::cout << "El contenido de ptr1 es: " << *ptr1 << std::endl;
        std::cout << "El contenido de ptr1 es: " << ptr1 << std::endl;
        std::cout << "La direccion de ptr1 es: " << &ptr1 << std::endl;

        *ptr1 = "adios";

        printf("\n");
        std::cout << "El contenido de ptr1 es: " << *ptr1 << std::endl;
        std::cout << "El contenido de ptr1 es: " << ptr1 << std::endl;
        std::cout << "La direccion de ptr1 es: " << &ptr1 << std::endl;
        printf("\n");

        std::cout << "La direccion de argv[1] es: " << &argv[1] << std::endl;
        std::cout << "El contenido de argv[1] es: " << argv[1] << std::endl;

        printf("\n");
        std::cout << "El contenido de ptr1 es: " << *ptr2 << std::endl;
        std::cout << "El contenido de ptr1 es: " << ptr2 << std::endl;
        std::cout << "La direccion de ptr1 es: " << &ptr2 << std::endl;
    }
    else
        printf("Se necesitan argumentos\n");
    return (0);
}