/*
Author: Shahriar Ferdous
Course: CSCI-135
Instructor: Tong Yi
Assignment: E 1.7

Write a program that prints three items, such as the names of your three best friends
or favorite movies, on three separate lines.
*/
#include <iostream>
#include <string>
int main(){
    std::string name1, name2, name3;
    std::cout << "Enter the first name: " << std::endl;
    std::cin >> name1;
    std::cout << "Enter the second name: " << std::endl;
    std::cin >> name2;
    std::cout << "Enter the third name: " << std::endl;
    std::cin >> name3;
    std::cout << "Names entered: " << std::endl;
    std::cout << name1 << std::endl;
    std::cout << name2 << std::endl;
    std::cout << name3 << std::endl;
    return 0;
}
