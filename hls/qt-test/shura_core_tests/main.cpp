#include "register_file.h"
#include <iostream>

void shura_core(int *rom, int *ram);

static int rom_data[3] = {
    0x00100000,
    0x00100001,
    0x00100002,
};

// for ALU
// data 0xffff = 65545
// 8 bits -> instructions 0xff000000 = 4278190080
// 4 bits / 4 bits -> registers 0xf00000 = 15728640, 0xf0000 = 983040
// 16-bit data

static int ram_data[3] = {0};

int main()
{

    //testing for _wd instrucion

    uint32_t dataToReg   = 0x01234567;
    uint32_t dataToRegP1 = 0x01234567;
    uint32_t dataToRegP2 = 0x89ABCDEF;

    Svd dataSvd;
    Svd dataSvdP1;
    Svd dataSvdP2;

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
            dataSvd.registerNumber = i;
            commonRegsObj.wd(dataSvd, dataToReg);

            std::cout << "w0 = " << std::hex << commonRegsObj.w0 <<  "\n"
                      << "w1 = " << std::hex << commonRegsObj.w1 <<  "\n"
                      << "w2 = " << std::hex << commonRegsObj.w2 <<  "\n"
                      << "w3 = " << std::hex << commonRegsObj.w3 <<  "\n"
                      << "w4 = " << std::hex << commonRegsObj.w4 <<  "\n"
                      << "w5 = " << std::hex << commonRegsObj.w5 <<  "\n"
                      << "w6 = " << std::hex << commonRegsObj.w6 <<  "\n"
                      << "w7 = " << std::hex << commonRegsObj.w7 <<  "\n";
            std::cout << "------------------------------" <<  "\n";

            //data 64bit to register
            dataSvdP2.extension = 0;
            dataSvdP2.registerNumber = i;
            commonRegsObj.wd(dataSvdP2, dataToRegP2);

            std::cout << "w0 = " << std::hex << commonRegsObj.w0 <<  "\n"
                      << "w1 = " << std::hex << commonRegsObj.w1 <<  "\n"
                      << "w2 = " << std::hex << commonRegsObj.w2 <<  "\n"
                      << "w3 = " << std::hex << commonRegsObj.w3 <<  "\n"
                      << "w4 = " << std::hex << commonRegsObj.w4 <<  "\n"
                      << "w5 = " << std::hex << commonRegsObj.w5 <<  "\n"
                      << "w6 = " << std::hex << commonRegsObj.w6 <<  "\n"
                      << "w7 = " << std::hex << commonRegsObj.w7 <<  "\n";
            std::cout << "------------------------------" <<  "\n";

            dataSvdP1.extension = 1;
            dataSvdP1.registerNumber = i;
            commonRegsObj.wd(dataSvdP1, dataToRegP1);

            std::cout << "w0 = " << std::hex << commonRegsObj.w0 <<  "\n"
                      << "w1 = " << std::hex << commonRegsObj.w1 <<  "\n"
                      << "w2 = " << std::hex << commonRegsObj.w2 <<  "\n"
                      << "w3 = " << std::hex << commonRegsObj.w3 <<  "\n"
                      << "w4 = " << std::hex << commonRegsObj.w4 <<  "\n"
                      << "w5 = " << std::hex << commonRegsObj.w5 <<  "\n"
                      << "w6 = " << std::hex << commonRegsObj.w6 <<  "\n"
                      << "w7 = " << std::hex << commonRegsObj.w7 <<  "\n";
            std::cout << "------------------------------" <<  "\n";
            std::cout << "------------------------------" <<  "\n";
        }
    }


    return 0;
}
