/*
   SSSSSSSSSSSSSSS hhhhhhh                                                                         CCCCCCCCCCCCC
 SS:::::::::::::::Sh:::::h                                                                      CCC::::::::::::C
S:::::SSSSSS::::::Sh:::::h                                                                    CC:::::::::::::::C
S:::::S     SSSSSSSh:::::h                                                                   C:::::CCCCCCCC::::C
S:::::S             h::::h hhhhh       uuuuuu    uuuuuu rrrrr   rrrrrrrrr   aaaaaaaaaaaaa   C:::::C       CCCCCC   ooooooooooo   rrrrr   rrrrrrrrr       eeeeeeeeeeee
S:::::S             h::::hh:::::hhh    u::::u    u::::u r::::rrr:::::::::r  a::::::::::::a C:::::C               oo:::::::::::oo r::::rrr:::::::::r    ee::::::::::::ee
 S::::SSSS          h::::::::::::::hh  u::::u    u::::u r:::::::::::::::::r aaaaaaaaa:::::aC:::::C              o:::::::::::::::or:::::::::::::::::r  e::::::eeeee:::::ee
  SS::::::SSSSS     h:::::::hhh::::::h u::::u    u::::u rr::::::rrrrr::::::r         a::::aC:::::C              o:::::ooooo:::::orr::::::rrrrr::::::re::::::e     e:::::e
    SSS::::::::SS   h::::::h   h::::::hu::::u    u::::u  r:::::r     r:::::r  aaaaaaa:::::aC:::::C              o::::o     o::::o r:::::r     r:::::re:::::::eeeee::::::e
       SSSSSS::::S  h:::::h     h:::::hu::::u    u::::u  r:::::r     rrrrrrraa::::::::::::aC:::::C              o::::o     o::::o r:::::r     rrrrrrre:::::::::::::::::e
            S:::::S h:::::h     h:::::hu::::u    u::::u  r:::::r           a::::aaaa::::::aC:::::C              o::::o     o::::o r:::::r            e::::::eeeeeeeeeee
            S:::::S h:::::h     h:::::hu:::::uuuu:::::u  r:::::r          a::::a    a:::::a C:::::C       CCCCCCo::::o     o::::o r:::::r            e:::::::e
SSSSSSS     S:::::S h:::::h     h:::::hu:::::::::::::::uur:::::r          a::::a    a:::::a  C:::::CCCCCCCC::::Co:::::ooooo:::::o r:::::r            e::::::::e
S::::::SSSSSS:::::S h:::::h     h:::::h u:::::::::::::::ur:::::r          a:::::aaaa::::::a   CC:::::::::::::::Co:::::::::::::::o r:::::r             e::::::::eeeeeeee
S:::::::::::::::SS  h:::::h     h:::::h  uu::::::::uu:::ur:::::r           a::::::::::aa:::a    CCC::::::::::::C oo:::::::::::oo  r:::::r              ee:::::::::::::e
 SSSSSSSSSSSSSSS    hhhhhhh     hhhhhhh    uuuuuuuu  uuuurrrrrrr            aaaaaaaaaa  aaaa       CCCCCCCCCCCCC   ooooooooooo    rrrrrrr                eeeeeeeeeeeeee
*/

#include <stdint.h>
#include "alu.h"

/**
 * @brief The SVD struct is a struct of valid data
 */
struct Svd {
    uint8_t var0: 8;
    uint8_t var1: 8;
    uint8_t var2: 8;

    uint8_t extension: 1;
    uint8_t registerNumber : 3;
    uint8_t reserve : 4;
};

/**
 * @brief The REG class
 */
class Reg
{
public:

    //basic registers for writing
    uint64_t w0 = 0;
    uint64_t w1 = 0;
    uint64_t w2 = 0;
    uint64_t w3 = 0;
    uint64_t w4 = 0;
    uint64_t w5 = 0;
    uint64_t w6 = 0;
    uint64_t w7 = 0;

    //basic registers for reading
    uint64_t r0 = 0;
    uint64_t r1 = 0;
    uint64_t r2 = 0;
    uint64_t r3 = 0;
    uint64_t r4 = 0;
    uint64_t r5 = 0;
    uint64_t r6 = 0;
    uint64_t r7 = 0;

    //stack pointer register
    uint64_t sp = 0;
    //heap pointer register
    uint64_t hp = 0;
    //program counter register
    uint64_t pc = 0;
    //return address register
    uint64_t ra = 0;
    //exception registers
    uint64_t er = 0;

    //temporary register
    uint64_t t0 = 0; //for writing data to registers
    uint64_t t1 = 0; //for reading data
    uint64_t t2 = 0; //for writing data
    uint64_t t3 = 0; //for decoding data

    //bool, char, unsigned char, signed char, __int8            1 byte
    //__int16, short, unsigned short, wchar_t, __wchar_t        2 bytes
    //float, __int32, int, unsigned int, long, unsigned long	4 bytes
    //double, __int64, long double, long long                   8 bytes

    //write data to registers
    void wd(Svd &value, const uint32_t &data)
    {
        t0 = 0;
        switch (value.registerNumber) {
        case 0:
            if (value.extension) {
                t0 = commonlAluObj._lshift<uint64_t>(data, 32);
                w0 = commonlAluObj._or<uint64_t>(w0, t0);
            } else {
                w0 = data;
            }
            break;
        case 1:
            if (value.extension) {
                t0 = commonlAluObj._lshift<uint64_t>(data, 32);
                w1 = commonlAluObj._or<uint64_t>(w1, t0);
            } else {
                w1 = data;
            }
            break;
        case 2:
            if (value.extension) {
                t0 = commonlAluObj._lshift<uint64_t>(data, 32);
                w2 = commonlAluObj._or<uint64_t>(w2, t0);
            } else {
                w2 = data;
            }
            break;
        case 3:
            if (value.extension) {
                t0 = commonlAluObj._lshift<uint64_t>(data, 32);
                w3 = commonlAluObj._or<uint64_t>(w3, t0);
            } else {
                w3 = data;
            }
            break;
        case 4:
            if (value.extension) {
                t0 = commonlAluObj._lshift<uint64_t>(data, 32);
                w4 = commonlAluObj._or<uint64_t>(w4, t0);
            } else {
                w4 = data;
            }
            break;
        case 5:
            if (value.extension) {
                t0 = commonlAluObj._lshift<uint64_t>(data, 32);
                w5 = commonlAluObj._or<uint64_t>(w5, t0);
            } else {
                w5 = data;
            }
            break;
        case 6:
            if (value.extension) {
                t0 = commonlAluObj._lshift<uint64_t>(data, 32);
                w6 = commonlAluObj._or<uint64_t>(w6, t0);
            } else {
                w6 = data;
            }
            break;
        case 7:
            if (value.extension) {
                t0 = commonlAluObj._lshift<uint64_t>(data, 32);
                w7 = commonlAluObj._or<uint64_t>(w7, t0);
            } else {
                w7 = data;
            }
            break;
        }
    }
};


void testForWd();

extern class Reg commonRegsObj;
