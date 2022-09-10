//tute8AddQ3
#include<stdio.h>
float calcFinalMark(float assignmentMark, float paperMark);
char findGrades(float finalMark);
int main (void)
{
    float assignment, paper, final;
    char grade;
    
    printf("Enter your Assignment Marks: ");
    scanf("%f", &assignment);
    
    printf("Enter your Paper Marks: ");
    scanf("%f", &paper);
    
    final = (assignment * 0.30)+(paper*0.70);
    
    printf("Your Final Mark is %.0f\n", final);
    
    {
        if(final>=75)
        {
            grade ='A';
        }
        else if(final>=60)
        {
            grade ='B';
        }
        else if(final>=50)
        {
            grade ='C';
        }
        else
        {
            grade ='F';
        }
    }
    
    printf("Your Grade %c\n", grade);
    
    return 0;
}
float calcFinalMark(float assignmentMark, float paperMark)
{
    return (assignmentMark * 0.30) + (paperMark * 0.70);
}
char findGrades(float finalMark)
{
    finalMark>=75;
    return 'A';
    
    finalMark>=60;
    return 'B';
    
    finalMark>=50;
    return 'C';
    
    finalMark<50;
    return 'F';
}
