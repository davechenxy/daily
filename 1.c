#include <stdio.h> 

int main()
{ 
int amount = 100;
int price = 0;

printf("money:");
scanf("%d",&price);

printf("amount:");
scanf("%d",&amount);


int change = 100 - price;

printf("change %d \n",change ); 
} 
