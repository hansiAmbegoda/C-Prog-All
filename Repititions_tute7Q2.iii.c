//tute7Q2.i
#include<stdio.h>
int main(void)
{
    //declare variables
    int m1, m2, m3, m4;
    int total = 0;
    int count = 1;
    
    int max = 0;
    int maxCount = 0;
    
    //user inputs
    while(count<=3)
    {
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
        
        printf("total of all marks: %d\n", total);
        
        if(max<=total)
        {
            max = total;
            maxCount = count;
        }
    
        count++;
    }
    printf("Maximum marks is %d", maxCount, max);
        return 0;
}