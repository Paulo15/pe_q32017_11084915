#include<stdio.h>
#include<math.h>


int main()
{
    int dec,bin,aux,pot;
    int opcao;
    pot=0;
    bin=0;
    aux=0;
    dec=0;
    
    scanf("%d",&opcao);
    if(opcao==1)           // decimal->binario
    {
        scanf("%d",&dec);
        pot=1;
        while(dec>0)
        {
            aux=dec%2;
            dec=dec/2;
            bin=bin+(aux*pot);
            pot=pot*10;
        }
        printf("%d",bin);
        
    }
    if(opcao==2)           // binario->decimal
    {                       //Para compilar colocar -lm no final
        scanf("%d",&bin);
        pot=1;
        
          if(bin==0)
        {
            dec=0;
            
        }
       int cont=0;
        while(bin>0)
        {
           if(cont==0)
           {
               pot=0;
           }
           else if(cont==1)
           {
               pot=1;
           }
            aux=bin%10;
            bin=bin/10;
            dec=dec+(pow(2,pot)*aux);
            pot++;
            cont++;
        }
      
        
        printf("%d\n",dec);
        
    }
    return 0;
    
}