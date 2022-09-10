#include<stdio.h>
int main(void)
{
    for(int i=20; i>=-10; i-=5)
    {
        printf("%d\t", i);
        --i;
    }
    return 0;
}
