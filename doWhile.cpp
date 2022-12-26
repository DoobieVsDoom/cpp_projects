#include <iostream>

#define STD std::cout <<
#define END << std::endl
#define IPS std::cin >>

int main(){
	int counter;
	STD "How Many Deposits?: ";
	IPS counter;
	do {
		STD "+ZAR 124 000" END;
		counter--;
	} while (counter > 0);
	STD "Counter is: " << counter END;
	return (0);
}