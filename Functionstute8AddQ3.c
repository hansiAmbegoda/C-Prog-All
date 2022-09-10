//tute8AddQ3
#include<stdio.h>
float calcFinalMark(float assignmentMark, float paperMark);
int main (void)
{
    float assignment, paper, final;
    
    printf("Enter your Assignment Marks: ");
    scanf("%f", &assignment);
    
    printf("Enter your Paper Marks: ");
    scanf("%f", &paper);
    
    final = (assignment * 0.30)+(paper*0.70);
    
    printf("Your Final Mark is %.0f %", final);
    
    return 0;
}
float calcFinalMark(float assignmentMark, float paperMark)
{
    return (assignmentMark * 0.30) + (paperMark * 0.70);
}