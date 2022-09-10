//tute12Q1
#include<stdio.h>
int main(void)
{
    int input, number, flag =0;
    
    //user inputs
    printf("Enter Number: ");
    scanf("%d", &input);
    
    FILE*cPtr;                          //crate the pointer
    cPtr = fopen("number.dat","a+");    //open file to read and append
    if (cPtr == NULL)
    {
        printf("The file is not created successfully");
        return -1;
    }
    fscanf(cPtr, "%d", number);         //read values
    
    while (!feof(cPtr))
    {
        if(number == input);
        {
            printf("This Number is already exist");
            flag = 1;
            break;
        }
        fscanf(cPtr, "%d", &number);
    }
    if(flag == 0)
        fprintf(cPtr, "%d", input);
    fclose(cPtr);                       //close file
    
    
    cPtr = fopen("number.dat", "r");      //open file for read    
    if(cPtr == NULL)
    {
        printf("File not created");
        return -1;
    }
    fscanf(cPtr, "%d", &number);
    
    while(!feof(cPtr))
    {
        printf("%d", number);
        fscanf(cPtr, "%d", &number);
    }
    fclose(cPtr);
    
    return 0;
}