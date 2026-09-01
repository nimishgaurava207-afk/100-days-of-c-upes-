

#include <stdio.h>

int main(){

int a, b, sum, difference, product, quotient;


printf("Enter the value of a and b");
scanf("%d%d", &a, &b);

sum=a+b;
difference=a-b;
product=a*b;
quotient=a/b;

printf("The sum of a and b is %d\n", sum);
printf("The difference of a and b is %d\n", difference);
printf("The product of a and b is %d\n", product);
printf("The quotient of a and b is %d\n", quotient);

return 0;


}