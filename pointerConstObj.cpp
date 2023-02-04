//Using Pointers with Const Methods
#include <iostream>

#define STD std::cout <<
#define END << std::endl

class Rectangle{
	public:
		Rectangle();
		~Rectangle();
		void SetLength(int length) {itsLength = length;}
		int GetLength() const {return itsLength;}
		void SetWidth(int width) {itsWidth = width;}
		int GetWidth() const {return itsWidth;}

	private:
		int itsLength;
		int itsWidth;
};

Rectangle::Rectangle(){
	itsWidth = 12;
	itsLength = 20;
}

Rectangle::~Rectangle(){}

//Main Function
int main(void){
	Rectangle* pRect = new Rectangle;
	const Rectangle * pConstRect = new Rectangle;
	Rectangle * const pConstPtr = new Rectangle;

	STD "pRect width: " << pRect->GetWidth() << " meters" END;
	STD "pConstRect width: " << pConstRect->GetWidth() << " meters" END;
	STD "pConstPtr width: " << pConstPtr->GetWidth() << " meters" END;

	pRect->SetWidth(17);
	pConstPtr->SetWidth(14);

	STD "pRect width: " << pRect->GetWidth() << " meters" END;
	STD "pConstRect width: " << pConstRect->GetWidth() << " meters" END;
	STD "pConstPtr width: " << pConstPtr->GetWidth() << " meters" END;

	delete pRect;
	delete pConstRect;
	delete pConstPtr;

	return (0);
}