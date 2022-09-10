#include<stdio.h>
int
main (void)
{
  for (int i = 3; i <= 23; i += 4)
    {
      printf ("%d\t", i);
      ++i;
    }
  return 0;
}
