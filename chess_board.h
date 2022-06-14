#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H
#include "address.h"
#include <list>

using namespace std;

template <typename T>
class chess_containers: public address{
    public:
// Containers
            // A single gen alternating between creating white and black
            // spaces and addresses.
        void container_gen();
            // container_gen() will have a:
                //BLACK SPACES -> void container_Bgen();
                //WHITE SPACES -> void container_Wgen();
            
        void getBoard_Id();
        void container_Update();
            // Need a way to store previous moves for container_Update:
            // - .txt file
            // - Array
            // - Vector

// Print
        void print_Board();
    private:
        list<address::address> black{};
        list<address::address> white{};
        address::address board_Id;
          
        
};

// Create cpp file?


void container_Gen(){
    // create and store initial nodes into black & white.

}
void print_Board(){
    cout << "testing";
}

#endif