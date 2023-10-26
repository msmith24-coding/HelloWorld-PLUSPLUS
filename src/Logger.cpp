#include "Logger.h"

#include <iostream>

namespace PlusPlus
{
    Logger::Logger() = default;
    Logger::~Logger() = default;

    void Logger::sendMessage(int * message, unsigned int size)
    {
        for(unsigned int i = 0; i < size; ++i) {
            std::cout << static_cast<char>(chars[message[i]]);
        }
    }  
}
