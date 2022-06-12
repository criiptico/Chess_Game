#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H
#include "address.h"
#include <list>

using namespace std;

template <typename T>
class chess_containers: public address{
    public:
// Containers
        void container_Gen();
        void getBoard_Id();
// Print
        //void board_Gen();
        void print_Board();
    private:
        list<address> black{};
        list<address> white{};
};

void container_Gen(){
    // create and store initial nodes into black & white.

}
void print_Board(){
    cout << "testing";
}

#endif