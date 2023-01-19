#include "File_Io.h"
#include <iostream>

int main(int argc, char* argv[]) {

    File_IO myFile;
    std::cout << myFile.createFileString() << std::endl;

    return 0;
}