#include <iostream>
#include <string.h>
#include "employees.hpp"

#define STD std::cout <<
#define END << std::endl

//Function Prototypes
void RecordsF(Employees Doom, Employees Seth);
void RecordsS(Employees Doom, Employees Seth);
void YearsLater(Employees Doom, Employees Seth);

int main(){
	//New Employees
	Employees Seth(28, 4, 8225.65);
	Employees Doom(23, 0, 1232.50);

	RecordsF(Doom, Seth);
	YearsLater(Doom, Seth);
	
	return (0);
}

//FUNCTIONS
void RecordsF(Employees Doom, Employees Seth){
	STD "*** Employee Records [2012] ***\n";
	STD "Seth: " END;
	STD "Age: " << Seth.GetAge() END;
	STD "Year of Sevice: " << Seth.GetYOS() END;
	STD "Salary: " << Seth.GetSalary() END;

	STD "Doom: " END;
	STD "Age: " << Doom.GetAge() END;
	STD "Year of Sevice: " << Doom.GetYOS() END;
	STD "Salary: " << Doom.GetSalary() END;
}

void RecordsS(Employees Doom, Employees Seth){
	STD "*** Employee Records [2016] ***\n";
	STD "Seth: " END;
	STD "Age: " << Seth.GetAge() END;
	STD "Year of Sevice: " << Seth.GetYOS() END;
	STD "Salary: " << Seth.GetSalary() END;

	STD "Doom: " END;
	STD "Age: " << Doom.GetAge() END;
	STD "Year of Sevice: " << Doom.GetYOS() END;
	STD "Salary: " << Doom.GetSalary() END;
}

void YearsLater(Employees Doom, Employees Seth){
	Seth.SetAge(33);
	Doom.SetAge(28);

	Seth.SetYOS(7);
	Doom.SetYOS(3);

	Seth.SetSalary(18232.80);
	Doom.SetSalary(5700.25);
	STD "..>> >> >>..." END;
	RecordsS(Doom, Seth);
}