//File name :problem_8.c
//Author : Shubham Pokale
//Email address : shubham.pokale2001@gmail.com
//Assignment no. 1 : Problem 8
// Description :  Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater
//         than its perimeter. For example, the area of the rectangle with length = 5 and breadth = 4 is greater than its
//         perimeter.
//Last changed : 11-09-2023

#include<stdio.h>

int main() {

int l,b,perimeter,area;

printf("Enter the length of the rectangle : ");
scanf("%d",&l );

printf("\nEnter the breadth of the rectangle : ");
scanf("%d",&b );


area = l*b;
perimeter = 2*(l+b);

if( area > perimeter){
    printf("\nThe area of the rectangle is greater than its perimeter ");
}else {printf("\nThe perimeter of the rectangle is greater than or equal to its area.");}
return 0;
}