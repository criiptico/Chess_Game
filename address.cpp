#include <iostream>
#include "address.h"

address::address(address::rank rank, address::file file)
{
  horizontal = rank;
  vertical = file;
}