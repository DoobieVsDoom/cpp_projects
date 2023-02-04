//Returning Multiple Values from a function
//using References: Reference
#include <iostream>

#define STD std::cout <<
#define END << std::endl
#define IPS std::cin >>

enum ERR_CODE {SUCCESS, ERROR};

ERR_CODE Factor(int, int&, int&);

int main(void){
	int number, squared, cubed;
	ERR_CODE result;

	STD "Enter a number (0 - 20): ";
	IPS number;
	result = Factor(number, squared, cubed);

	if (result == SUCCESS){
		STD "Number: " << number END;
		STD "Squared: " << squared END;
		STD "Cubed: " << cubed END;
	} else{
		STD "Error Encountered!!" END;
	}
	return (0);
}

//function definition
ERR_CODE Factor(int n, int &nSquared, int &nCubed){
	if (n > 20)
		return ERROR;
	else{
		nSquared = n*n;
		nCubed = n*n*n;
		return SUCCESS;
	}
}