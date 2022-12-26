#include <iostream>

#define STD std::cout <<
#define END << std::endl

int main(void){
	int c = 100;
	do {
		STD c << "...";
		c+=2;
	} while (c < 202);
	return (0);
}