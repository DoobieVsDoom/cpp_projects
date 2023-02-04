//Pointers as Data Members
//Accessed with -> Operator
#include <iostream>

#define STD std::cout <<
#define END << std::endl

//Classes
class SimpleCar{
	public:
		SimpleCar();
		~SimpleCar();
		int GetTopSpeed() const {return *itsTopSpeed;}
		void SetTopSpeed(int speed) {*itsTopSpeed = speed;}
		int GetHorsePower() const {return *itsHorsePower;}
		void SetHorsePower(int horses) {*itsHorsePower = horses;} 
	private:
		int * itsTopSpeed;
		int * itsHorsePower;
};

SimpleCar::SimpleCar(){
	itsTopSpeed = new int(356);
	itsHorsePower = new int(620);
}

SimpleCar::~SimpleCar(){
	delete itsTopSpeed;
	delete itsHorsePower;
}

//Main Function
int main(void){
	SimpleCar * Porsche = new SimpleCar;
	STD "The Porsche 992 has " << Porsche->GetHorsePower();
	STD " Horse Power." END;
	STD "The 992 also has a Top Speed of " << Porsche->GetTopSpeed() << "km/h" END;
	delete Porsche;
	return (0);
}