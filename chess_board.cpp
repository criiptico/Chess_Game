#include <iostream>
#include "chess_board.h"

void container_Gen(){
    // create and store initial nodes into black & white.
        //
        // 
        // create address -> store id & piece in address
        // -> store address in black or white list
        chess_board containers;
        address *w = containers.w;
        address *b = containers.b;

        int i{0};
        bool black = true;
        bool white = false;
        address::rank r{};
        address::file f{};
        address::piece p{};
        
        // insert by each rank



        // Line 23 is the end goal.
        // w[0] = address::address(r,f,p);

        
        // do{
        //     w = w + i;
        //     *w = address::address(r,f,p);
                        
        //     b = b + i;
        //     *b = address::address(r,f,p);
        //     i++;
        // }
        // while(i<32);
}       
bool container_Update(address::rank rank, address::file file, address::piece piece){
    
    // return true; 
}
ostream& getBoard_Id(ostream& output, address id){
    output << id.getRank() << id.getFile();
    return output;
}
void print_Board(){
    cout << "testing";
}
