//Small progrm: declare int and pointer to int
//Assign address of int to pointer
//Use pointer ot set value of int
#include <iostream>

#define STD std::cout <<
#define END << std::endl

int main(void){
	int valOne;
	int * pValOne = &valOne;

	valOne = 0;
	STD "Initial:\t\t valOne: " << valOne;
	STD "\tpValOne: " << *pValOne END;

	*pValOne = 50;
	STD "\nNext:\t\t\t valOne: " << valOne;
	STD "\tpValOne: " << *pValOne END;

	return (0);
}