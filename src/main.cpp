#include "Logger.h"

int main()
{
    PlusPlus::Logger logger = PlusPlus::Logger();
    int message[11] = { 33, 4, 11, 11, 14, 52, 48, 14, 17, 11, 3 };

    logger.sendMessage(message, 11);
    return 0;
}