

#include <stdio.h>

int main(){
    float cp, sp, amount;
    float percentage;

    printf("Enter Cost Price(CP): ");
    scanf("%f", &cp);
    printf("Enter the Selling Price(SP): ");
    scanf("%f" , &sp);

    

    if ( sp > cp){
        amount = sp - cp;
        percentage = (amount / cp) * 100;
        printf("Profit = %.2f\n" , amount);
        printf("Profit Percentage = %.2f%%\n" , percentage);
    }
    else if (cp>sp){
        amount = cp - sp;
        percentage = ( amount / cp) * 100;
        printf("Loss = %.2f\n" , amount);
        printf("Loss percentage = %.2f%%\n" , percentage);
    }
    return 0;


}
