#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

int main()
{
     double a,b,c,d,x1=0,x2=0;
     printf("Enter a: "); scanf("%lf", &a);
     printf("Enter b: "); scanf("%lf", &b);
     printf("Enter c: "); scanf("%lf", &c);
     if (a==0) printf("ERROR!/n");
     else
     {
          d = pow(b,2)-4*a*c;
          if (d<0) printf("ERROR!");
          else if (d==0)
          {
              if (d==0) x1=-b/(2*a);
              if (b==0 && c==0) x1=0;
              printf("ONLY 1 ANSWER: x=%lf", x1);
          }
          else
          {
          x1=(-b+sqrt(d))/(2*a);
          x2=(-b-sqrt(d))/(2*a);
          printf ("ANSWERS: 1) x1=%lf 2)x2=%lf ",x1,x2);
          }
      }
      return 0;
}