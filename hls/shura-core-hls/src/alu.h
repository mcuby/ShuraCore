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


//Overview of Arbitrary Precision Integer Data Types

class ALU
{
public:
    //Arithmetic operators



    //Addition
    template <class T>
    T _add(T const &a, T const &b)
    {
		return a + b;
	}

	//Subtraction
	template <class T>
    T _sub(T const &a, T const &b)
    {
		return a - b;
	}

	//Multiplication
	template <class T>
    T _mul(T const &a, T const &b)
    {
		return a * b;
	}

	//Division
	template <class T>
    T _div(T const &a, T const &b)
    {
		return a / b;
	}

	//Modulo
	template <class T>
    T _mod(T const &a, T const &b)
    {
		return a % b;
	}

    //Bitwise operators

    //Bitwise XOR
    template <class T>
    T _xor(T const &a, T const &b)
    {
        return a ^ b;
    }

    //Bitwise AND
    template <class T>
    T _and(T const &a, T const &b)
    {
        return a & b;
    }

    //Bitwise OR
    template <class T>
    T _or(T const &a, T const &b)
    {
        return a | b;
    }

    //Bitwise NOT
    template <class T>
    T _not(T const &a)
    {
        return ~a;
    }

    //Bitwise left shift
    template <class T>
    T _lshift(T const &a, T const &b)
    {
        return a << b;
    }

    //Bitwise right shift
    template <class T>
    T _rshift(T const &a, T const &b)
    {
        return a >> b;
    }

	//Comparison operators/relational operators

    //Equal to
    template<class K, class S>
    bool _equal(K const &a, S const &b)
    {
        return a == b;
    }

    //Not equal to
    template<class K, class S>
    bool _nequal(K const &a, S const &b)
    {
        return a != b;
    }

    //Greater than
    template<class K, class S>
    bool _greater(K const &a, S const &b)
    {
        return a > b;
    }

    //Less than
    template<class K, class S>
    bool _less(K const &a, S const &b)
    {
        return a < b;
    }

    //Greater than or equal to
    template<class K, class S>
    bool _gequal(K const &a, S const &b)
    {
        return a >= b;
    }

    //Less than or equal to
    template<class K, class S>
    bool _lequal(K const &a, S const &b)
    {
        return a <= b;
    }

};

extern class ALU globalALU;


