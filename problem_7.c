//File name :problem_7.c
//Author : Shubham Pokale
//Email address : shubham.pokale2001@gmail.com
//Assignment no. 1 : Problem 7
//Description :  A certain grade of steel is graded according to the following conditions:  s(i) Hardness must be greater than 50
//         (ii) Carbon content must be less than 0.7 (iii) Tensile strength must be greater than 5600. The grades are
//         as follows: Grade is 10 if all three conditions are met, Grade is 9 if conditions (i) and (ii) are met,
//         Grade is 8 if conditions (ii) and (iii) are met, Grade is 7 if conditions (i) and (iii) are met, Grade is 6 if
//         only one condition is met, Grade is 5 if none of the conditions are met, Write a program, which will require the
//         user to give values of hardness, carbon content and tensile strength of the steel under consideration and output
//         the grade of the steel.
//Last changed : 10-09-2023

#include<stdio.h>

int main(){

int hardness_coefficient;
float carbon_content; 
int tensile_strength; 

printf("Enter the value of Hardness Coefficient: ");
scanf("%d",&hardness_coefficient);

printf("\nEnter the value of Carbon Content : ");
scanf("%f",&carbon_content);

printf("\nEnter the value of Tensile Strength : ");
scanf("%d",&tensile_strength);

if(hardness_coefficient > 50 && carbon_content < 0.7 && tensile_strength > 5600 )
{printf("\nThe given material with the Hardness Coefficient %d, Carbon Content %f and Tensile Strength %d is of Grade 10",hardness_coefficient,carbon_content,tensile_strength);}

else if(hardness_coefficient > 50 && carbon_content < 0.7 )
{printf("\nThe given material with the Hardness Coefficient %d, Carbon Content %f and Tensile Strength %d is of Grade 9",hardness_coefficient,carbon_content,tensile_strength);}

else if(carbon_content < 0.7 && tensile_strength > 5600 )
{printf("\nThe given material with the Hardness Coefficient %d, Carbon Content %f and Tensile Strength %d is of Grade 8",hardness_coefficient,carbon_content,tensile_strength);}

else if(hardness_coefficient > 50 && tensile_strength > 5600 )
{printf("\nThe given material with the Hardness Coefficient %d, Carbon Content %f and Tensile Strength %d is of Grade 7",hardness_coefficient,carbon_content,tensile_strength);}

else if(hardness_coefficient > 50 || carbon_content < 0.7 || tensile_strength > 5600 )
{printf("The given material with the Hardness Coefficient %d, Carbon Content %f and Tensile Strength %d is of Grade 6",hardness_coefficient,carbon_content,tensile_strength);}
else
{printf("\nThe given material with the Hardness Coefficient %d, Carbon Content %f and Tensile Strength %d is of Grade 5",hardness_coefficient,carbon_content,tensile_strength);}


}