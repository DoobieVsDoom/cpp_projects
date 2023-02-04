//Demonstrates address-of Operator
//and addresses of Local Variables
#include <iostream>

#define STD std::cout <<
#define END << std::endl

int main(void){
	//Variables
	unsigned short shortVar = 5;
	unsigned long longVar = 65535;
	long sVar = -65535;

	STD "shortVar:\t" << shortVar;
	STD "\tAddress of shortVar:\t";
	STD &shortVar END;

	STD "longVar:\t" << longVar;
	STD "\tAddress of longVar:\t";
	STD &longVar END;

	STD "sVar:\t\t" << sVar;
	STD "\tAddress of sVar:\t";
	STD &sVar END;

	return (0);
}