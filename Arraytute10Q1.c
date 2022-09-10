//tute10
#include<stdio.h>
int main(void)
{
    int mark[10];
    
    for(int i=0; i<10; i++)
    {
        printf("Enter marks for student %d :", i+1);
        scanf("%d", &mark);
    }
    
    printf("........................\n");
    
    for(int i=0; i<10; i++)
    {
        printf("Enter marks for student %d:  %d\n", i+1, mark[i]);
    }
    return 0;
}