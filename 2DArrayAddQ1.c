#include<stdio.h>
int main(void)
{
    //declare array
    char student[3][5];
    int i, j;
    
    //store values
    
    do
    
        for(i=0; i<=2; i++)
        {   
            for(j=0; j<=4; j++)
            {
                printf("student %d:", i+1);
                scanf("%d", &student[i][j]);
                
                for(i=0; i<=4; i++)
                {
                    for(j=0; j<1; j++)
                    {
                        printf("Answer for %d: ", i+1);
                        scanf("%4d", &student[i][j]);
                    }
                    
                }
            }
        }
    }while(student[i][j]!=4);
}