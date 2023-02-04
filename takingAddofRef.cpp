//Taking Address of Reference 
#include <iostream>

#define STD std::cout <<
#define END << std::endl

int main(void){
	int valOne;
	int &rValOne = valOne;

	valOne = 12;
	STD "valOne: " << valOne END;
	STD "rValOne: " << rValOne END;

	STD "&valOne: " << &valOne END;
	STD "&rValOne: " << &rValOne END;

	return (0);
}