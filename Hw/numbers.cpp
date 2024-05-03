
/*
Author: Shahriar Ferdous
Course: CSCI-135
Instructor: Tong-Yi
Assignment: Homework E3.1
This program reads an integer and prints whether it's positive, negaive or zero*/
#include <iostream>
using namespace std;
int main(){
    int intg;
    cout<<"Enter an integer: ";
    cin>> intg;
    if (intg > 0){
        cout<<"It is positive"<< endl;
    }
    else if (intg < 0){
        cout<<"It is negative"<< endl;
    }
    else {
        cout<<"It is zero"<< endl;
    }
    return 0;
    
}