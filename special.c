#include <stdio.h>
int main() {
int n,x,y,s,p;
printf("Enter a two-digit number: ");
scanf("%d", &n);
if (n>= 10 && n <= 99) {
int x = n / 10;
int y = n % 10;
int s = x + y;
int p = x * y;
if (s + p == n) {
printf("%d is a Special Two-digit Number.\n", n);
}
 else {
printf("%d is not a Special Two-digit Number.\n", n);
}

 return 0;
}
