#include <iostream>

#define STD std::cout <<
#define END << std::endl

int main(void){
	int c = 100;
	while (c < 202){
		STD c << "...";
		c += 2;
	}
	return (0);
}