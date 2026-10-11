#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void presentacion () {
    printf("Menu de funciones\n\n");
    printf("Objetivo: Mostrar el uso de un menu\n");
    printf("Programador: Caballero antonio Aura Estrella\n");
    printf("Fecha de creacion: 10/10/2026\n\n");


    system("pause");
}

int menu()  {
    int opcion;

    printf("Menu de operaciones\n\n");
    printf("1. Area de un circulo\n");
    printf("2. Area de un rectangulo\n");
    printf("3. Perimetro de un circulo\n");
    printf("4. Perimetro de un rectangulo\n");
    printf("5. Area de un rombo\n");
    printf("6. Perimetro de un rombo\n");
    printf("7. Area de un trapecio\n");
    printf("8. Perimetro de un trapecio\n");
    printf("9. Area de un hexagono\n");
    printf("10. Perimetro de un hexagono\n");
    printf("50. Salir\n\n");

    printf("Opcion: ");
    scanf("%d", &opcion);

    return opcion;
}

void areaCirculo (){
    float radio, area, PI = 3.1416;

    system("cls");

    printf("Area de un circulo\n\n");
    printf("Radio: ");
    scanf("%f", &radio);

    area = PI * pow(radio, 2);

    printf("El area es: %.2f\n", area);

    system("pause");
}

void perimetroCirculo (){
    float radio, perimetro, PI = 3.1416;

    system("cls");

    printf("Perimetro de un circulo\n\n");
    printf("Radio: ");
    scanf("%f", &radio);

    perimetro = 2 * PI * radio;

    printf("El perimetro es: %.2f\n", perimetro);

    system("pause");
}

void areaRectangulo (){
    float base, altura, area;

    system("cls");

    printf("Area de un Rectangulo\n\n");
    printf("Base: ");
    scanf("%f", &base);
    printf("Altura: ");
    scanf("%f", &altura);

    area = base * altura;

    printf("El area es: %.2f\n", area);

    system("pause");
}

void perimetroRectangulo (){
    float base, altura, perimetro;

    system("cls");

    printf("Perimetro de un Rectangulo\n\n");
    printf("Base: ");
    scanf("%f", &base);
    printf("Altura: ");
    scanf("%f", &altura);

    perimetro = 2 * (base + altura);

    printf("El perimetro es: %.2f\n", perimetro);

    system("pause");
}

void areaRombo(){
    float diagonalMayor, diagonalMenor, area;

    system("cls");

    printf("Area de un Rombo\n\n");
    printf("Diagonal Mayor: ");
    scanf("%f", &diagonalMayor);
    printf("Diagonal Menor: ");
    scanf("%f", &diagonalMenor);

    area = (diagonalMayor * diagonalMenor) / 2;

    printf("El area es: %.2f\n", area);

    system("pause");
}

void perimetroRombo(){
    float lado, perimetro;

    system("cls");

    printf("Perimetro de un Rombo\n\n");
    printf("Lado: ");
    scanf("%f", &lado);

    perimetro = 4 * lado;

    printf("El perimetro es: %.2f\n", perimetro);

    system("pause");
}

void areaTrapecio(){
    float baseMayor, baseMenor, altura, area;

    system("cls");

    printf("Area de un Trapecio\n\n");
    printf("Base Mayor: ");
    scanf("%f", &baseMayor);
    printf("Base Menor: ");
    scanf("%f", &baseMenor);
    printf("Altura: ");
    scanf("%f", &altura);

    area = ((baseMayor + baseMenor) * altura) / 2;

    printf("El area es: %.2f\n", area);

    system("pause");
}

void perimetroTrapecio(){
    float baseMayor, baseMenor, lado1, lado2, perimetro;

    system("cls");

    printf("Perimetro de un Trapecio\n\n");
    printf("Base Mayor: ");
    scanf("%f", &baseMayor);
    printf("Base Menor: ");
    scanf("%f", &baseMenor);
    printf("Lado 1: ");
    scanf("%f", &lado1);
    printf("Lado 2: ");
    scanf("%f", &lado2);

    perimetro = baseMayor + baseMenor + lado1 + lado2;

    printf("El perimetro es: %.2f\n", perimetro);

    system("pause");
}

void areaHexagono(){
    float lado, area;

    system("cls");

    printf("Area de un Hexagono\n\n");
    printf("Lado: ");
    scanf("%f", &lado);

    area = (3 * sqrt(3) * pow(lado, 2)) / 2;

    printf("El area es: %.2f\n", area);

    system("pause");
}

void perimetroHexagono(){
    float lado, perimetro;

    system("cls");

    printf("Perimetro de un Hexagono\n\n");
    printf("Lado:  ");
    scanf("%f", &lado);

    perimetro = lado * 6;

    printf("El perimetro es: %.2f\n", perimetro);

    system("pause");
}

int main() {
    int opcion;

    presentacion();

    do{
        system("cls");
        opcion = menu();

        switch(opcion){
            case 1:
                areaCirculo();
                break;
            case 2:
                areaRectangulo();
                break;
            case 3:
                perimetroCirculo();
                break;
            case 4:
                perimetroRectangulo();
                break;
            case 5:
                areaRombo();
                break;
            case 6:
                perimetroRombo();
                break;
            case 7:
                areaTrapecio();
                break;
            case 8:
                perimetroTrapecio();
                break;
            case 9:
                areaHexagono();
                break;
            case 10:
                perimetroHexagono();
                break;
            case 50:
                printf("Gracias por usar el programa\n");
                break;
            default:
                printf("Opcion no valida\n");
                system("pause");
        }

    }while( opcion != 50);

    return 0;
}

