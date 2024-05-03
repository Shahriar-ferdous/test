
/*
Author: Shahriar Ferdous
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1B

Write a program smaller.cpp that asks the user to input three integer numbers
 and prints out the smallest of the three.
*/
#include <iostream>
int main(){
    int num1, num2, num3;
    std::cout << "Enter the first number: " << std::endl;
    std::cin >> num1;
    std::cout << "Enter the second number: " << std::endl;
    std::cin >> num2;
    std::cout << "Enter the third number: " << std::endl;
    std::cin >> num3;
    int smallest = num1;
    if(num2 < smallest){
        smallest = num2;
    }
    if(num3 < smallest){
        smallest = num3;
    }
    std::cout << "The smaller of the three is: " << smallest << std::endl;
    return 0;
    

}