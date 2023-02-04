//Using 'this' Pointer
#include <iostream>

#define STD std::cout <<
#define END << std::endl

class Rectangle{
	public:
		Rectangle();
		~Rectangle();
		void SetLength(int length) {this->itsLength = length;}
		int GetLength() const {return this->itsLength;}

		void SetWidth(int width) {this->itsWidth = width;}
		int GetWidth() const {return this->itsWidth;}

	private:
		int itsLength;
		int itsWidth;
};

Rectangle::Rectangle(){
	itsWidth = 8;
	itsLength = 14;
}
Rectangle::~Rectangle(){}

int main(void){
	Rectangle theRect;
	STD "theRect 201 is " << theRect.GetLength() << " meters long." END;
	STD "theRect 201 is " << theRect.GetWidth() << " meters wide." END;
	theRect.SetWidth(15);
	theRect.SetLength(31);
	STD "theRect 1313 is " << theRect.GetLength() << " meters long." END;
	STD "theRect 1313 is " << theRect.GetWidth() << " meters wide." END;
	return (0);
}
