#include <stdio.h>

/*Calular la nota de un estudiante que posee un acumulado de 60 puntos 
y un examen de 40 puntos. Decir si esta aprobado o reprobado
un estudiante aprueba si su nota es mayor o igual a 70*/


int calFinalSc(int score, int exam);

void valFinalSc(int score);

void pedirNotas();




int main(int argc, char const *argv[])
{
    pedirNotas();
    return 0;
}

void pedirNotas()
{
    int acumulado, examen, notaFinal;
    printf("Dime el acumulado: \n");
    scanf("%d", &acumulado);
    printf("Dime la nota del examen: \n");
    scanf("%d", &examen);
    notaFinal= calFinalSc(acumulado, examen);
    printf("Nota final %d\n", notaFinal);
    valFinalSc(notaFinal);
}

 int calFinalSc(int score, int exam)
 {

    return score + exam;

 }
    
void valFinalSc(int score){

    if(score >= 70) printf( "Aprobado...");
    else printf("Reprobado :(");
}
