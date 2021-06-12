#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) x*x*x+x-4
int main()
{
float xu, xl, xm, fu, fl, fm, e;
int iter = 1;
up:
printf("Enter two guess values:\n");
scanf("%f%f", &xu, &xl);
printf("Enter tolerable error:\n");
scanf("%f", &e);
fu = f(xu);
fl = f(xl);
printf("fu = %f\nfl= %f",fu,fl);
if( fu * fl > 0.0)
{
 printf("\nTheir sign are not opposite so they are incorrect initial guesses.\n");
 goto up;
}
printf("\nIteration\t\txu\t\txl\t\txm\t\tf(xm)\n");
do
{
 xm = (xu + xl)/2;
 fm = f(xm);
 printf("%d\t\t%f\t%f\t%f\t%f\n",iter, xu, xl, xm, fm);
 if( fu * fm < 0)
 {
  xl = xm;
  fl = fm;
 }
 else
 {
  xu = xm;
  fu = fm;
 }
 iter = iter + 1;
}while(fabs(fm)>e);
printf("\nRoot is: %f", xm);
getch();
}
