
/*Author: Shahriar Ferdous
Course: CSCI-135
Instructor: Tong-Yi
Assignment: LAB 3D
This program report the West basin elevation for all days in the interval
 in the reverse chronological order (from the later date to the earlier).*/
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
    double eastEl, eastSt, westEl, westSt;
    string dates[400];
    double elevations[400];
    int size = 0;
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){

        fin.ignore(INT_MAX, '\n');
        if(date >= start_date && date <= end_date){
            dates[size] = date;
            elevations[size] = westEl;
            size++;
        }
    }
    fin.close();
    for(int i = size - 1; i >= 0; i--){
        cout << dates[i] << " " << elevations[i] << endl;
    }
}