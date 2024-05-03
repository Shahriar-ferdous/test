//Author: Shahriar Ferdous
//Course: CSCI-135
//Instructor: Tong-Yi
//Assignment: Project 1A
//Write a C++ main function to accomplish the following tasks and name the source code arithmetic.cpp.
//1. Select an operator randomly from addition ('+'), subtraction ('-'), multiplication ('*'), division ('/'),
//and remainder ('%')
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(nullptr));
    char operators [] = {'+', '-', '*', '/', '%'};
    char opr = operators[rand() % 5];
    int num1 = rand() % 10;
    int num2;
    if(opr == '/' || opr == '%'){
        num2 = (rand() % 9)+ 1;
    }
    else{
        num2 = rand() % 10;
    }
    int result;
    if(opr == '+'){
        result= num1 + num2;
    }
    else if(opr == '-'){
        result = num1 - num2;
    }
    else if(opr == '*'){
        result = num1 * num2;
    }
    else if(opr == '/'){
        result = num1 / num2;
    }
    else if(opr == '%'){
        result = num1 % num2;
    }
    else{
        result = 0;
    }
    cout << "What is " << num1 << " " << opr << " " << num2 << "?";
    int user_response;
    cin >> user_response;
    if(user_response == result){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    return 0;
}