#ifndef LOGGER_H_
#define LOGGER_H_

namespace PlusPlus
{
    class Logger
    {
        private:
            int message[11] = { 72, 101, 108, 108, 111, 32, 87, 111, 114, 108, 100 };
        public:
            Logger();
            ~Logger();
        public:
            void sendHello();
    };
}

#endif