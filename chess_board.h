#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H
#include "address.h"
#include <list>

using namespace std;


class chess_board: public address{
    public:
// Containers
        void container_gen();
        // A single gen alternating between creating white and black
            // spaces and addresses.
            // container_gen() will have a:
                //BLACK SPACES -> void container_Bgen();
                //WHITE SPACES -> void container_Wgen();
            
        ostream& getBoard_Id(ostream& output);
        // Line 22 could create the initial containers and update them with 
        // every move
        void container_Update(rank, file, piece);
            // Need a way to store previous moves for container_Update:
            // - .txt file
            // - Array
            // - Vector

// Print
        void print_Board();
    private:
        list<address> black{};
        list<address> white{};
         // What... is this again? Why is this here? Should have doc'd it...
        //address board_Id;
        
};

// Create cpp file?


#endif