//File name :problem_3.c
//Author : Shubham Pokale
//Email address : shubham.pokale2001@gmail.com
//Assignment no. 1 : Problem 3
//Description : If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits. (Hint: Use the modulus operator ‘%’)
//Last changed : 11-09-2023


#include <stdio.h>

int main() 
{   int n, sum = 0,rem; 
  printf("Enter a 5 digit number : ");
  scanf("%d",&n); 
  
  while(n!=0){
      
      rem = n%10; 
      n=n/10;
      sum = rem + sum;
      
  }
    printf("The addition of the digis is: %d", sum);
  
    return 0;
}