//File name :problem_2.c
//Author : Shubham Pokale
//Email address : shubham.pokale2001@gmail.com
//Assignment no. 1 : Problem 2
//Description : Ramesh’s basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary
//Last changed : 11-09-2023

#include <stdio.h>

int main() 
{
    float sal;
    printf("enter your basic salary :");
    scanf("%f",&sal);
    printf("gross salary will be :%f",sal+sal*0.4+sal*0.2);
    return 0;
}

