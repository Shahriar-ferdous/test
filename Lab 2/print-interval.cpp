/*
Author: Shahriar Ferdous
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2B

Write a program  that asks the user to input two integers L and U (representing the lower and upper limits of the interval),
 and print out all integers in the range L ≤ i < U separated by spaces.
*/
#include <iostream>
int main(){
    int L,U;
    std::cout << "Please enter L: " << std::endl;
    std::cin >> L;
    std::cout << "Please enter U: " << std:: endl;
    std::cin >> U;
    for(int i = L; i < U; i++){
        std::cout << i << std::endl;
    }
    return 0;
}