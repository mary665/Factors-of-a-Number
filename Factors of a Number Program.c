#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int number, i;

    printf("\n\n    Enter a positive integer : ");
    scanf("%d",&number);

    printf("\n    Factors of %d are : ", number);
    for(i=1; i <= number; ++i)
    {
        if (number%i == 0)
        {
            printf("%d ",i);
        }
    }
    printf("\n\n");

    return 0;
}
