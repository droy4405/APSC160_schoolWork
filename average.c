/* Author : Dibbo
   Date :  15th Sept 2022
   Purpose : Finding the average of two numbers
   */

  #include <stdio.h>

  int main(void){

    int num1;
    int num2;
    float avg;

    printf("Enter a number: \n");
    scanf("%d", &num1);

    printf("Enter a number: \n");
    scanf("%d", &num2);

    avg = (num1 + num2) / (float) 2;

    printf("The average is: %.1f \n", avg);

    system( "PAUSE" );

    return 0;
  }