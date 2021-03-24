#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // Get positive answer from the user
    float dollar;
    do
    {
         dollar = get_float("change owed : ");
    }
    while(dollar<0);

    // make the cauculations
    int coins = 0;

    int cents = round(dollar * 100);

    int a = 25;
    int b = 10;
    int c = 5;
    int d = 1;

     while(cents>=a)
      {
          cents-=a;
          coins++;
      }
     while(cents>=b)
      {
          cents-=b;
          coins++;
      }
     while(cents>=c)
      {
          cents-=c;
          coins++;
      }
     while(cents>=d)
      {
          cents-=d;
          coins++;
      }

      // print the results.

    printf("%i\n", coins);
}