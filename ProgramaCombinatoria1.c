#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int combinaciones(int n, int r) {
    if (r == 0 || r == n) {
        return 1;
    } else {
        return combinaciones(n - 1, r - 1) + combinaciones(n - 1, r);
    }
}

int permutaciones(int n, int r) {
    if (r == 0) {
        return 1;
    } else {
        int factorial_n = factorial(n);
        int factorial_nr = factorial(n - r);
        return factorial_n / factorial_nr;
    }
}


int potencia(int base, int exponente) {
    if (exponente == 0) {
        return 1;
    } else {
        return base * potencia(base, exponente - 1);
    }
}

int main() {
    int opcion;

    do {
       printf("Integrantes");
       printf("Jesus Gonzalez Jose Camacho"); 
        printf("\nMenu de opciones:\n");
        printf("1. Calcular combinatoria\n");
        printf("2. Calcular permutaciones\n");
        printf("3. Calcular exponente\n");
        printf("4. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: {
                int n, r;
                printf("Ingrese el valor de n: ");
                scanf("%d", &n);
                printf("Ingrese el valor de r: ");
                scanf("%d", &r);

                if (n < 0 || r < 0 || r > n) {
                    printf("Error: Valores no validos.\n");
                } else {
                    int resultado = combinaciones(n, r);
                    printf("Combinaciones: %d\n", resultado);
                }

                break;
            }
            case 2: {
                int n, r;
                printf("Ingrese el valor de n: ");
                scanf("%d", &n);
                printf("Ingrese el valor de r: ");
                scanf("%d", &r);

                if (n < 0 || r < 0 || r > n) {
                    printf("Error: Valores no validos.\n");
                } else {
                    int resultado = permutaciones(n, r);
                    printf("Permutaciones: %d\n", resultado);
                }

                break;
            }
            case 3: {
                int base, exponente;
                printf("Ingrese el valor de la base: ");
                scanf("%d", &base);
                printf("Ingrese el valor del exponente: ");
                scanf("%d", &exponente);

                if (exponente < 0) {
                    printf("Error: Exponente no valido.\n");
                } else {
                    int resultado = potencia(base, exponente);
                    printf("Potencia: %d\n", resultado);
                }

                break;
            }
            case 4:
                break;
            default:
                printf("Error: Opcion no valida.\n");
        }
    } while (opcion != 4);

    return 0;
}
