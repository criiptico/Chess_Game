#ifndef CHESS_LOGIC_H
#define CHESS_LOGIC_H
#include "address.h"
//#include "address.cpp"

class chess_pieces: public address{
public:
    //chess_pieces(pieceColor pColor=null);
    void user1Move();
    void user2Move();
    bool validMove();
    //address(T{a}, list<int>{0});

private:
     

};
#endif