//File name : fact_using_do_while.cpp
//Author : Shubham Pokale 
//Email address : shubham.pokale2001@gmail.com
//Assignment no.1 : Question 2 
//Description : Write a c program to take input from user and find Factorial of that number using dowhile Loop only.
//Last changed : 08-09-2023
#include<iostream>
using namespace std;
int main()
{
 int n,f=1,i=1;
    
     
    cout<<"\n Enter The Number:";
    cin>>n;
     
    //Loop to calculate the factorial 
    do
    {
        f=f*i;
        i++;
    }while(i<=n);
     
    cout<<"\n The Factorial of "<<n<<" is "<<f;



 return 0;
}