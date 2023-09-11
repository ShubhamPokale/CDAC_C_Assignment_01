//File name :problem_6.c
//Author : Shubham Pokale
//Email address : shubham.pokale2001@gmail.com
//Assignment no. 1 : Problem 6
//Description : A five-digit number is entered through the keyboard. Write a program to obtain the reversed number and to determine whether the original and reversed numbers are equal or not.
//Last changed : 10-09-2023


#include <stdio.h>

int  main( ) {
    int n;
    int rev_num=0;
    int rem;
    printf("Enter the value of n : ");
    scanf("%d",&n);

while (n>0) {
    rem=n%10;
    rev_num=rev_num*10+rem;
    n=n/10; }
    printf("\nThe reversed number is %d \n ",rev_num);

if(n==rev_num)
    printf("\nReversed number is equal to the actual number");

else
    printf("\nReversed number is not equal to the actual number");


}

