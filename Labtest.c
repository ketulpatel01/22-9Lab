//Q.1 Write a Program to print the below pattern using nested for loop.
#include <stdio.h>
int main()
{
    for(int i=41; i<=45; i++)
    {
        for(int j=41; j<=i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

//Q.2 Write a Program to print the below pattern using nested for loop.
#include <stdio.h>
int main()
{
    int a=11;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d ",a++);
        }
        printf("\n");
    }
    return 0;
}

//Q.3 Write a Program to print the below pattern using nested for loop.
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=2 * (5 - i) - 1; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=i; k++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}

//Q.7 Write a Program to print the below pattern using nested for loop.
#include <stdio.h>
#include <stdio.h>
int main()
{
    for(int i=1; i<=6; i++)
    {
        for(int j=1; j<=5; j++)
        {
            if(i==1 || j==1 || j==5 || i==3)
                printf("* ");
            else if(i==4)
                printf("  ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}