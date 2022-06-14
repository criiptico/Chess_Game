#include <iostream>
#include "address.h"

//   address::address(char horizontal, int vertical){
//       rank = horizontal;
//       file = vertical;
//   }

// template <typename T>
address::address(address::rank rank, address::file file)
{
  horizontal = rank;
  vertical = file;
}