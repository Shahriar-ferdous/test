
/*
Author: Shahriar Ferdous
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1A

Write a program smaller.cpp that asks the user to input two integer numbers
 and prints out the smaller of the two.
*/
#include <iostream>
int main(){
    int num1, num2;
    std::cout << "Enter the first number: " << std::endl;
    std::cin >> num1;
    std::cout << "Enter the second number: " << std::endl;
    std::cin >> num2;
    if (num1 < num2){
        std::cout << "The smaller of the two is: " << num1 << std::endl;
    }
    else{
        std::cout << "The smaller of the two is: " << num2 << std::endl; 
    }
}