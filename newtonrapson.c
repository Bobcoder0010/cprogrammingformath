    
    #include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define f(x) x*x+2*x-2
#define df(x) 2*x+2
// float f(float x)
// {

//     return x*x+2*x-2;
// }
// float df(float x)
// {
//     return 2*x+2;
// }

int main()
{
    float x0,x1,err= 0.0001;
    int i=1;
    printf("enter the value of initial guess");
    scanf("%f",&x0);
    printf("\nitr\tx0\t\tx1\n");
    do
    {
        x1=x0-f(x0)/df(x0);
        printf("%d\t%f\t%f\n",i,x0,x1);
        x0=x1;
        i++;

    }while(fabs(f(x0))>err);
    printf("the root is %f",x0);
    return 0;
}

    
    

