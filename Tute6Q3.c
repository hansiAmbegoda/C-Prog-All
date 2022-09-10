//tute6Q3
#include<stdio.h>
int main(void)
{
    //declare variables
    int num;
    int n1, n2, n3, n4, n5 = 0;
    
    //user inputs
    printf("Enter 5 digit number: ");
    scanf("%d", &num);
    
    //store the data for variables
    n1 = num/10000;         //1st digit
    n2 = (num%10000)/1000;  //2nd digit
    n4 = (num%100)/10;      //3rd digit
    n5 = (num%10);          //4th digit
    
    //conditional statements
    if((n1 == n5) && (n2 == n4))
    {
        printf("Entered Number is Palindrome");
    }
    else
    {
        printf("Entered Number is not Palindrome");
    }
    
    return 0;
}