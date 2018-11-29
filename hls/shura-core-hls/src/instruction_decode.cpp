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

#include "instruction_decode.h"
#include "register_file.h"
#include <iostream>


Decode commonDecodeObj;

/**
 * @brief Decode::decodeInputDataForAlu
 * @param dataForAlu
 */
void Decode::decodeInputDataForAlu(uint64_t dataForAlu)
{
    switch (dataForAlu & 0x3F) {
    case ADD:

        break;

    case SUB:
        break;

    case MUL:
        break;

    case DIV :
        break;

    case MOD :
        break;

    case XOR :
        break;

    case AND :
        break;

    case OR  :
        break;

    case NOT :
        break;

    case LSHIFT :
        break;

    case RSHIFT :
        break;

    case EQUAL :
        break;

    case NEQUAL :
        break;

    case GREATER :
        break;

    case LESS :
        break;

    case GEQUAL:
        break;

    case LEQUAL :
        break;
    }
}

/**
 * @brief Decode::decodeInputData
 * @param data
 */
void Decode::decodeInputData(uint64_t data)
{

    if (data & 0x3F) {
        decodeInputDataForAlu(data);
    }

    if (data & 0x40) {
        Svd obj;

        //for furture
        obj.var0 = (data & 0xFF);
        obj.var1 = (data & 0xFF00) >> 8;
        obj.var2 = (data & 0xFF0000) >> 16;

        obj.extension = (data & 0x1000000) >> 24;
        obj.registerNumber = (data & 0xE000000) >> 25;
        obj.reserve = (data & 0xF0000000) >> 28;
        uint32_t dataForReg = (data & 0xffffffff00000000) >> 32;
        commonRegsObj.wd(obj, dataForReg);
    }

}

/**
 * @brief testForDecodeForWd
 */
void testForDecodeForWd()
{
    uint64_t arrayDataForTest[24] = {

        0x8888888800000040, //register 0, -> wd r0, 0, 0x88888888
        0x9999999900000040, //register 0, -> wd r0, 0, 0x99999999
        0xAAAAAAAA01000040, //register 0, register with padding up to 64 bits, -> wd r0, 1, 0xAAAAAAAA

        0x8888888802000040, //register 1, -> wd r1, 0, 0x88888888
        0x9999999902000040, //register 1, -> wd r1, 0, 0x99999999
        0xAAAAAAAA03000040, //register 1, register with padding up to 64 bits, -> wd r1, 1, 0xAAAAAAAA

        0x8888888804000040, //register 2, -> wd r2, 0, 0x88888888
        0x9999999904000040, //register 2, -> wd r2, 0, 0x99999999
        0xAAAAAAAA05000040, //register 2, register with padding up to 64 bits, -> wd r2, 1, 0xAAAAAAAA

        0x8888888806000040, //register 3, -> wd r3, 0, 0x88888888
        0x9999999906000040, //register 3, -> wd r3, 0, 0x99999999
        0xAAAAAAAA07000040, //register 3, register with padding up to 64 bits, -> wd r3, 1, 0xAAAAAAAA

        0x8888888808000040, //register 4, -> wd r4, 0, 0x88888888
        0x9999999908000040, //register 4, -> wd r4, 0, 0x99999999
        0xAAAAAAAA09000040, //register 4, register with padding up to 64 bits, -> wd r4, 1, 0xAAAAAAAA

        0x888888880A000040, //register 5, -> wd r5, 0, 0x88888888
        0x999999990A000040, //register 5, -> wd r5, 0, 0x99999999
        0xAAAAAAAA0B000040, //register 5, register with padding up to 64 bits, -> wd r5, 1, 0xAAAAAAAA

        0x888888880C000040, //register 6, -> wd r6, 0, 0x88888888
        0x999999990C000040, //register 6, -> wd r6, 0, 0x99999999
        0xAAAAAAAA0D000040, //register 6, register with padding up to 64 bits, -> wd r6, 1, 0xAAAAAAAA

        0x888888880E000040, //register 7, -> wd r7, 0, 0x88888888
        0x999999990E000040, //register 7, -> wd r7, 0, 0x99999999
        0xAAAAAAAA0F000040, //register 7, register with padding up to 64 bits, -> wd r7, 1, 0xAAAAAAAA
    };

    for (uint64_t number : arrayDataForTest) {
        commonDecodeObj.decodeInputData(number);

        std::cout << "---------------------------------" <<  "\n";

        std::cout << "w0 = " << std::hex << commonRegsObj.w0 <<  "\n"
                  << "w1 = " << std::hex << commonRegsObj.w1 <<  "\n"
                  << "w2 = " << std::hex << commonRegsObj.w2 <<  "\n"
                  << "w3 = " << std::hex << commonRegsObj.w3 <<  "\n"
                  << "w4 = " << std::hex << commonRegsObj.w4 <<  "\n"
                  << "w5 = " << std::hex << commonRegsObj.w5 <<  "\n"
                  << "w6 = " << std::hex << commonRegsObj.w6 <<  "\n"
                  << "w7 = " << std::hex << commonRegsObj.w7 <<  "\n";

        std::cout << "---------------------------------" <<  "\n";
    }
}



