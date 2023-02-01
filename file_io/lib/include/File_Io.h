#ifndef FILE_IO_H
#define FILE_IO_H

#include <string>
#include <vector>

/* 1st option: static methods */
class File_IO {
    public:
        static std::string readLine(std::string filename);
        static std::vector<std::string> readLines(std::string filename);
        static void writeLine( std::string filename , std::string data_line);
        static void writeLines(std::string filename , std::vector<std::string> data);

};



















/* 2nd option: internal state (Encapsulation technique) */
class File_IO {
    public:
        explicit File_IO(std::string filename);
        std::string readLine();
        std::vector<std::string> readLines();
        void writeLine( std::string data_line);
        void writeLines(std::vector<std::string> data);
    private:
        std::string m_filename;
};

#endif //FILE_IO_H