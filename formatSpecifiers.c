#include <stdio.h>

int main(void){
    /*int age = 25;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Bro Code";

    printf("%d\n", age);
    printf("%f\n", price);
    printf("%.10lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);*/

    int num1 = 1;
    int num2 = 10;
    int num3 = -100;

    //Imprime 3 espacios en el digito
    /*printf("%3d\n", num1);
    printf("%3d\n", num2);
    printf("%3d\n", num3);*/

    //Imprime ceros antes del número
    /*printf("%04d\n", num1);
    printf("%04d\n", num2);
    printf("%04d\n", num3);*/

    //Muestra si el número es positivo o negativo
    /*printf("%+d\n", num1);
    printf("%+d\n", num2);
    printf("%+d\n", num3);*/

    //Precision
    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = 100.00;

    //Imprime un mínimo de 7 caracteres
    //Muestra solo dos decimales
    printf("%+7.2f\n", price1);
    printf("%+7.2f\n", price2);
    printf("%+7.2f\n", price3);
}