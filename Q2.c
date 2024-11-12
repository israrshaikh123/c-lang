#include <stdio.h>
void main()
{
    int startnum = 11;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", startnum);
            startnum++;
        }
        printf("\n");
    }
}