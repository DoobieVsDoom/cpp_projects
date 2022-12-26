#include <iostream>

#define STD std::cout <<
#define END << std::endl

int main(void){
	for (int i = 99; i < 200; i++){
		i++;
		STD i << "...";
	}
	return (0);
}