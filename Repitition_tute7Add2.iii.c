//tute7Add2.i
#include<stdio.h>
int
main (void)
{
  //declare variables
  int package;
  int distance;
  int total;
  char mark = 'N'||'n';

  do
    {
      //user inputs
      printf ("Enter Package No: ");
      scanf ("%d", &package);

      printf ("Enter Distance: ");
      scanf ("%d", &distance);



      //conditional statements

      if (package == 1)
	{
	  total = 150 + (distance - 1) * 175;
	  printf ("Total Amount: Rs.%d\n", total);
	}
      else if (package == 2)
	{
	  total = distance * 100;
	  printf ("Total Amount: Rs.%d\n", total);
	}
      else if (package == 3)
	{
	  total = 130 + (distance - 1) * 150;
	  printf ("Total Amount: Rs.%d\n", total);
	}
      else if (package == 4)
	{
	  total = 120 + (distance - 1) * 130;
	  printf ("Total Amount: Rs.%d\n", total);
	}
      else
	{
	  printf ("Please Enter Valid Category");
	}


      printf ("Do You have many Customers: ");
      scanf ("%s", &mark);

    }
  while (mark == 'Y' || mark == 'y');

  return 0;
}
