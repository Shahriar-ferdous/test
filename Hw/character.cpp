/*
Author: Shahriar Ferdous
Course: CSCI-135
Instructor: Tong-Yi
Assignment: Homework E3.1
This program reads a word and prints each character of the word on a separate line*/
#include <iostream>
#include <string>
int main(){
    std::string word;
    std::cout << "Enter a word;" << std::endl;
    std::cin >> word;
    for(int i = 0; i < word.length(); i++){
        std::cout << word[i] << std::endl;
    }
    return 0;
}