#include <stdio.h>
#include <math.h>

double A (double a, double b)
{
    double a1;
    a1=(a+b)/2;
    return a1;
}

double B (double a, double b)
{
    b=sqrt(a*b);
    return b;
}

double T (double a1, double a, double p, double t)
{
    t = t-(p*pow((a-a1),2));
    return t;
}

double P (double p)
{
    p=2*p;
    return p;
}

double troca_A(double a, double a1)
{
    a=a1;
    return a;
}

double PI (double a, double b, double t, double p, double x)
{
    double a1,pi;
    
    
    if(x==10)
    {
        return pi;
    }
    else 
    {
        a1=A(a,b);
        b=B(a,b);
        t=T(a1,a,p,t);
        p=P(p);
        a=a1;
        pi=pow((a+b),2)/(4*t);
        x++;
        
        printf("T = %.20f\n",t);
        return PI(a,b,t,p,x);
    }
    
}

int main()
{
    double a=1;
    double b=1/sqrt(2);
    double t=0.25;
    double p=1;
    int x=0;
    double pi=0;
    pi=PI(a,b,t,p,x);
    // printf("%.10f",pi);
    
    
    return 0;
}