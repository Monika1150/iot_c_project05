#include <stdio.h>

void main()
{
    int num[50];
    int i;

    for (i = 0; i < 50; i = i+1)
    {
        num[i] = (i+1) * 10;
    }
    for(i = 0; i < 50; i = i+1)
    {
       printf ("Box %d: %d\n" , i+1 , num[i]); 
    }

}