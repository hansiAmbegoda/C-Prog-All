#include<stdio.h>
#include<string.h>
int main(void)
{
    //declare character array
    char value[10];
    int i, length, flag = 0;
    
    //user inputs
    printf("Enter any word : ");
    scanf("%s", value);
    
    length = strlen(value);
    
    for (i=0; i<=(length/2); i++)
    {
        if(value[i] !=value[length - 1 -i])
        {
            flag = 0;
            break;
        }
        else
        {
            flag = 1;
        }
    }
    
    if (flag == 1)
    {
        printf("This is a palindrome");
    }
    else
    {
        printf("This is not a palindrome");
    }
    return 0;
}