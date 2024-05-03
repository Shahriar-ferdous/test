
/*Author: Shahriar Ferdous
Course: CSCI-135
Instructor: Tong-Yi
Assignment: LAB 4F
This program prints an upside-down trapezoid of given width and height */
#include <iostream>
using namespace std;
int main(){
    int width, height;
    cout << "Input width: ";
    cin >> width;
    cout << "Input height: ";
    cin >> height;
    cout << "shape: ";
    cout << endl;
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            if((i/3 + j/3) % 2 == 0){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}