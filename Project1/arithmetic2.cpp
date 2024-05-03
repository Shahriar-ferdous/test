//Author: Shahriar Ferdous
//Course: CSCI-135
//Instructor: Tong-Yi
//Assignment: Project 1A
//Write a C++ main function to accomplish the following tasks and name the source code arithmetic2.cpp.
//Enter the number of questions to answer. Ensure that the input is a positive integer. Continue
//prompting users with “The number of questions cannot be zero or negative. Re-enter: ” and accept
//input from users until a positive integer is provided
//Utilize the code from Task A to generate questions involving addition (+), subtraction (-), multiplication (*), division (/), and remainder (%), 
//with operands restricted to single-digit integers.
//Calculate and print the correctness percentage. 
//If the percentage is 90 or higher, print ’A’; if it’s 80 or higher, print ’B’; if it’s 70 or higher, print ’C’;
//if it’s 60 or higher, print ’D’; otherwise, print ’F’
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(nullptr));
    int numQuestions;
    do{
        cout << "Enter the total number of questions to ask: " << endl;
        cin >> numQuestions;
        if(numQuestions <= 0){
            cout << "The number of questions cannot be zero or negative. Re-enter: " << endl;
        }
    }while(numQuestions <= 0);
    char operators [] = {'+', '-', '*', '/', '%'};
    int correct_answer = 0;
    for(int i = 0; i < numQuestions; i++){
        char opr = operators[rand() % 5];
        int num1 = rand() % 10;
        int num2;
        if(opr == '/' || opr == '%'){
            num2 = (rand() % 9)+ 1;
        }
        else{
            num2 = rand() % 10;
        }
        int result;
        if(opr == '+'){
            result= num1 + num2;
        }
        else if(opr == '-'){
            result = num1 - num2;
        }
        else if(opr == '*'){
            result = num1 * num2;
        }
        else if(opr == '/'){
            result = num1 / num2;
        }
        else if(opr == '%'){
            result = num1 % num2;
        }
        else{
            result = 0;
        }
        cout << "What is " << num1 << " " << opr << " " << num2 << "? ";
        int user_response;
        cin >> user_response;
        if(user_response == result){
            cout << "true" << endl;
            correct_answer++;
        }
        else{
            cout << "false" << endl;
        }
    }
    double percentage_correct = (static_cast<double>(correct_answer)/ numQuestions) * 100;
    cout << "percentage correct: " << percentage_correct << "%" << endl;
    if(percentage_correct >= 90){
        cout << "letter grade: A " << endl;
    }
    else if(percentage_correct >= 80){
        cout << "letter grade: B " << endl;
    }
    else if(percentage_correct >= 70){
        cout << "letter grade: C " << endl;
    }
    else if(percentage_correct >= 60){
        cout << "letter grade: D" << endl;
    }
    else{
        cout << "letter grade: F " << endl;
    }
    return 0;
}