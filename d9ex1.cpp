//Manipulating Integer Value using Pointer and Reference
#include <iostream>

#define STD std::cout <<
#define END << std::endl

//Main Function
int main(void){
	//variables
	int valOne = 575;
	int &rValOne = valOne;
	int *pValOne;
	pValOne = &valOne;


	STD "Standard C63 AMG comes with " << valOne << "hp (integer.)" END;
	*pValOne = 590;
	STD "After a Fuel Injection System, we find the C63 has ";
	STD valOne << "hp (pointer.)" END;
	rValOne = 602;
	STD "The Standard LSX Engine, comes with ";
	STD valOne << "hp (reference.)" END;

	return (0);
}