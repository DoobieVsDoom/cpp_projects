#include <iostream>
#include <string.h>

#define STD std::cout <<
#define END << std::endl

//CLASSES
class Employees {
	public:
		//Constructor/Destructor
		Employees(int age, int yos, float salary);
		~Employees(){}

		//ACCESSORS
		void SetAge(int age) {itsAge = age;}
		void SetYOS(int yos) {itsYOS = yos;}
		void SetSalary(float salary) {itsSalary = salary;}
		int GetAge() const {return itsAge;}
		int GetYOS() const {return itsYOS;}
		int GetSalary() const {return itsSalary;}
	private:
		int itsAge;
		int itsYOS;
		float itsSalary;		
}; //END OF CLASS

//FUNCTIONS
Employees::Employees(int age, int yos, float salary){
	itsAge = age;
	itsYOS = yos;
	itsSalary = salary;
}