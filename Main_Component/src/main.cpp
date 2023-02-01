#include "File_Io.h"
#include <CAN_messages/CAN_min_signals.h>
#include <iostream>

int main(int argc, char* argv[]) {

    File_IO myFile("test");
    std::cout << "it is kind of opened" << std::endl;

    //receive some data from an interface( UART, CAN, etc.)
   

    //myFile.writeLines();
    return 0;
}