//Reassigning a Reference
#include <iostream>

#define STD std::cout <<
#define END << std::endl

int main(void){
	int valOne;
	int &rValOne = valOne;

	valOne = 32;
	STD "valOne: " << valOne END;
	STD "rValOne: " << rValOne END;
	STD "&valOne: " << &valOne END;
	STD "&rValOne: " << &rValOne END;

	int valTwo = 51;
	rValOne = valTwo; //not what you think
	STD "\nvalOne: " << valOne END;
	STD "valTwo: " << valTwo END;
	STD "rValOne: " << rValOne END;
	STD "&valOne: " << &valOne END;
	STD "&valTwo: " << &valTwo END;
	STD "&rValOne: " << &rValOne END;
	return (0);
}