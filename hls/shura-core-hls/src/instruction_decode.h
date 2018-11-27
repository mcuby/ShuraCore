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

/**
 * @brief The DECODE class
 */

#include <stdint.h>


struct ExucateAlu {
    uint8_t reg0: 3;
    uint8_t reg1: 3;
    uint8_t extencion: 2;
};

class Decode
{

public:
    /**
     * @brief decode_data
     * @param data
     */
    void decodeInputData(uint64_t data);

    /**
     * @brief decodeInputDataForAlu
     * @param dataForAlu
     */
    void decodeInputDataForAlu(uint64_t dataForAlu);

    // For ALU [0 ... 63]

    // Addition
    /**
     * @brief ADD
     */
    const uint16_t ADD = 0;
    /**
     * @brief SUB
     */
    const uint16_t SUB = 1;
    /**
     * @brief MUL
     */
    const uint16_t MUL = 2;
    /**
     * @brief DIV
     */
    const uint16_t DIV = 3;
    /**
     * @brief MOD
     */
    const uint16_t MOD = 4;

    // Bitwise operators
    /**
     * @brief XOR
     */
    const uint16_t XOR = 5;
    /**
     * @brief AND
     */
    const uint16_t AND = 6;
    /**
     * @brief OR
     */
    const uint16_t OR  = 7;
    /**
     * @brief NOT
     */
    const uint16_t NOT = 8;
    /**
     * @brief LSHIFT
     */
    const uint16_t LSHIFT = 9;
    /**
     * @brief RSHIFT
     */
    const uint16_t RSHIFT = 10;

    // Comparison operators/relational operators
    /**
     * @brief EQUAL
     */
    const uint16_t EQUAL = 11;
    /**
     * @brief NEQUAL
     */
    const uint16_t NEQUAL = 12;
    /**
     * @brief GREATER
     */
    const uint16_t GREATER = 13;
    /**
     * @brief LESS
     */
    const uint16_t LESS = 14;
    /**
     * @brief GEQUAL
     */
    const uint16_t GEQUAL = 15;
    /**
     * @brief LEQUAL
     */
    const uint16_t LEQUAL = 16;
};
