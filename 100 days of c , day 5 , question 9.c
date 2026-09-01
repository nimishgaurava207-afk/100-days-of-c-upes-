#include <stdio.h>

int main(){
     float principal, rate , time, simple_interest;
	 printf("Enter the principal amount: ");
	 scanf("%f" , &principal);
	 
	 printf("Enter the annual interest rate(in%%): ");
	 scanf("%f" , &rate);
	 
	 printf("Enter the time period (in years): ");
	 scanf("%f" , &time);
	 
	 simple_interest = (principal * rate* time) / 100.0;
	 
	 printf("The simple Interest is: %2f\n",simple_interest);
	  return 0;
	  }