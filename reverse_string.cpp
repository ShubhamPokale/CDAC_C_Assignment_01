//File name :reverse_string.cpp
//Author : Shubham Pokale
//Email address : shubham.pokale2001@gmail.com
//Assignment no. 1 : Question 1
//Description : Write a C program to take a string input from user and find the reverse of that string
//without using built-in string function.
//Last changed : 07-09-2023

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    cout << "Infoway Assignment no 1";
    cout << " =====  Program to Reverse the String without using System defined function, in CPP  ===== \n\n";

    //Variable Declaration
    char s1[100], c = 'a';
    int n = 0, i = 0;

    cout << "\n\nEnter the String you want to reverse: ";
    cin >> s1;

    //Computing string length without using system defined method
    while (c != '\0')
    {
        c = s1[i];
        i++;
    }
    n = i - 1;

    cout << "\n\nLength of the entered string \"" << s1 << "\" is : " << n << "\n\n\n";

    //Declaring another char array to store the reverse of the string
    char s2[i];

    i = 0;
    //Logic to store the reverse of a string in another char array
    while (i != n + 1)
    {
        s2[i] = s1[n - i - 1];
        i++;
    }

    cout << "\n\nReverse of the entered string \"" << s1 << "\" is : \"" << s2 << "\"\n\n\n";

    return 0;
}
