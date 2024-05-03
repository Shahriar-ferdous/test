
/*
Author: Shahriar Ferdous
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1C
Write a program that asks the user to input
• The number of gallons of gas in the tank
• The fuel efficiency in miles per gallon
• The price of gas per gallon
Then print the cost per 100 miles and how far the car can go with the gas in the tank
*/
#include <iostream>
int main(){
    double gal, fuel, price;
    std::cout << "The number of gallons of gas in the tank: " << std::endl;
    std::cin >> gal;
    std::cout << "The fuel efficiency in miles per gallon: " << std::endl;
    std::cin >> fuel;
    std::cout << "The price of gas per gallon: " << std::endl;
    std::cin >> price;
    double cost_per_miles = price / fuel;
    double cost_per_100_miles = cost_per_miles * 100;
    double distance_travelled = gal * fuel;
    std::cout << "The cost per 100 miles is: " << cost_per_100_miles << std::endl;
    std::cout << "The distance traveled with the gas in the tank is: " << distance_travelled << std::endl;
    return 0;
}