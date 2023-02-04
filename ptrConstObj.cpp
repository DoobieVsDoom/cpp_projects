//Passing Pointer to a Constant Object
#include <iostream>

#define STD std::cout <<
#define END << std::endl

//class definition
class SimpleCar{
	public:
		SimpleCar();
		SimpleCar(SimpleCar&);
		~SimpleCar();

		int GetSpeed() const {return itsSpeed;}
		void SetSpeed(int speed) {itsSpeed = speed;}
	private:
		int itsSpeed;
};

SimpleCar::SimpleCar(){
	STD "Simple Car Constructor..." END;
	itsSpeed = 362;
}

SimpleCar::SimpleCar(SimpleCar&){
	STD "Simple Car Copy Constructor..." END;
}

SimpleCar::~SimpleCar(){
	STD "Simple Car Destructor..." END;
}

//function prototype
const SimpleCar * const functionTwo(const SimpleCar * const Porsche);

//main function
int main(void){
	STD "Making a Porsche..." END;
	SimpleCar Porsche;
	STD "The Porsche 992 does " << Porsche.GetSpeed() << "km/h" END;
	int speed = 369;
	Porsche.SetSpeed(speed);
	STD "After an ECU programme, the Porsche does ";
	STD Porsche.GetSpeed() << "km/h" END;
	STD "Calling functionTwo..." END;
	functionTwo(&Porsche);
	speed = 377;
	Porsche.SetSpeed(speed);
	STD "The Fuel Injection upgrade means the Porsche does ";
	STD Porsche.GetSpeed() << "km/h" END;
	return (0);
}

//function definition
//functionTwo, passes const pointer
const SimpleCar * const functionTwo(const SimpleCar * const Porsche){
	STD "Function Two. Returning..." END;
	STD "The Porsche still does " << Porsche->GetSpeed() << "km/h" END;
	return (Porsche);
}