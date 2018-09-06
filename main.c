/*
 * Este programa esta hecho para calcular el promedio de los numeros que desee el usuario, a traves de un loop
 * do...while
 *
 * Mario Emilio Aguilar Chung
 * 9/5/2018
 * A01411210@itesm.mx
 *
 */
#include <stdio.h>

int main() {
    //Aqui establezco mis variables. n y average son doubles, porque puede haber valores con punto decimal.
    double n;
    double average;
    int repetition;

    //Aqui establezco los valores iniciales de cada una de las variables
    average = 0.0;
    n= 0.0;
    repetition=0;


    do {
        //Repetition es mi contador. Me dice cuantas veces se ha hecho el loop, para poder sacar el promedio y decir
        //cuantos numeros se han analizado
        repetition++;
        //Aqui se consigue la informacion del usuario (Pero no como Facebook lo hace. A mi si me enseñaron valores)
        printf("Dame un numero:");
        scanf("%lf", &n);

        //Hago la suma de los valores
        average += n;

        //Establezco que cuando me marque 0, se acaba el loop
    } while (n!=0.0);

    //Saco el promedio. Habiendo obtenido la suma de los valores puestos por el usuario, simplemente lo divido por las
    //veces que se repitio el loop, menos 1, porque ese 1 es el 0 que cerro el loop
    average = average/(repetition-1);

    //Le muestro al usuario el resultado de la operacion, y la cantidad de numeros que se analizaron
    printf("El promedio de los numeros es %lf. Se analizaron %i numeros", average, (repetition-1));



    return 0;
}