//Checking what is Really Stored at Pointer
#include <iostream>

#define STD std::cout <<
#define END << std::endl

typedef unsigned short int USHORT;

int main(void){
	USHORT myAge = 5;			//Variable
	USHORT yourAge = 7;			//Variable	
	USHORT * pMyAge = &myAge;	//Pointer

	STD "myAge:\t\t" << myAge END;
	STD "yourAge:\t" << yourAge << "\n" END;

	STD "&myAge:\t\t" << &myAge END;
	STD "&yourAge:\t" << &yourAge << "\n" END;

	STD "pMyAge:\t\t" << pMyAge END;
	STD "*pMyAge:\t" << *pMyAge << "\n" END;

	STD "Reassigning: pMyAge = &yourAge...\n" END;
	pMyAge = &yourAge;			//Reassigning pointer

	STD "myAge:\t\t" << myAge END;
	STD "yourAge:\t" << yourAge END;

	STD "&myAge:\t\t" << &myAge END;
	STD "&yourAge:\t" << &yourAge END;

	STD "pMyAge:\t\t" << pMyAge END;
	STD "*pMyAge:\t" << *pMyAge END;

	STD "n&pMyAge:\t" << &pMyAge END; 

	return (0);
}