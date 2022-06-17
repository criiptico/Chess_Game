#include <iostream>
#include "address.h"

address::address(address::rank rank, address::file file, address::piece piece)
{
  horizontal = rank;
  vertical = file;
  stored_piece = piece;
}
address::rank getRank(){return horizontal;}
address::file getFile(){return vertical;}