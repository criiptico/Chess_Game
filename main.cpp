#include <iostream>
#include <exception>
#include "address.h"
#include "chess_pieces.h"
#include "chess_board.h"

using namespace std;

// #Note, using ctrl + b and using g++.exe actually enables you to run the program  
// Use dir to check if a file is in the directory
// use ./ to run a .exe file



int main(){

    char begin;

    
    cout << "Press y to start the chess game: ";
    cin >> begin;
    
    while(begin != 'y'){
        try{
            throw exception{};
        }
        catch(exception&){
            cout << "Press y to start the chess game: ";
            cin >> begin;
            throw;
        }
    }
    if (begin != 'y')
        return 0;

    container_Gen();
    print_Board();
// Make a random coin program to decide which player goes first?
// 
    return 0;
}