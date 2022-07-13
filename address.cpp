#include <iostream>
#include "address.h"


address::address(address::rank rank, address::file file, address::piece piece, pieceColor pColor=null)
{
  horizontal = rank;
  vertical = file;
  stored_piece = piece;
}
// This method isn't going to translate well for when you
// actually start outputting them on a string.
// They'll output numbers as the output.
// Add a switch statement to each get function?
// OR, if you need the id to check something, make a separate
// getstring function with the switch statements to output 
// actual strings.
address::rank address::getRank(){return horizontal;}
address::file address::getFile(){return vertical;}
address::piece address::getPiece(){return stored_piece;}
