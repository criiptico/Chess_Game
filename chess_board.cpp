#include <iostream>
#include "chess_board.h"

void container_Gen(address container){
    // create and store initial nodes into black & white.

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
