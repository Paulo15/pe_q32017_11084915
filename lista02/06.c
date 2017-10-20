#include<stdio.h>
#include<math.h>

double delta (double a, double b, double c)
{
    double d;
    d = pow(b,2)-(4*a*c);
    return d;
}

double raizG (double a, double b, double c, double d)
{
    double x;
    
    x = (-b/(2*a));
    return x;
    
}

double raizD (double a, double b, double c, double d)
{
    double x;
    
    x = sqrt(d)/(2*a);
    return x;
    
}



double raizN (double a, double b, double c, double d)
{
    
    double x;
    if(d<0)
    {
        d=d*(-1);
    }
    x = sqrt(d)/(2*a);
    
    return x;
     
}


int main()
{
    double a,b,c,d;
    scanf("%lf %lf %lf",&a,&b,&c);
    d=delta(a,b,c);
    //Encontrando raízes
      double x1,x2,x11,x22;
      
    if(d>=0)
    {
        x2=raizG(a,b,c,d)+raizD(a,b,c,d);
        x1=raizG(a,b,c,d)-raizD(a,b,c,d);
        
        printf("%.2lf %.2lf",x1,x2);
    }
    else if(d<0)
    {
        x1=raizG(a,b,c,d);
        x11=+raizN(a,b,c,d);
        x2=raizG(a,b,c,d);
        x22=-raizN(a,b,c,d);
        printf("%.2lf %.2fi %.2lf %.2lfi",x1,x11,x2,x22);
    }
    
}