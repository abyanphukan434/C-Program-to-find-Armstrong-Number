#include <stdio.h>

int main()
{
 int num, originalNo, remainder, result = 0;
 printf("Enter a three digit number:");
 scanf("%d", &num);
 originalNo = num;
 
 while(originalNo != 0)
 {
  remainder = originalNo % 10;
  result += remainder * remainder * remainder;
  originalNo /= 10;
 }
 
 if (result == num)
 {
  printf("%d is an Armstrong number", num);
 } 
 else 
 {
  printf("%d is not an Armstrong number", num);
 }

    return 0;
}
