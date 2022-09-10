//additional exercise
#include<stdio.h>
int main ( )
{ 
     int num, digit1, digit2, digit3, digit4, digit5;
     
     printf("Enter a 5 digit whole number: ");
     scanf("%d", &num); 
     
     digit5 = num % 10;   
     num = num / 10;
     
     digit4 = num % 10;   
     num = num / 10;    
     
     digit3 = num % 10;   
     num = num / 10;    
     
     digit2 = num % 10;  
     num = num / 10;
     
     digit1 = num % 10;   
     
     printf("%d   %d   %d   %d   %d\n", digit1, digit2, digit3, digit4, digit5);
     return 0;
}