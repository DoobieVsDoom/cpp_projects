//Passing by Reference using References
#include <iostream>

#define STD std::cout <<
#define END << std::endl

//function prototypes
void swap(int &x, int &y);

//main function
int main(void){
	int x = 7, y = 13;

	STD "Main. Before swap, x: " << x << " y: " << y END;
	swap(x, y);
	STD "Main. After swap, x: " << x << " y: " << y END;

	return (0);
}

//function definition
void swap(int &rx, int &ry){
	int temp;

	STD "Swap. Before swap, rx: " << rx << " ry: " << ry END;

	temp = rx;
	rx = ry;
	ry = temp;

	STD "Swap. After swap, rx: " << rx << " ry: " << ry END;
}