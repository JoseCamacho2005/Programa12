#include <stdio.h>
#include <string.h>


struct Cliente {
    char razonSocial[50];
    char rifCedula[15];
    int cantidadRefrescos;
    int cantidadMaltas;
};


float calcularMontoPagar(struct Cliente cliente) {
    float total = 0;
    
    
    if (cliente.cantidadRefrescos >= 6) {
        total += cliente.cantidadRefrescos * 5; // Precio al mayor
    } else {
        total += cliente.cantidadRefrescos * 10; // Precio al detal
    }
    
    
    if (cliente.cantidadMaltas >= 6) {
        total += cliente.cantidadMaltas * 7; // Precio al mayor
    } else {
        total += cliente.cantidadMaltas * 12; // Precio al detal
    }
    
    return total;
}

int main() {
    struct Cliente cliente;
    
    
    printf("Ingrese la razón social del cliente: ");
    fgets(cliente.razonSocial, 50, stdin);
    cliente.razonSocial[strcspn(cliente.razonSocial, "\n")] = 0; // Eliminar el salto de línea
    
    printf("Ingrese el RIF/Cédula del cliente: ");
    fgets(cliente.rifCedula, 15, stdin);
    cliente.rifCedula[strcspn(cliente.rifCedula, "\n")] = 0; // Eliminar el salto de línea
    
    printf("Ingrese la cantidad de refrescos comprados: ");
    scanf("%d", &cliente.cantidadRefrescos);
    
    printf("Ingrese la cantidad de maltas compradas: ");
    scanf("%d", &cliente.cantidadMaltas);
    
    
    float montoPagar = calcularMontoPagar(cliente);
    
    
    printf("\n--- Resumen de compra ---\n");
    printf("Cliente: %s\n", cliente.razonSocial);
    printf("RIF/Cédula: %s\n", cliente.rifCedula);
    printf("Cantidad de refrescos comprados: %d\n", cliente.cantidadRefrescos);
    printf("Cantidad de maltas compradas: %d\n", cliente.cantidadMaltas);
    printf("Monto a pagar: $%.2f\n", montoPagar);
    printf("Jose Camacho,Jesus Gonzalez,Adriana Mendoza, Fernando Martinez");
    
    return 0;
}
    