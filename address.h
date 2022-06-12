#ifndef ADDRESS_H
#define ADDRESS_H

template <typename T>
class address{
public:
    address(T{a}, list<int>{0});
    enum rank{a, b, c, d, e, f, g, h};
    list<int> file{1, 2, 3, 4, 5, 6, 7, 8};
    

    

private:
    rank horizontal{a};
    int vertical{1};
    
};

//address(T horizontal, list<int> vertical{0} ):{ rank = horizontal; file = vertical;}


#endif