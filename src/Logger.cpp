#include "Logger.h"

#include <iostream>

namespace PlusPlus
{
    Logger::Logger() = default;
    Logger::~Logger() = default;

    void Logger::sendHello()
    {
        for(unsigned int i = 0; i < 11; ++i) {
            std::cout << static_cast<char>(this->message[i]);
        }
    }  
}
