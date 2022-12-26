#include <iostream>
#include "l6-1.hpp"

#define STD std::cout <<
#define END << std::endl

//CLASS CONSTRUCTORS
Cat::Cat(unsigned int initAge){
	itsAge = initAge;
}
Cat::~Cat(){}

int main(){
	Cat Southside(2);
	STD "When Southside came, he was " << Southside.GetAge();
	STD " Years Old. Still Young..." END;

	Southside.SetAge(5);
	Southside.SetWeight(10);
	
	STD "Now, Southside is a Cat who is ";
	STD Southside.GetAge() << " Years Old :)" END;
	STD "It turns out, he weighs ";
	STD Southside.GetWeight() << " in Kilograms haha..." END;
	STD "Say HI Southside...";
	Southside.Meow();
	return (0);
}