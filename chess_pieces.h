#ifndef CHESS_PIECES_H
#define CHESS_PIECES_H
#include "address.h"
//#include "address.cpp"

class chess_pieces: public address{
public:
    void user1Move();
    void user2Move();
    bool validMove();
    //address(T{a}, list<int>{0});

private:
     

};
#endif