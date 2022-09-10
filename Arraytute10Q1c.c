//tute10Q3.a
#include<stdio.h>
int main(void)
{
    //array
    int marks[10];
    int i;
    int x;
    int sum = 0;
    int mean;
    
    while (i<=9)
    {
        //user inputs
        printf("Enter a mark for student %d: ", i+1);
        scanf("%d", &x);
    
        if (x>=0 && x<20)
        {
            marks[i]= x;
            i++;
        }
        else
        {
            printf("Invalid Input\n");
        }
    }

    //finding mean    
    for(i=0; i<10; i++)
    {
        sum = sum+marks[i];
    }
    
    mean = sum/10;
    printf("Mean is %d\n", mean);
    
    printf("............................\n");
    
    for(i=0; i<10; i++)
    {
        printf("Enter a mark for %d: %d\n", i+1, marks[i]);
    }
    return 0;
}