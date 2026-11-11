#include<stdio.h>
int main(){
    float a,b;
    char op;
    printf("Enter first number:\n");
    scanf("%f",&a);
    printf("Enter Operators(+,-,*,/):\n");
    scanf(" %c",&op);
    printf("Enter second number:\n");
    scanf("%f",&b);
      switch(op){
        case'+':
        printf("Result=%.2f",a+b);
        break;
        case'-':
        printf("Result=%.2f",a-b);
        break;
        case'*':
        printf("Result=%.2f",a*b);
        break;
        case'/':
          if(b!=0){
        printf("Result=%.2f",a/b);
    }
          else{
            printf("ERROR:Zero cannot be divided by any number.");
    }
        break;
          default:
          printf("Invalid Operartors");
      }
return 0;
}