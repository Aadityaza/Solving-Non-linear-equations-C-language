#include<stdio.h>
#include<math.h>

float f(float x){

    //return x*log10(x)-1.2;
    return (x*x)-4*x-7;
}
float fp(float x)
{
   // return log10(x)+1;
   return (7-(x*x))/(-4);
}

int main()
{
    float x=0;
    float e;
    int i=0;
   do{
     float temp= fp(x);
     e=temp-x;
     x=temp;
     i++;
    printf("In itieratio %d x is :%f\n",i,x);
    }while(e>0.0001||e<-0.0001);
printf("\nThe value is : %f \n",x);

}
