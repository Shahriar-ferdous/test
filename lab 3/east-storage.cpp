/*Author: Shahriar Ferdous
Course: CSCI-135
Instructor: Tong-Yi
Assignment: LAB 3A
This program asks the user to input a string representing the date (in MM/DD/YYYY format),
 and prints out the East basin storage on that day.*/
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;
int main(){
    string Point_time;
    double AUGEVolume;
    string date;
    cout << "Enter date: ";
    cin >> date;
    ifstream fin("Current_Reservoir_Levels.tsv");
if (fin.fail()) {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
}
string junk;
getline(fin, junk);

while(fin >>Point_time){
    fin >> AUGEVolume;
    fin.ignore(INT_MAX, '\n');
    if(Point_time == date){
        cout << "East basin storage: " << AUGEVolume <<" billion gallons" << endl;
    }
}
fin.close();
return 0;

}