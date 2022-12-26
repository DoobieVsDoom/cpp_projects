#include <iostream>
#include "rectangle.hpp"

#define STD std::cout <<
#define END << std::endl

int main(){
	//initialise local Rectangle Variable
	Rectangle myRectangle(100, 20, 50, 80);

	int Area = myRectangle.GetArea();
	STD "Area: " << Area END;
	int Perimeter = myRectangle.GetPerimeter();
	STD "Perimeter: " << Perimeter END;
	STD "Upper Left X Coordinate: ";
	STD myRectangle.GetUpperLeft().GetX() END;
	STD "Lower Left Y Coordinate: ";
	STD myRectangle.GetLowerLeft().GetY() END;
	STD "Upper Right X Coordinate: ";
	STD myRectangle.GetUpperRight().GetX() END;
	STD "Lower Right Y Coordinate: ";
	STD myRectangle.GetLowerRight().GetY() END;
	STD "Complete!" END;
	 
	return (0);
}