#include<stdio.h>
#include<math.h>
/*Function whose root is to be determined*/
double f(double x){
    return x*x*x-5*x+1;
}
main(){
    int iter=1,maxSteps;
    double x1,x2,x3,e;
    printf("Enter the initial guesses: \nx1 = ");
    scanf("%lf",&x1);
    printf("x2 = ");
    scanf("%lf",&x2);
    printf("Enter the max number of iterations to be performed: ");
    scanf("%d",&maxSteps);
    printf("iter\tx1\t\tx2\t\tx3\t\tf(x3)\n");
    printf("______________________________________________________________\n");
    do{
        x3=(x1*f(x2)-x2*f(x1))/(f(x2)-f(x1));
        printf("%d\t%lf\t%lf\t%lf\t%lf\n",iter,x1,x2,x3,f(x3));
        x1=x2;
        x2=x3;
        iter++;
    }while(fabs(f(x3))>e&&iter<=maxSteps);
    printf("\nOne of the roots is: %lf",x3);
}
