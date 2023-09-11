//File name :problem_5.c
//Author : Shubham Pokale
//Email address : shubham.pokale2001@gmail.com
//Assignment no. 1 : Problem 5
//Description : Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents of C and D.
//Last changed : 11-09-2023

#include <stdio.h>

int main() 
{   
    int C,D,temp;
    
    printf("Enter the value of C : "); 
    scanf("%d",&C);
    
     printf("Enter the value of D : "); 
    scanf("%d",&D);
    
    printf("Before Interchanging the Value of C and D are %d and %d Respectively \n\n",C,D );
    temp = C;
    C = D;
    D = temp ; 
    printf("After Interchanging the Value of C and D are %d and %d Respectively ",C,D );
    
    return 0;
}
