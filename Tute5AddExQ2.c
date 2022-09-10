//additional Exercise
#include<stdio.h>
int main(void)
{
    //declare variables
    int fare1, fare2, fare3;
    int travelExp = 0;
    
    //user inputs
    printf("Enter afre for bus 1: ");
    scanf("%d", &fare1);
    
    printf("Enter afre for bus 2: ");
    scanf("%d", &fare2);
    
    printf("Enter afre for bus 3: ");
    scanf("%d", &fare3);

    //calculation    
    travelExp = (fare1 + fare2 +fare3)*65;

    //display output
    printf("travel Expenduture for entire Semester: %d", travelExp);
    
    return 0;
}