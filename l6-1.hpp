#include <iostream>

#define STD std::cout <<
#define END << std::endl

//CLASSES
class Cat{
	//Public Members
	public:
		Cat(unsigned int initAge); //constructor
		~Cat(); //destructor

		unsigned int GetAge() const;
		unsigned int GetWeight() const;
		void SetAge(unsigned int Age);
		void SetWeight(unsigned int Weight);
		void Meow() const;
	//Private Members
	private:
		unsigned int itsAge;
		unsigned int itsWeight;
};

//ACCESSORS
unsigned int Cat::GetAge() const{
	return (itsAge);
}

unsigned int Cat::GetWeight() const{
	return (itsWeight);
}

void Cat::SetAge(unsigned int Age){
	if (Age > 12)
		STD "ERR: Invalid Age Input." END;
	itsAge = Age;
}

void Cat::SetWeight(unsigned int Weight){
	if (Weight > 22)
		STD "ERR: Invalid Weight Input" END;
	itsWeight = Weight;
}

//FUNCTIONS
void Cat::Meow() const{
	STD "Meow, Meow :)" END;
}