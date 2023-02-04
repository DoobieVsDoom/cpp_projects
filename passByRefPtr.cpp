//Passing by Reference using Pointers
#include <iostream>

#define STD std::cout <<
#define END << std::endl

//function prototypes
void swap(int *x, int *y);

//main function
int main(void){
	int x = 21, y = 26;

	STD "Main. Before swap, x: " << x << " y: " << y END;
	swap(&x, &y);
	STD "Main. After swap, x: " << x << " y: " << y END;

	return (0);
}

//function definition
void swap(int *px, int *py){
	int temp;
	STD "Swap. Before swap, *px: " << *px << " *py: " << *py END;

	temp = *px;
	*px = *py;
	*py = temp;

	STD "Swap. After swap, *px: " << *px << " *py: " << *py END;	
}