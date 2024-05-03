
/*Author: Shahriar Ferdous
Course: CSCI-135
Instructor: Tong-Yi
Assignment: LAB 2B
Write a program fibonacci.cpp,
which uses an array of ints to compute and print all Fibonacci numbers from F(0) to F(59)..*/
#include <iostream>
using namespace std;
int main(){
    int fib[60];
    fib[0] = 0;
    fib[1] = 1;
    
    for ( int i = 0; i < 60; i++){ //loop through numbers starting from 0 untill 60
        for (int i = 2; i < 60; i++){
             fib[i] = fib[i-1] + fib[i-2]; // Formula to get the fibpnacci series
        }
        cout << fib[i] << endl;
    }
}