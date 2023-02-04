//Demostrating the Use of Refs
#include <iostream>

#define STD std::cout <<
#define END << std::endl

int main(void){
	int valOne;
	int &rValOne = valOne;

	valOne = 17;
	STD "valOne: " << valOne END;
	STD "rValOne: " << rValOne END;

	rValOne = 27;
	STD "valOne: " << valOne END;
	STD "rValOne: " << rValOne END;
	return (0);
}