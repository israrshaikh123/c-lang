#include <stdio.h>
void main()

{
    for (int i = 5; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (j % 2 == 1)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }
}