#ifndef CHESS_PIECES_H
#define CHESS_PIECES_H
#include "address.h"

class chess_pieces: public address{
public:
    void user1Move();
    void user2Move();
    bool validMove();

private:
     

};
#endif