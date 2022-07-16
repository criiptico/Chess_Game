#ifndef REWORK_ROADMAP_H
#define REWORK_ROADMAP_H
#include <iostream>
#include <list>
#include <array>
using namespace std;


////////////////////

class address{
public:

    address(char R, char F); // change rank and file types into a list and set their values the characters 'a', 'b'...etc.
    void setRank(); // Used to prompt user and program to set a particular Rank
    void setFile(); // Used to prompt user and program to set a particular File
    void setBoardColor();
    
    // [SOLVED] cannot combind getRank and getFile due to character type issue, it must be converted somehow for ALL possibilities.
    // getRank and getFile are now to be used to search, store, and compare them to other ranks and files. 
    char getRank();
    char getFile();
    // This is the output for both the rank and file as a single address
    string getStringLoc();
    char getBoardColor();   
private:
    char r;
    char f;
    char boardColor;
    piece *piecePtr; // Piece that is in the address of the chess board

};
address(char R, char F){r = R; f = F;}
string getStringLoc(char R, char F){
    string s(2,R,F); // string has a constructor to convert characters into strings. (size, char1, char2...etc)
    return s;    
}

//////////////////////////

class piece: public address{
    public:
        piece(string pieceType, string pieceColor);
        void setPieceT();
        void setPieceC();
        void setBoardColor();

        char getPieceT();
        char getPieceC();
        char getBoardColor();
    
    private:
        char pieceType;
        char pieceColor;
        char boardColor;
};

////////////////////////////////////

class logic: public piece{
    public:

    private:

};

///////////////////////////////

// Storage

//consider a multilist/multimap?

list <char> rank{'a','b','c','d','e','f','g','h'};
list <char> file{'1','2','3','4','5','6','7','8'};
char ranks{'a'};
char files{'1'};

address squareW[32];
address squareB[32];


// Line 85 loop is going to be the default set up for addresses. The next thing on the list to do is placing the pieces. I could actually do that 
// in this same loop. But I'll work on things one at a time and then combine them at the end.

// While loop on line 82 is going to be the maine default function that is going to set the address of each square.
// Line 87 error? "Expected a declaration" <--- while loop
while(ranks <= 'h'){
    while(files <= '8'){
        if ((squareB % 2) == 0){
        squareB.insert(address(ranks, files))
        squareB = squareB + 1;
        }
        else{
        squareW.insert(address(ranks, files))
        squareW = squareW + 1;
        }
        // is this needed, redundant? ---> if(files == '8'){break;}
        files++;
    }
    ranks++;
}
///////////////////////

#endif