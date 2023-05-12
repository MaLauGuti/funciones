/* Programa que realice las operaciones basicas aritmeticas como una calculadora*/

#include <stdio.h>

int suma (int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
int dividir(int a, int b);

int main (){
int n, x, y, res;
printf("---Menu Calculadora---\n");
printf("1. Sumar\n");
printf("2. Restar\n");
printf("3. Multiplicar\n");
printf("4. Dividir\n");
printf("Ingrese una opcion: ");
do {
    scanf("%d", &n);
}while(n< 1 || n>4);

switch (n){
    case 1: 
        printf("Ingrese 2 valores:\n");
        printf("Valor 1:\n");
        scanf("%d",&x);
        printf("Valor 2:\n");
        scanf("%d",&y);
        res = suma(x,y);
        printf("El resultado de la operacion: %d", res);
        break;
    case 2:
        printf("Ingrese 2 valores:\n");
        printf("Valor 1:\n");
        scanf("%d",&x);
        printf("Valor 2:\n");
        scanf("%d",&y);
        res = resta(x,y);
        printf("El resultado de la operacion: %d", res);
        break;
    case 3:
        printf("Ingrese 2 valores:\n");
        printf("Valor 1:\n");
        scanf("%d",&x);
        printf("Valor 2:\n");
        scanf("%d",&y);
        res = multiplicacion(x,y);
        printf("El resultado de la operacion: %d", res);
        break;    
    case 4: 
        printf("Ingrese 2 valores:\n");
        printf("Valor 1:\n");
        scanf("%d",&x);
        printf("Valor 2:\n");
        scanf("%d",&y);
        res = dividir(x,y);
        printf("El resultado de la operacion: %d", res);
        break;
    default:
        printf("Numero de opcion invalida");
    break;
}
    return 0;
}

int suma(int a, int b){
    return a+b;
}
int resta (int a, int b){
    int r;
    r= a -b;
    return r;
}
int multiplicacion(int a, int b){
    return a*b;
}
int dividir(int a, int b){
    return a/b;
}