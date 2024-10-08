#include <stdio.h>
int main() {
  char name[] = "name";
  int id;
  float unit;
  float amount, perunit, surcharge;
  surcharge = 0;

  printf("Enter name: ");
  scanf("%s", &name );

  printf("Enter id: ");
  scanf("%d", &id);

  printf("Enter units: ");
  scanf("%f", &unit);

  if(unit <= 199) {
    perunit = 16.20;
    amount = unit * perunit;
  } else if (unit >=200 && unit < 300) {
    perunit = 20.10;
    amount = unit * perunit;
  } else if (unit >= 300 && unit < 500) {
    perunit = 27.10;
    amount = unit * perunit;
  } else {
    perunit = 35.90;
    amount = unit * perunit;
  }

  if(amount > 18000) {
    surcharge = (amount/100) * 15;
    amount = amount * surcharge;
  }

  /*Expected Output:
  Customer ID :1001
  Customer Name: James
  Units Consumed :800
  Amount Charges @Rs. 35.90 per unit: 28720
  Surcharge Amount: 4308
  Net Amount Paid by the Customer: 33028.00*/


  printf("Customer ID: %d\n", id);
  printf("Customer Name: %s\n", name);
  printf("Units Consumed: %f\n", unit);  
  printf("Amount charges @Rs. %f per unit: %f\n", amount, perunit);
  printf("Surcharge Amount: %f\n", surcharge);
  printf("Your amount is: %f\n", amount);

}