#include "File_Io.h"
#include <vector>
#include <stdexcept>

File_IO::File_IO(std::string filename) {
    m_filename = filename;
}

std::string File_IO::readLine()
{
    std::string content;

    /* open file using m_filename variable*/
    //read operation
    //close file
    
    return content;
}

std::vector<std::string> File_IO::readLines()
{
    std::vector<std::string> content;

    if ( /*some check which is failing*/ false) {
        return content;
    }
    /* open file using m_filename variable*/
    //read operation
    //close file


    return content;
}


void File_IO::writeLine( std::string data_line)
{
    /* open file using m_filename variable*/
    
    //write operation
    
    //close file
}

void File_IO::writeLines( std::vector<std::string> data)
{


    /* open file using m_filename variable*/

    for (std::string eachLine : data) {
        //write operation with eachLine
    }
    
    //close file
}

