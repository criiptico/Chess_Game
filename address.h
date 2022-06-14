#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>
class address{
public:
    
    
    enum rank{a, b, c, d, e, f, g, h};
    enum file{one, two, three, four, five, six, seven, eight};

    address(rank horizontal, file vertical);

private:
    rank horizontal;
    file vertical;
};

#endif