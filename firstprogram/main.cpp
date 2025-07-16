/************************************************
*author: Xin Tang
*
*date: 2025-07-16s
*************************************************/

#include <iostream>

// This program prompts the user for their favorite number and displays it.

/* This code is written in C++98 standard.
   It includes the iostream library for input and output operations.
   The main function is the entry point of the program.
*/


int main()
{
    int favorite_number;
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favorite_number;
    std::cout << "Amazing! Your favorite number is " << favorite_number << "!" << std::endl;

    return 0;
}