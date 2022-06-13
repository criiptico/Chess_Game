#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>
//template <typename T>
class address{
public:
    //template<typename T> address(T&, T&) -> address<T>;
    // address(T&, T&);
    // enum rank{a{1}, b{2} c{3}, d{4}, e{5}, f{6}, g{7}, h{8}};
    // enum file{one{1}, two{2}, three{3}, four{4}, five{5}, six{6}, seven{7}, eight{8}};
//

//The bottom might be easier to work with. But I like the idea of enumeration.
    list<char> rank {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    list<int> file{1, 2, 3, 4, 5, 6, 7, 8};
    address(char, int);


private:
    char rank {'a'};
    int file{1};
   // template<typename T> address(T& horizontal, T& vertical) -> address<typename T>;
};

  address(char horizontal{}, int vertical){
      rank = horizontal;
      file = vertical;
  }


// template <typename T>
// address(T& horizontal, T& vertical ){ 
//   rank = horizontal; 
//   file = vertical;
//   }


#endif