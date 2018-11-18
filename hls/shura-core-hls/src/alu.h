//Overview of Arbitrary Precision Integer Data Types

class ALU {
public:
    //Arithmetic operators

    //Addition
	template <class T>
    T _add (T const &a, T const &b) {
		return a + b;
	}

	//Subtraction
	template <class T>
    T _sub (T const &a, T const &b) {
		return a - b;
	}

	//Multiplication
	template <class T>
    T _mul (T const &a, T const &b) {
		return a * b;
	}

	//Division
	template <class T>
    T _div (T const &a, T const &b) {
		return a / b;
	}

	//Modulo
	template <class T>
    T _mod (T const &a, T const &b) {
		return a % b;
	}

    //Bitwise operators

    //Bitwise XOR
    template <class T>
    T _xor (T const &a, T const &b) {
        return a ^ b;
    }

    //Bitwise AND
    template <class T>
    T _and (T const &a, T const &b) {
        return a & b;
    }

    //Bitwise OR
    template <class T>
    T _or (T const &a, T const &b) {
        return a | b;
    }

    //Bitwise NOT
    template <class T>
    T _not (T const &a) {
        return ~a;
    }

    //Bitwise left shift
    template <class T>
    T _lshift (T const &a, T const &b) {
        return a << b;
    }

    //Bitwise right shift
    template <class T>
    T _rshift (T const &a, T const &b) {
        return a >> b;
    }

	//Comparison operators/relational operators

    //Equal to
    template<class K, class S>
    bool _equal(K const &a, S const &b) {
        return a == b;
    }

    //Not equal to
    template<class K, class S>
    bool _nequal(K const &a, S const &b) {
        return a != b;
    }

    //Greater than
    template<class K, class S>
    bool _greater(K const &a, S const &b) {
        return a > b;
    }

    //Less than
    template<class K, class S>
    bool _less(K const &a, S const &b) {
        return a < b;
    }

    //Greater than or equal to
    template<class K, class S>
    bool _gequal(K const &a, S const &b) {
        return a >= b;
    }

    //Less than or equal to
    template<class K, class S>
    bool _lequal(K const &a, S const &b) {
        return a <= b;
    }

};

class ALU globalALU;


