/*Author: Shahriar Ferdous
Course: CSCI-135
Instructor: Tong-Yi
Assignment: LAB 4C
This program asks the user to input the shape size, and prints a diagonal cross of that dimension */
#include <iostream>
using namespace std;
int main(){
    int i, j, size;
    cout << "Input size: ";
    cin >> size;
    cout << "shape: ";
    std::cout << std::endl;

    for(i = 1; i <= size; i++){
        for(j = 1; j <= size; j++){
            if(i == j || j ==(size - i + 1)){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        std::cout << std::endl;
    }
}