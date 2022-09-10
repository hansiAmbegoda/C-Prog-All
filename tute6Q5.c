//tute6Q5
#include<stdio.h>
int main(void)
{
    //declare variable
    char grade;
    
    //user inputs
    printf("Enter your Grade : ");
    scanf("%c", &grade);
    
    switch(grade)
    {
        case 'A':
        case 'a': printf("Excellent\n");
                break;
        case 'B':
        case 'b': printf("Good");
                break;
        case 'C':
        case 'c': printf("Satisfactory");
                break;
        case 'F':
        case 'f': printf("Needs Improvement");
                break;
        
        default: printf("Invalid Input");
    }
    return 0;
}