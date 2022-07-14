#ifndef REWORK_ROADMAP_H
#define REWORK_ROADMAP_H
#include <iostream>
#include <list>
#include <array>
using namespace std;
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



class logic: public piece{
    public:

    private:

};


list <char> rank[8] = {a = 'a', b = 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
list <char> file[8];

address squareW[32];
address squareB[32];
squareW = address('a', '1');

squareW.insert(id);


#endif