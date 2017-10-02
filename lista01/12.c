#include<stdio.h>
#include<math.h>
// #include<string.h>


char conversor(int a)
{
    if (a==0)
    {
        return '0';
    }
    if (a==1)
    {
        return '1';
    }
    if (a==2)
    {
        return '2';
    }
    if (a==3)
    {
        return '3';
    }
    if (a==4)
    {
        return '4';
    }
    if (a==5)
    {
        return '5';
    }
    if (a==6)
    {
        return '6';
    }
    if (a==7)
    {
        return '7';
    }
    if (a==8)
    {
        return '8';
    }
    if (a==9)
    {
        return '9';
    }
    if (a==10)
    {
        return 'A';
    }
    if (a==11)
    {
        return 'B';
    }
    if (a==12)
    {
        return 'C';
    }
    if (a==13)
    {
        return 'D';
    }
    if (a==14)
    {
        return 'E';
    }
    if (a==15)
    {
        return 'F';
    }
}

char conversorH(char a)
{
    if (a=='0')
    {
        return 0;
    }
    if (a=='1')
    {
        return 1;
    }
    if (a=='2')
    {
        return 2;
    }
    if (a=='3')
    {
        return 3;
    }
    if (a=='4')
    {
        return 4;
    }
    if (a=='5')
    {
        return 5;
    }
    if (a=='6')
    {
        return 6;
    }
    if (a=='7')
    {
        return 7;
    }
    if (a=='8')
    {
        return 8;
    }
    if (a=='9')
    {
        return 9;
    }
    if (a=='A')
    {
        return 10;
    }
    if (a=='B')
    {
        return 11;
    }
    if (a=='C')
    {
        return 12;
    }
    if (a=='D')
    {
        return 13;
    }
    if (a=='E')
    {
        return 14;
    }
    if (a=='F')
    {
        return 15;
    }
}

int tamanho(int x)
{
    int t=0;
        if(x<16)
        {
            return 1;
        }
        else 
        {
            while(x>0)
            {
                x=x/16;
                t++;
            }
            return t;
        }
}
int main()
{
    int opcao,x;
    printf("Digite 1: Decimal->Hexadecimal\n");
    printf("Digite 2: Hexadecimal->Decimal\n");
    
    scanf("%d",&opcao);
  
    if(opcao==1)        //Decimal->hexadecimal
    {
        printf("Insira o valor decimal:\n");
        scanf("%d",&x);
        int dec=x;
        int t=tamanho(x);
        char hex[t];
        int aux=0;
        int cont=0;
        int i=t -1;
        while(dec>0)
        {
            
            aux=dec%16;
            hex[cont]=conversor(aux);
            dec=dec/16;
            cont++;
        }
        
        for(i=t-1;i>=0;i--)
        {
            printf("%c",hex[i]);
            
        }
            printf("\n");
    }
    
    else if(opcao==2)           //Hexadecimal->Decimal
    {
         
        printf("Insira quantos algarismos possui seu número\n");
        int t;
        scanf("%d",&t);
        printf("Insira o valor hexadecimal:\n");
        
        
        char hexa[t];
        scanf("%s",hexa);
       
        
        int i=t-1;
        int j=0;
        int pot=0;
        int dec=0;
        int aux=0;
        while(i>=0)
        {
            pot=pow(16,i);
            aux=conversorH(hexa[j]);
            dec=dec+(pot*aux);
            j++;
            i--;
            
        }
            printf("%d\n",dec);
        
        
    }
}