#include <iostream>

#define STD std::cout <<
#define END << std::endl

int main(void){
	for (int y = 0; y < 10; y++){
		STD "0";
		for (int x = 0; x < 9; x++)
			STD "0";
		STD "\n";
	}
	return (0);
}