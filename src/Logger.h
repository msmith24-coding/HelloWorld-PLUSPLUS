#ifndef LOGGER_H_
#define LOGGER_H_

namespace PlusPlus
{
    class Logger
    {
        private:
            int chars[53] = {
                97,  // 0 (LOWER)
                98,  // 1
                99,  // 2
                100, // 3
                101, // 4
                102, // 5
                103, // 6
                104, // 7
                105, // 8
                106, // 9
                107, // 10
                108, // 11
                109, // 12
                110, // 13
                111, // 14
                112, // 15
                113, // 16
                114, // 17
                115, // 18
                116, // 19
                117, // 20
                118, // 21
                119, // 22
                120, // 23
                121, // 24
                122, // 25
                65,  // 26 (UPPER)
                66,  // 27
                67,  // 28
                68,  // 29
                69,  // 30
                70,  // 31
                71,  // 32
                72,  // 33
                73,  // 34
                74,  // 35
                75,  // 36
                76,  // 37
                77,  // 38
                78,  // 39
                79,  // 40
                80,  // 41
                81,  // 42
                82,  // 43
                83,  // 44
                84,  // 45
                85,  // 46
                86,  // 47
                87,  // 48
                88,  // 49
                89,  // 50
                90,  // 51
                32,  // 52 (SPACE)
            };
        public:
            Logger();
            ~Logger();
        public:
            void sendMessage(int * message, unsigned int size);
    };
}

#endif