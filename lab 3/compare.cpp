
/*Author: Shahriar Ferdous
Course: CSCI-135
Instructor: Tong-Yi
Assignment: LAB 3C
This program finds the minimum and maximum storage in East basin in 2018*/
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;
int main(){
    string date, start_date, end_date;
    cout << "Enter starting date: " << endl;
    cin >> start_date;
    cout << "Enter ending date: " << endl;
    cin >> end_date;
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }
    string junk;
    getline(fin, junk);
    double eastSt, eastEl, westSt, westEl;
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){
        fin.ignore(INT_MAX, '\n');
        if(date >= start_date && date <= end_date){
            cout << date << " ";
            if(eastEl > westEl){
                cout << "East" << endl;
            }
            else if(westEl > eastEl){
                cout << "West" << endl;
            }
            else{
                cout << "Equal" << endl;
            }
        }
    }
    return 0; 
}