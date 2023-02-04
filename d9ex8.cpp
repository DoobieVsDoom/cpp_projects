//Bug Buster 
#include <iostream>

#define STD std::cout <<
#define END << std::endl

//class definition
class CAT{
	public:
		CAT(int age){ itsAge = age; }
		~CAT(){}
		int GetAge() const {return itsAge;}
	private:
		int itsAge;
};

//function prototypes
CAT *MakeCat(int age);

//main function
int main(void){
	int age = 5;
	CAT *Boots = MakeCat(age);

	STD "Boots' Age is " << Boots->GetAge() END;
	delete Boots;
	return (0);
}

CAT *MakeCat(int age){
	return (new CAT(age));
}