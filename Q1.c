#include <stdio.h>
void main()
{
    int startnum = 41;
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", startnum + j);
        }
        printf("\n");
    }
}

/*
i=0
j=0

41

i=1
j=0,1

41 42

i=2
j=0,1,2

41 42 43

i=3
j=0,1,2,3

41 42 43 44

i=4
j=0,1,2,3,4

41 42 43 44 45

Initialization (int j = 0):

the output:
41
41 42
41 42 43
41 42 43 44
41 42 43 44 45
*/