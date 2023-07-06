#include <stdio.h>


void main()
{
    int scoreA;

    int scoreB[5];

    float salaryIOTA;

    float salaryIOTB[100];

    char nameA;

    char nameB[50];

    scoreA = 100;
    printf("%d\n",scoreA);
    scoreB[1] = 200;
    scoreB[4] = 400;

    printf("%d\n",scoreB[1]);
    printf("%d\n",scoreB[4]);

    salaryIOTB[29] = 10000.25;

    salaryIOTB[99] = scoreB[1] + salaryIOTB[29];
    printf ("%.2f\n" , salaryIOTB[99]);


}