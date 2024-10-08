#include <stdio.h>
int main() {

  float price, discount, discountedPrice, savedAmount;

  printf("Enter amount: ");
  scanf("%f", &price);

  if( price < 2000 && price >= 500){

    discount = 5;
    discountedPrice = (price/100) * discount;
  
  } else if(price >= 2000 && price < 4000) {
  
    discount = 10;
    discountedPrice = (price/100) * discount;

  } else if(price >= 4000 && price < 6000) {
    
    discount = 20;
    discountedPrice = (price/100) * discount;
  
  } else {

    discount = 35;
    discountedPrice = (price/100) * discount;
  
  }

  savedAmount = price - discountedPrice;
  printf("Actual price: %f\n", price);
  printf("You saved: %f\n" , savedAmount);
  printf("Discounted price: %f\n", discountedPrice);

}