//tute8Q2
#include<stdio.h>
float cycleArea(float radius);  //function prototype
int main()
{
    //declare variables
    int r;
    int a;
    
    //user inputs
    printf("Enter Radius: ");
    scanf("%d", &r);
    
    a = cycleArea(r);  //calling function
    
    printf("Area: %d", a);
    
    return 0;
}
float cycleArea(float radius)
{ 
    float area;
    area = 0.7/22*radius*radius;
    return area;
}