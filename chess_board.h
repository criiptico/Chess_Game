#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H
#include "address.h"
#include <list>

using namespace std;


class chess_board: public address{
    public:
        address *w = &white[0];
        address *b = &black[0];
// Containers
    // Creates start-up containersw
        void container_gen(address container);
        // A single gen alternating between creating white and black
            // spaces and addresses.
            // container_gen() will have a:
                //BLACK SPACES -> void container_Bgen();
                //WHITE SPACES -> void container_Wgen();
            
        ostream& getBoard_Id(ostream& output, address id);
        // Line 22 could create the initial containers and update them with 
        // every move

    // Updates containers
        bool container_Update(rank, file, piece);
            // Need a way to store previous moves for container_Update:
            // - .txt file
            // - Array
            // - Vector
        // chess_board id;
// Print
        void print_Board();
       
    private:
        // list<address> black[32]{};
        // list<address> white[32]{};
        address black[32]{};
        address white[32]{};
        //  // What... is this again? Why is this here? Should have doc'd it...
        //address board_Id;
        
};

// Create cpp file? Sure.?


#endif