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


Decode commonDecodeObj;

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
