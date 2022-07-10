#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>
class address{
public:
    
    enum rank{a, b, c, d, e, f, g, h};
    enum file{one, two, three, four, five, six, seven, eight};
    enum piece{Empty, Pawn, Rook, Knight, Bishop, Queen, King};
    enum pieceColor{null, black, white};

    address(rank horizontal=a, file vertical=one, piece stored_piece=Empty, pieceColor pColor=null);
    rank getRank();
    file getFile();
    piece getPiece();
    
private:
    rank horizontal;
    file vertical;
    piece stored_piece;
    
};


#endif