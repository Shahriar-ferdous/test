/*Author: Shahriar Ferdous
Course: CSCI-135
Instructor: Tong-Yi
Assignment: LAB 4F
This program prints an upside-down trapezoid of given width and height */
#include <iostream>
using namespace std;
int main(){
    int width, height, spaces, stars;
    cout << "Input width: ";
    cin >> width;
    cout << "Input height: ";
    cin >> height;
    cout << "shape: ";
    if (-2*(height-1) + width <= 0) {
        cout << "Impossible shape!";
    }
    else{
         spaces = 0;
        stars = width;
        std::cout << std:: endl;
        for(int row = 0; row < height; ++row){
            for(int x = 0; x <= spaces; ++x){
                cout << " ";
            }

            for(int star = 1; star <= stars; ++star)
            {
                cout << "*";
            }

            std::cout << std::endl;

            spaces+=1;
            stars-=2;
        }
    }
}