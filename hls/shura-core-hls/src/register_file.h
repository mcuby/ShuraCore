#include <stdint.h>
#include <alu.h>

class REG
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

//struct of valid data
    struct _svd {
        uint8_t extension: 1;
        uint8_t register_number : 4;
        uint8_t reserve : 3;
    };

    //bool, char, unsigned char, signed char, __int8            1 byte
    //__int16, short, unsigned short, wchar_t, __wchar_t        2 bytes
    //float, __int32, int, unsigned int, long, unsigned long	4 bytes
    //double, __int64, long double, long long                   8 bytes

    //write data to registers
    void _wd(_svd value, const uint32_t &data)
    {
        t0 = 0;
        switch (value.register_number) {
        case 0:
            if (value.extension) {
                t0 = globalALU._lshift<uint64_t>(data, 32);
                w0 = globalALU._or<uint64_t>(w0, t0);
            } else {
                w0 = data;
            }
            break;
        case 1:
            if (value.extension) {
                t0 = globalALU._lshift<uint64_t>(data, 32);
                w1 = globalALU._or<uint64_t>(w1, t0);
            } else {
                w1 = data;
            }
            break;
        case 2:
            if (value.extension) {
                t0 = globalALU._lshift<uint64_t>(data, 32);
                w2 = globalALU._or<uint64_t>(w2, t0);
            } else {
                w2 = data;
            }
            break;
        case 3:
            if (value.extension) {
                t0 = globalALU._lshift<uint64_t>(data, 32);
                w3 = globalALU._or<uint64_t>(w3, t0);
            } else {
                w3 = data;
            }
            break;
        case 4:
            if (value.extension) {
                t0 = globalALU._lshift<uint64_t>(data, 32);
                w4 = globalALU._or<uint64_t>(w4, t0);
            } else {
                w4 = data;
            }
            break;
        case 5:
            if (value.extension) {
                t0 = globalALU._lshift<uint64_t>(data, 32);
                w5 = globalALU._or<uint64_t>(w5, t0);
            } else {
                w5 = data;
            }
            break;
        case 6:
            if (value.extension) {
                t0 = globalALU._lshift<uint64_t>(data, 32);
                w6 = globalALU._or<uint64_t>(w6, t0);
            } else {
                w6 = data;
            }
            break;
        case 7:
            if (value.extension) {
                t0 = globalALU._lshift<uint64_t>(data, 32);
                w7 = globalALU._or<uint64_t>(w7, t0);
            } else {
                w7 = data;
            }
            break;
        }
    }

    //native data reading (from RAM - 32 bits)
    void _rn(_svd value, const uint32_t *address)
    {
        t1 = 0;
        switch (value.register_number) {
        case 0:
            if (value.extension) {
                t0 = globalALU._lshift<uint64_t>(*address, 32);
                r0 = globalALU._or<uint64_t>(r0, t0);
            } else {
                r0 = *address;
            }
            break;
        case 1:
            if (value.extension) {
                t0 = globalALU._lshift<uint64_t>(*address, 32);
                r1 = globalALU._or<uint64_t>(r1, t0);
            } else {
                r1 = *address;
            }
            break;
        case 2:
            if (value.extension) {
                t0 = globalALU._lshift<uint64_t>(*address, 32);
                r2 = globalALU._or<uint64_t>(r2, t0);
            } else {
                r2 = *address;
            }
            break;
        case 3:
            if (value.extension) {
                t0 = globalALU._lshift<uint64_t>(*address, 32);
                r3 = globalALU._or<uint64_t>(r3, t0);
            } else {
                r3 = *address;
            }
            break;
        case 4:
            if (value.extension) {
                t0 = globalALU._lshift<uint64_t>(*address, 32);
                r4 = globalALU._or<uint64_t>(r4, t0);
            } else {
                r4 = *address;
            }
            break;
        case 5:
            if (value.extension) {
                t0 = globalALU._lshift<uint64_t>(*address, 32);
                r5 = globalALU._or<uint64_t>(r5, t0);
            } else {
                r5 = *address;
            }
            break;
        case 6:
            if (value.extension) {
                t0 = globalALU._lshift<uint64_t>(*address, 32);
                r6 = globalALU._or<uint64_t>(r6, t0);
            } else {
                r6 = *address;
            }
            break;
        case 7:
            if (value.extension) {
                t0 = globalALU._lshift<uint64_t>(*address, 32);
                r7 = globalALU._or<uint64_t>(r7, t0);
            } else {
                r7 = *address;
            }
            break;
        }
    }

    //native data extentio reading (from RAM - 64 bits)
    void _rne(_svd value, const uint64_t *address)
    {
        t1 = 0;
        switch (value.register_number) {
        case 0:
            r0 = *address;
            break;
        case 1:
            r1 = *address;
            break;
        case 2:
            r2 = *address;
            break;
        case 3:
            r3 = *address;
            break;
        case 4:
            r4 = *address;
            break;
        case 5:
            r5 = *address;
            break;
        case 6:
            r6 = *address;
            break;
        case 7:
            r7 = *address;
            break;
        }
    }

    //native data writing (to RAM - 32 bits)
    void _wn(_svd value, const uint32_t *address)
    {
        t2 = 0;
        switch (value.register_number) {
        case 0:
            if (value.extension) {
                t2 = globalALU._lshift<uint64_t>(*address, 32);
                r0 = globalALU._or<uint64_t>(r0, t0);
            } else {
                r0 = *address;
            }
            break;
        case 1:
            if (value.extension) {
                t0 = globalALU._lshift<uint64_t>(*address, 32);
                r1 = globalALU._or<uint64_t>(r1, t0);
            } else {
                r1 = *address;
            }
            break;
        case 2:
            if (value.extension) {
                t0 = globalALU._lshift<uint64_t>(*address, 32);
                r2 = globalALU._or<uint64_t>(r2, t0);
            } else {
                r2 = *address;
            }
            break;
        case 3:
            if (value.extension) {
                t0 = globalALU._lshift<uint64_t>(*address, 32);
                r3 = globalALU._or<uint64_t>(r3, t0);
            } else {
                r3 = *address;
            }
            break;
        case 4:
            if (value.extension) {
                t0 = globalALU._lshift<uint64_t>(*address, 32);
                r4 = globalALU._or<uint64_t>(r4, t0);
            } else {
                r4 = *address;
            }
            break;
        case 5:
            if (value.extension) {
                t0 = globalALU._lshift<uint64_t>(*address, 32);
                r5 = globalALU._or<uint64_t>(r5, t0);
            } else {
                r5 = *address;
            }
            break;
        case 6:
            if (value.extension) {
                t0 = globalALU._lshift<uint64_t>(*address, 32);
                r6 = globalALU._or<uint64_t>(r6, t0);
            } else {
                r6 = *address;
            }
            break;
        case 7:
            if (value.extension) {
                t0 = globalALU._lshift<uint64_t>(*address, 32);
                r7 = globalALU._or<uint64_t>(r7, t0);
            } else {
                r7 = *address;
            }
            break;
        }
    }

    //native data extentio writing (to RAM - 64 bits)
    void _wne(_svd value, uint64_t *address)
    {
        switch (value.register_number) {
        case 0:
            *address = r0;
            break;
        case 1:
            *address = r1;
            break;
        case 2:
            *address = r2;
            break;
        case 3:
            *address = r3;
            break;
        case 4:
            *address = r4;
            break;
        case 5:
            *address = r5;
            break;
        case 6:
            *address = r6;
            break;
        case 7:
            *address = r7;
            break;
        }
    }
};
