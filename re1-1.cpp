#include <iostream>

#define STD std::cout <<
#define END << std::endl
#define IPS std::cin >>

enum CHOICE {
	DrawRect = 1,
	GetArea,
	GetPerim,
	ChangeDimensions,
	Quit
};

//Rectangle class declaration

class Rectangle{
	public:
		//constructors + deconstructors
		Rectangle(int width, int height);
		~Rectangle();

		//accessor "getters" + "setters"
		int GetHeight() const {return itsHeight;}
		int GetWidth() const {return itsWidth;}
		int GetArea() const {return (itsHeight * itsWidth);}
		int GetPerim() const {return (2*itsHeight + 2*itsWidth);}
		void SetSize(int newWidth, int newHeight);
	private:
		int itsWidth;
		int itsHeight;
};

//Class methods implementations
void Rectangle::SetSize(int newWidth, int newHeight){
	itsWidth = newWidth;
	itsHeight = newHeight;
}

Rectangle::Rectangle(int width, int height){
	itsWidth = width;
	itsHeight = height;
}

Rectangle::~Rectangle(){}

//Function Prototypes
int DoMenu();
void DoDrawRect(Rectangle);
void DoGetArea(Rectangle);
void DoGetPerim(Rectangle);

//Main Function
int main(void){
	//Initialise Rectangle to 40, 17
	Rectangle theRect(4, 2);

	int choice = DoMenu();
	int fQuit = false;
	if (fQuit != true){
		if (choice < DrawRect || choice > Quit){
			STD "\nInvalide Choice, Try Again." END;
			STD "\n" END;
			//continue;
		}

		switch (choice){
			case 1:
				DoDrawRect(theRect);
				break;
			case 2:
				DoGetArea(theRect);
				break;
			case 3:
				DoGetPerim(theRect);
				break;
			case 4:
				int newLength, newWidth;
				STD "\nNew Width: ";
				IPS newWidth;
				STD "New Height: ";
				IPS newLength;
				theRect.SetSize(newWidth, newLength);
				DoDrawRect(theRect);
				break;
			case 5:
				fQuit = true;
				STD "\nExiting Program...\n" END;
				break;
			default:
				STD "Error in choice!" END;
				fQuit = true;
				break;
		}//END OF SWITCH
	}//END OF WHILE
	return (0);
}//END OF MAIN

//Function Declarations
int DoMenu(){
	int choice;

	STD "\n\n";
	STD "*** Menu ***" END;
	STD "(1) Draw Rectangle" END;
	STD "(2) Show Area" END;
	STD "(3) Show Perimeter" END;
	STD "(4) Resize Rectangle" END;
	STD "(5) Quit" END;

	IPS choice;
	return (choice);
}

void DoDrawRect(Rectangle theRect){
	int height = theRect.GetHeight();
	int width = theRect.GetWidth();

	for(int y = 0; y < height; y++){
		for(int x = 0; x < width; x++)
			STD "0";
		STD "\n";
	}
}

void DoGetArea(Rectangle theRect){
	STD "Area: " << theRect.GetArea() END;
}

void DoGetPerim(Rectangle theRect){
	STD "Perimeter: " << theRect.GetPerim() END;
}
//END OF re1-1.cpp