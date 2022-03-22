# include<stdio.h>
int main(){
    int income;

    scanf("%d",&income);
    int five=0.05*(income-250000);
    int twenty=0.2*(income-500000);
    int thirty=0.3*(income-1000000);
    printf("You Income In This Year Is :- %d \n",income);
    
    
    if(income<250000){printf("You Have To Pay 0 Income Tax \n");}
    
    if(income>=250000 && income<=500000){printf("You Have To Pay ₹%d Tax \n" ,five);}
    
    if(income>=500000 && income<=1000000){printf("You Have To Pay ₹%d Tax \n" ,twenty);}
    
    if(income>=1000000){printf("You Have To Pay ₹%d Tax \n" ,thirty);}
    
    
    return 0;
    
}
