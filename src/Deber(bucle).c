#include <stdio.h>

int main(void)
{
    int nroSigno =1;
    printf("Ingresar cantidad de signos: ");
    scanf("%i",&nroSigno);

    for (int i = 0; i < nroSigno; i++)
    {
        if (i%2==0)
    
            printf("+ ");
        else
            printf("- ");
    }
    printf("\n\n ");
    return 0;
}
