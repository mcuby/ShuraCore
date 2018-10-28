//Overview of Arbitrary Precision Integer Data Types

class ALU {
public:
    //Arithmetic operators

    //Addition
	template <class T>
    T _add (T a, T b) {
		return a + b;
	}

	//Subtraction
	template <class T>
    T _sub (T a, T b) {
		return a - b;
	}

	//Multiplication
	template <class T>
    T _mul (T a, T b) {
		return a * b;
	}

	//Division
	template <class T>
    T _div (T a, T b) {
		return a / b;
	}

	//Modulo
	template <class T>
    T _mod (T a, T b) {
		return a % b;
	}

    //Bitwise operators

    //Bitwise XOR
    template <class T>
    T _xor (T a, T b) {
        return a ^ b;
    }

    //Bitwise AND
    template <class T>
    T _and (T a, T b) {
        return a & b;
    }

    //Bitwise OR
    template <class T>
    T _or (T a, T b) {
        return a | b;
    }

    //Bitwise NOT
    template <class T>
    T _not (T a) {
        return ~a;
    }

    //Bitwise left shift
    template <class T>
    T _lshift (T a, T b) {
        return a << b;
    }

    //Bitwise right shift
    template <class T>
    T _rshift (T a, T b) {
        return a >> b;
    }

	//Comparison operators/relational operators



};

