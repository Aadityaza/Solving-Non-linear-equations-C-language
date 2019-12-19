#include<stdio.h>
#include<math.h>

//function for non linear expression
float f(float a){
    float fun=(a*a*a)-(a)-2;
    return fun;
}

int main()
{
    float a=1,b=2;
    float c,x;
    int i=0;
   do{
        c=(a+b)/2; //here c is mibpoint
    float fa,fb,fc;
    fa=f(a);
    fb=f(b);
    fc=f(c);
    printf("In itiration %d c is :%f\n",i,c);
    i++;
    if((fa*fc)<0){//computing new range
        b=c;
    }
    else{
        a=c;
    }
    x=(a-b);
    }while(x>0.0001||x<-0.0001);
printf("The value is : %f \n",c);

}
