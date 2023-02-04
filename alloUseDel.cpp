//Allocating and Deleting Pointer
#include <iostream>

#define STD std::cout <<
#define END << std::endl

int main(void){
	//variables
	int localVar = 5;
	int * pLocalVar = &localVar;
	int * pHeap = new int;
	*pHeap = 17;

	STD "localVar: " << localVar END;
	STD "*pLocalVar: " << *pLocalVar END;
	STD "*pHeap: " << *pHeap END;

	delete pHeap;
	pHeap = new int;
	*pHeap = 32;
	STD "*pHeap: " << *pHeap END;
	delete pHeap;
	return (0);
}