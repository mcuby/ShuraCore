#include "register_file.h"
#include "instruction_decode.h"

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

    testForDecodeForWd();

    return 0;
}
