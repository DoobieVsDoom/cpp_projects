//Access Data Members of Objects on Heap using -> Operator
#include <iostream>

#define STD std::cout <<
#define END << std::endl

class SimpleParrot{
	public:
		SimpleParrot() {itsAge = 1;}
		~SimpleParrot(){}
		int GetAge() const {return itsAge;}
		void SetAge(int age) {itsAge = age;}
	private:
		int itsAge; 
};

int main(void){
	SimpleParrot * Kwerky = new SimpleParrot;
	STD "Kwerky is " << Kwerky->GetAge() << "years Old :)" END;
	Kwerky->SetAge(3);
	STD "Kwerky is " << Kwerky->GetAge() << "years Old Now :)" END;
	delete Kwerky;
	return (0);
}