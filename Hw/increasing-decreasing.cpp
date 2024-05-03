
/*
Author: Shahriar Ferdous
Course: CSCI-135
Instructor: Tong-Yi
Assignment: Homework E3.1
This program reads three numbers and prints “increasing” if they are in
increasing order, “decreasing” if they are in decreasing order, and “neither” otherwise*/
#include <iostream>
int main(){
    int num1, num2, num3;
    std::cout << "Enter the first number: " << std::endl;
    std::cin >> num1;
    std::cout << "Enter the second number: " << std::endl;
    std::cin >> num2;
    std::cout << "Enter the third number: " << std::endl;
    std::cin >> num3;
    std::cout << "Numbers enetered: " << std::endl;
    std::cout << num1 <<std::endl;
    std::cout << num2 <<std::endl;
    std::cout << num3 <<std::endl;
    if(num1 < num2 && num2 < num3){
        std::cout << "Increasing" << std::endl;
    }
    else if(num1 > num2 && num2 > num3){
        std::cout << "Decreasing" << std::endl;
    }
    else{
        std::cout << "neither" << std::endl;
    }
    return 0;
}