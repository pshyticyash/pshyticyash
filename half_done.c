//This Code Is Not Completed Yet!!!
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    
    srand (time(0));
    int random = rand()%100 +1;
    printf("%d",random);
    
    int user_input;
    scanf ("%d",&user_input);
    
   while (user_input!=random){
       
       if(user_input>random){
           printf("Enter A Smaller Number !!!");}
       
   
       if(user_input<random){
           printf("Enter A Bigger Number !!!");}
       
   }
    
    
return 0;}
