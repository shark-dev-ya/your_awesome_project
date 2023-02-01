#include "File_Io.h"
#include <iostream>

int main(int argc, char* argv[]) {

    File_IO myFile;
    std::cout << myFile.open("test") << std::endl;

    //receive some data from an interface( UART, CAN, etc.)
    std::vector<std::string> data = /* a function call*/ func_A();


    myFile.writeLines();
    return 0;
}