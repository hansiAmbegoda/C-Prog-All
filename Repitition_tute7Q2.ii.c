//tute7Q2.i
#include<stdio.h>
int main(void)
{
    //declare variables
    int m1, m2, m3, m4;
    int total;
    
    //user inputs
    printf("Enter module 1 mark: ");
    scanf("%d", &m1);
    
    printf("Enter module 2 mark: ");
    scanf("%d", &m2);
    
    printf("Enter module 3 mark: ");
    scanf("%d", &m3);
    
    printf("Enter module 4 mark: ");
    scanf("%d", &m4);
    
    //calculation
    total = m1 + m2 + m3 + m4;
    
    printf("total of all marks: %d", total);
    
    return 0;
}