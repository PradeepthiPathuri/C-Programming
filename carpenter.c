#include <stdio.h>
int main() {
float fee = 4800.00;
float wage = 250.00;
int workers ;
workers=fee/wage;
float  eachworker = wage * 4;
float totalAmount = eachworker * workers;
float left = fee - totalAmount;
printf("The amount paid to each worker: Rs. %.lf\n", eachworker);
printf("The total amount paid to all workers: Rs. %.lf\n", totalAmount);
printf("The amount of money left for the carpenter after paying the workers: Rs. %.2f\n", left);
return 0;
}
