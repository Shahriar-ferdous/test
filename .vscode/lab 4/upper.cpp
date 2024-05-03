
/*Author: Shahriar Ferdous
Course: CSCI-135
Instructor: Tong-Yi
Assignment: LAB 4D
This program prints the top right half of a square, given the side length. */
#include <iostream>
using namespace std;
int main(){
    int size, i, j;
    cout << "Input side length: ";
    cin >> size;
    cout << "shape: ";
    cout << endl;
    for(i = 0; i < size; i++){
        for(j = 0; j < size; j++){
            if(j >= i){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}