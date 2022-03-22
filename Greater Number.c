//simple c program to find which number entered by the user is greater and if its even or odd :}
#include<stdio.h>
int main(){
  int num1,num2,num3;
  scanf("%d",&num1"); 
  scanf("%d",&num2");     
  scanf("%d",&num3");
        
      if (num1>num2  && num1>num3){printf("Number 1 Is The Greatest (%d),num1");
      if (num2>num1  && num2>num3){printf("Number 2 Is The Greatest (%d),num2");
      if (num3>num2  && num3>num1){printf("Number 3 Is The Greatest (%d),num3");
return 0;
}
