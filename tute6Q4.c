//tute6Q4
#include<stdio.h>
int main(void)
{
    //declare variable
    char grade;
    
    //user inputs
    printf("Enter your grade: ");
    scanf("%c", &grade);
    
    //conditional statement
    if(grade == 'A' || grade == 'a')
    {
        printf("Excellent");
    }
    else if(grade == 'B' || grade == 'b')
    {
        printf("Good");
    }
    else if(grade == 'C' || grade == 'c')
    {
        printf("Satisfactory");
    }
    else if(grade == 'F' || grade == 'f')
    {
        printf("Needs Satisfactory");
    }
    else
    {
        printf("Invalid Grade");
    }
    
    return 0;
}