//Creating Objects on the Heap, Using NEW + DELETE
#include <iostream>

#define STD std::cout <<
#define END << std::endl

class SimpleDog{
	public:
		SimpleDog();
		~SimpleDog();
	private:
		int itsAge;
};

SimpleDog::SimpleDog(){
	STD "Constructor Call" END;
	itsAge = 5;
}

SimpleDog::~SimpleDog(){
	STD "Destructor Call" END;	
}

int main(void){
	STD "SimpleDog South..." END;
	SimpleDog South;
	STD "SimpleDog *pRexius = new SimpleDog..." END;
	SimpleDog * pRexius = new SimpleDog;
	STD "Delete pRexius..." END;
	delete pRexius;
	STD "Exiting, watch South Go!!!" END;
	return (0);
}