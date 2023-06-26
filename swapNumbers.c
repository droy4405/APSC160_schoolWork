/* Author : Dibbo
   Date : 15th Sept 2022
   Purpose : Swap to number prompted by the user
   */

  #include <stdio.h>

  int main(void) {

    int a, b, c;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    c = b;
    b = a;
    a = c;

    printf("a is: %d \n", a);
    printf("b is: %d \n", b);
  }