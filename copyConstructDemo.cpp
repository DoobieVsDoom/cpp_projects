//Copy Constructor Demonstration
#include <iostream>

#define STD std::cout <<
#define END << std::endl

class SimpleCar{
	public:
		SimpleCar(); 			//constructor
		SimpleCar(SimpleCar&);	//copy constructor
		~SimpleCar();			//destructor
};

SimpleCar::SimpleCar(){
	STD "Simple Car Constructor..." END;
}

SimpleCar::SimpleCar(SimpleCar&){
	STD "Simple Car Copy Constructor..." END;
}

SimpleCar::~SimpleCar(){
	STD "Simple Car Destructor..." END;
}

//function prototypes
SimpleCar functionOne(SimpleCar thePorsche992);
SimpleCar* functionTwo(SimpleCar *thePorsche992);

//main function
int main(void){
	STD "Making a Car..." END;
	SimpleCar Porsche;
	STD "Calling FunctionOne..." END;
	functionOne(Porsche);
	STD "Calling FunctionTwo..." END;
	functionTwo(&Porsche); 
	return (0);
}

//function definition
//functionOne, passes by value
SimpleCar functionOne(SimpleCar thePorsche992){
	STD "FunctionOne. Returning..." END;
	return thePorsche992;
}

//functionTwo, passes by reference
SimpleCar* functionTwo(SimpleCar *thePorsche992){
	STD "FunctionTwo. Returning..." END;
	return thePorsche992;
}