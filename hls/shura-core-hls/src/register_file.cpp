#include "register_file.h"
#include <iostream>

class REG globalREG;

void test_wd()
{
    //testing for _wd instrucion

    uint32_t dataToReg   = 0x01234567;
    uint32_t dataToRegP1 = 0x01234567;
    uint32_t dataToRegP2 = 0x89ABCDEF;

    _svd dataSvd;
    _svd dataSvdP1;
    _svd dataSvdP2;

    for (uint j = 0; j < 2; j++) {

        if (j == 1) {
            dataToReg   = 0xAAAAAAAA;
            dataToRegP1 = 0xBBBBBBBB;
            dataToRegP2 = 0xCCCCCCCC;
        }

        for (uint8_t i = 0 ; i < 8; i++) {

            std::cout << "test case number = " << std::hex << static_cast<int>(j) <<  "\n";
            std::cout << "check register w" << std::hex << static_cast<int>(i) <<  "\n";
            std::cout << "------------------------------" <<  "\n";

            //data 32bit to register
            dataSvd.extension = 0;
            dataSvd.register_number = i;
            globalREG._wd(dataSvd, dataToReg);

            std::cout << "w0 = " << std::hex << globalREG.w0 <<  "\n"
                      << "w1 = " << std::hex << globalREG.w1 <<  "\n"
                      << "w2 = " << std::hex << globalREG.w2 <<  "\n"
                      << "w3 = " << std::hex << globalREG.w3 <<  "\n"
                      << "w4 = " << std::hex << globalREG.w4 <<  "\n"
                      << "w5 = " << std::hex << globalREG.w5 <<  "\n"
                      << "w6 = " << std::hex << globalREG.w6 <<  "\n"
                      << "w7 = " << std::hex << globalREG.w7 <<  "\n";
            std::cout << "------------------------------" <<  "\n";

            //data 64bit to register
            dataSvdP2.extension = 0;
            dataSvdP2.register_number = i;
            globalREG._wd(dataSvdP2, dataToRegP2);

            std::cout << "w0 = " << std::hex << globalREG.w0 <<  "\n"
                      << "w1 = " << std::hex << globalREG.w1 <<  "\n"
                      << "w2 = " << std::hex << globalREG.w2 <<  "\n"
                      << "w3 = " << std::hex << globalREG.w3 <<  "\n"
                      << "w4 = " << std::hex << globalREG.w4 <<  "\n"
                      << "w5 = " << std::hex << globalREG.w5 <<  "\n"
                      << "w6 = " << std::hex << globalREG.w6 <<  "\n"
                      << "w7 = " << std::hex << globalREG.w7 <<  "\n";
            std::cout << "------------------------------" <<  "\n";

            dataSvdP1.extension = 1;
            dataSvdP1.register_number = i;
            globalREG._wd(dataSvdP1, dataToRegP1);

            std::cout << "w0 = " << std::hex << globalREG.w0 <<  "\n"
                      << "w1 = " << std::hex << globalREG.w1 <<  "\n"
                      << "w2 = " << std::hex << globalREG.w2 <<  "\n"
                      << "w3 = " << std::hex << globalREG.w3 <<  "\n"
                      << "w4 = " << std::hex << globalREG.w4 <<  "\n"
                      << "w5 = " << std::hex << globalREG.w5 <<  "\n"
                      << "w6 = " << std::hex << globalREG.w6 <<  "\n"
                      << "w7 = " << std::hex << globalREG.w7 <<  "\n";
            std::cout << "------------------------------" <<  "\n";
            std::cout << "------------------------------" <<  "\n";
        }
    }
}
