//reference to class objects
#include <iostream>

#define STD std::cout <<
#define END << std::endl

class SimpleGoose{
	public:
		SimpleGoose(int age, int weight);
		~SimpleGoose();
		int GetAge() const {return itsAge;}
		int GetWeight() const {return itsWeight;}
		void SetAge(int age) {itsAge = age;}
		void SetWeight(int weight) {itsWeight = weight;}
	private:
		int itsAge;
		int itsWeight;
};

SimpleGoose::SimpleGoose(int age, int weight){
	itsAge = age;
	itsWeight = weight;
}

SimpleGoose::~SimpleGoose(){}

int main(void){
	SimpleGoose Duda(2, 10);
	SimpleGoose &rDuda = Duda;

	STD "Duda is " << Duda.GetAge() << " yrs old now :)" END;
	STD "Duda also weighs " << Duda.GetWeight() << " kg" END;
	rDuda.SetAge(3);
	rDuda.SetWeight(14);
	STD "Hopefully at " << rDuda.GetAge() << " yrs old..." END;
	STD "...Duda will weigh " << rDuda.GetWeight() << " kg :)" END;

	return (0);
}