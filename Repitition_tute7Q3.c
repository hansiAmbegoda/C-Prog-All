//tute7Q3
#include<stdio.h>
int main(void)
{
    char k, l, m, n;
    
    //first pattern of stars
    for(k=1; k<=7; k++)
    {
        for(l=1; l<=k; l++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    //second pattern of stars
    for(m=7; m>=1; m=m-2)
    {
        for(n=1;n<m; n++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}