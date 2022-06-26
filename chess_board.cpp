#include <iostream>
#include "chess_board.h"

void container_Gen(address container){
    // create and store initial nodes into black & white.
        //
        // 
        // create address -> store id & piece in address
        // -> store address in black or white list
        bool bw = true;
        int i{0};

        do{
            if(bw == true){
                list<address> black{i};
                bw = false;
            }
            if(bw == false){
                address::white{i} = container{0,0,0}; 
                bw == true;
            }
            i++;
        }
        while(i<64);
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
