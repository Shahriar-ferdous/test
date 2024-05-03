/*Author: Shahriar Ferdous
Course: CSCI-135
Instructor: Tong-Yi
Assignment: LAB 4B
Write a program box.cpp that asks the user to input width 
and height and prints a solid rectangular box of the requested size using asterisks.*/
#include <iostream>
using namespace std;
int main(){
    int w, h;
    cout << "Input width: " << endl;
    cin >> w;
    cout << "Input height: " << endl;
    cin >> h;
    cout << "shape: " << endl;
    for(int row = 0; row < h; row++){
        for(int col = 0; col < w; col++){
            if((row + col) % 2 == 0){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}