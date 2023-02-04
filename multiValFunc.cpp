//Returning Multiple Values from a Function
//using references: Pointers
#include <iostream>

#define STD std::cout <<
#define END << std::endl
#define IPS std::cin >>

//function prototype
short Factor(int n, int* nSquared, int* nCubed);

int main(void){
	int number, squared, cubed;
	short error;
	STD "Enter a number (0 - 20): ";
	IPS number;

	error = Factor(number, &squared, &cubed);

	if(!error){
		STD "Number: " << number END;
		STD "Square: " << squared END;
		STD "Cubed: " << cubed END;
	} else
		STD "Error Encountered!!" END;
	return (0);
}

//function declaration
short Factor(int n, int *nSquared, int *nCubed){
	short Value = 0;
	if (n > 20)
		Value = 1;
	else{
		*nSquared = n*n;
		*nCubed = n*n*n;
		Value = 0;
	}
	return Value;
}