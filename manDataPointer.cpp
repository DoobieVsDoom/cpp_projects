//Manipulating Data using Pointers
#include <iostream>

#define STD std::cout <<
#define END << std::endl

typedef unsigned short int USHORT;

int main(void){
	//Variables 
	USHORT myAge;		//Variable
	USHORT * pMyAge;	//Pointer

	myAge = 5;

	STD "myAge: " << myAge END;
	pMyAge = &myAge; 	//Assign address of myAge to pMyAge
	STD "*pMyAge: " << *pMyAge << "\n" END;

	STD "Setting *pMyAge = 15..." END;
	*pMyAge = 15;		//Sets myAge to 15

	STD "pMyAge: " << *pMyAge END;
	STD "myAge: " << myAge << "\n" END;

	STD "Setting myAge = 25..." END;
	myAge = 25;

	STD "myAge: " << myAge END;
	STD "*pMyAge: " << *pMyAge END;

	return (0);
}