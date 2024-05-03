
/*
Author: Shahriar Ferdous
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2A

Write a program which asks the user to input an integer in the range 0 < n < 100. 
If the number is out of range, the program should keep asking to re-enter until a valid number is input.
*/
#include<iostream>
int main(){
    int intg;
    do{
        std::cout << "Please enter an integer: " << std::endl;
        std::cin >> intg;
        if(intg <= 0 || intg >= 100){
            std::cout << "Please re-enter: ";
        }
    } while(intg <= 0 || intg >= 100);
    int sqr = intg * intg;
    std::cout << "The square of " << intg << " is " << sqr << std::endl;
    return 0;
}
