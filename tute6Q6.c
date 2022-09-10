//tute6Q6
#include<stdio.h>
int main(void)
{
    //declare variables
    char grade;
    
    //user input
    printf("Enter your grade: ");
    scanf("%c", &grade);
    
    //conditional statement
    if(grade=='A')
    {
        printf("Excellent");
    }
    else if(grade=='B')
    {
        printf("Good");
    }
    else if(grade=='C' || grade=='c')
    {
        printf("OK");
    }
    else
    {
        printf("Needs Improvement");
    }
    return 0;
}