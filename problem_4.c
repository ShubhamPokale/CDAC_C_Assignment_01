//File name :problem_4.c
//Author : Shubham Pokale
//Email address : shubham.pokale2001@gmail.com
//Assignment no. 1 : Problem 4
//Description : Wind chill factor is the felt air temperature on exposed skin due to wind. The wind chill temperature is always lower than the air temperature, and is calculated as per the following formula: wcf = 35.74 + 0.6215t + ( 0.4275t - 35.75 ) * v 0.16 where t is the temperature and v is the wind velocity. Write a program to receive values of t and v and calculate wind chill factor (wcf).
//Last changed : 11-09-2023

#include <stdio.h>

int main() 
{  
    float temp,vel;
    double wcf;
    printf("Enter the temperature : ");
    scanf("%f",&temp);
    printf("Enter the velocity: ");
    scanf("%f",&vel);
    
    
    
wcf = 35.74 + 0.6215*temp + ( 0.4275*temp - 35.75 ) * vel* 0.16;
    
    
    printf("The value of wcf is %lf",wcf);
    return 0;
}