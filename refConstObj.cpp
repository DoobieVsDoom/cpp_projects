//Passing References to Constant Objects
#include <iostream>

#define STD std::cout <<
#define END << std::endl

//class definition
class SimpleCar{
	public:
		SimpleCar();
		SimpleCar(SimpleCar&);
		~SimpleCar();

		int GetHp() const {return itsHp;}
		void SetHp(int horses) {itsHp = horses;}
	private:
		int itsHp;
};

SimpleCar::SimpleCar(){
	STD "Simple Car Constructor..." END;
	itsHp = 605;
}

SimpleCar::SimpleCar(SimpleCar&){
	STD "Simple Car Copy Constructor..." END;
}

SimpleCar::~SimpleCar(){
	STD "Simple Car Destructor..." END;
}

const SimpleCar & functionTwo(const SimpleCar & theWhip);

int main(void){
	STD "Making a Car..." END;
	SimpleCar Mustang;
	STD "The Mustang has " << Mustang.GetHp() << "hp" END;
	int horses = 620;
	Mustang.SetHp(horses);
	STD "A new Drivetrain later and the Mustang has ";
	STD Mustang.GetHp() << "hp" END;
	STD "Calling functionTwo..." END;
	functionTwo(Mustang);
	STD "After changing gear ratios, The Mustang has ";
	STD Mustang.GetHp() << "hp" END; 
	return (0);
}

//functionTwo passes a Ref to a Const Object
const SimpleCar & functionTwo(const SimpleCar & theWhip){
	STD "Funcion Two. Returning..." END;
	STD "The Mustang now has " << theWhip.GetHp() << "hp" END;
	return (theWhip);
}