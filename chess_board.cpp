#include <iostream>
#include "chess_board.h"

void container_Gen(address container){
    // create and store initial nodes into black & white.
        //
        // 
        // create address -> store id & piece in address
        // -> store address in black or white list

        int i{0};
        do{
            w = w + i;
            w{0,0,0}; 
            b = b + i; 
            b{0,0,0};
            i++;
        }
        while(i<32);
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
