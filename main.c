#include <stdio.h>

int main() {
    double n;
    double average;
    int repetition;

    average = 0.0;
    n= 0.0;
    repetition=0;


    do {
        repetition++;
        printf("Dame un numero:");
        scanf("%lf", &n);

        average += n;

    } while (n!=0.0);

    average = average/(repetition-1);

    printf("El promedio de los numeros es %lf. Se analizaron %i numeros", average, (repetition-1));



    return 0;
}