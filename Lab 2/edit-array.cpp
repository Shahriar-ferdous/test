/*Author: Shahriar Ferdous
Course: CSCI-135
Instructor: Tong-Yi
Assignment: LAB 2B
This program creates an array of 10 integers, and 
provides the user with an interface to edit any of its elements.*/

#include <iostream>
using namespace std;
int main(){
    double myData[10];
    int index, value;
    for (int i = 0; i < 10; i++){
        myData[i] = 1; //set the vale of the array to be 1
        cout << myData[i] << " ";}
    cout << endl;
    do{
        cout << "Input cell index: ";
        cin >> index;
        cout<< "Input new value: ";
        cin >> value;
        myData[index] = value;
        if(index >= 0 && index < 10){ // we have to check if the index is greater than 0 and less than 10
             for(int j = 0; j < 10; j++){
                cout << myData[j] << " "; //new value for the array
             }
        cout << endl;
        }else{
            cout << "Index out of range. Exit.." << endl;
            break;
        }
          
    }while (index >= 0 && index < 10);
}