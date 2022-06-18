#include <iostream>
#include "address.h"


address::address(address::rank rank, address::file file, address::piece piece)
{
  horizontal = rank;
  vertical = file;
  stored_piece = piece;
}
address::rank address::getRank(){return horizontal;}
address::file address::getFile(){return vertical;}
address::piece address::getPiece(){return stored_piece;}
