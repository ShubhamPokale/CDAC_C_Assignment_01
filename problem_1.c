//File name :problem_1.c
//Author : Shubham Pokale
//Email address : shubham.pokale2001@gmail.com
//Assignment no. 1 : Problem 1
//Description : The distance between two cities (in km.) is input through the keyboard. Write a program to convert and print this distance in meters, feet, inches and centimeters.
//Last changed : 11-09-2023

#include <stdio.h>

int main()
{
    int distance;
	printf("Enter Distance Between 2 cities in kms:  ");
	scanf("%d", &distance);
	int distanceInMetres= distance*1000;
	printf("distance in Meters is %d\n",distanceInMetres);
    int distanceInFeet= distance*3280.84;
	printf("distance in Feet is %d\n",distanceInFeet);
	int distanceInInche =distance*39370.1;
	printf("distance in Inches is %d\n",distanceInInche);
	int distanceIncm = distance*100000;
	printf("distance in cm is %d\n",distanceIncm);
    return 0;
}
