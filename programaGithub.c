#include <stdio.h>

int factorial(int n) {
    if (n < 0) {
        return -1; // No existe el factorial de un número negativo
    }
    if (n == 0) {
        return 1; // Factorial de 0 es 1
    }
    return n * factorial(n - 1);
}

int absolute(int num) {
    return (num < 0) ? -num : num;
}

float calcularPromedio(int cantidad) {
    int i, num;
    float sum = 0;
    
    for (i = 0; i < cantidad; i++) {
        printf("Ingrese el elemento %d: ", i + 1);
        scanf("%d", &num);
        sum += num;
    }
    
    return sum / cantidad;
}

int main() {
    int opcion, num, cantidad;
    
    do {
        printf("Integrantes Jose Camacho Jesus Gonzales");
        printf("\nMenu\n");
        printf("1. Calcular factorial de un numero\n");
        printf("2. Calcular valor absoluto de un numero\n");
        printf("3. Calcular promedio de elementos\n");
        printf("4. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        
        switch (opcion) {
            case 1:
                printf("Ingrese un numero para calcular su factorial: ");
                scanf("%d", &num);
                printf("El factorial de %d es: %d\n", num, factorial(num));
                break;
            case 2:
                printf("Ingrese un numero para calcular su valor absoluto: ");
                scanf("%d", &num);
                printf("El valor absoluto de %d es: %d\n", num, absolute(num));
                break;
            case 3:
                printf("Ingrese la cantidad de elementos para calcular el promedio: ");
                scanf("%d", &cantidad);
                printf("El promedio de los elementos es: %.2f\n", calcularPromedio(cantidad));
                break;
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion invalida. Intente de nuevo.\n");
        }
    } while (opcion != 4);
    
    return 0;
}