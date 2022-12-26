#include <iostream>

#define STD std::cout <<
#define END << std::endl

class Point{
	//Holds X,Y Coordinates
	public:
		//Constructor/Destructor
		Point();
		~Point(){}
		//Accessors
		void SetX(int x) {itsX = x;}
		void SetY(int y) {itsY = y;}
		int GetX() const {return itsX;}
		int GetY() const {return itsY;}
	private:
		//Variables
		int itsX;
		int itsY;
}; //END OF POINT CLASS

class Rectangle{
	public:
		//Constructor/Destructor
		Rectangle(int top, int left, int bottom, int right);
		~Rectangle(){}
		//ACCESSORS
		int GetTop() const {return itsTop;}
		int GetLeft() const {return itsLeft;}
		int GetBottom() const {return itsBottom;}
		int GetRight() const {return itsRight;}

		Point GetUpperLeft() const {return itsUpperLeft;}
		Point GetLowerLeft() const {return itsLowerLeft;}
		Point GetUpperRight() const {return itsUpperRight;}
		Point GetLowerRight() const {return itsLowerRight;}
		//SETTERS
		void SetTop(int top) {itsTop = top;}
		void SetLeft(int left) {itsLeft = left;}
		void SetBottom(int bottom) {itsBottom = bottom;}
		void SetRight(int right) {itsRight = right;}

		void SetUpperLeft(Point Location) {itsUpperLeft = Location;}
		void SetLowerLeft(Point Location) {itsLowerLeft = Location;}
		void SetUpperRight(Point Location) {itsUpperRight = Location;}
		void SetLowerRight(Point Location) {itsLowerRight = Location;}

		int GetArea() const;
		int GetPerimeter() const;
	private:
		Point itsUpperLeft;
		Point itsLowerLeft;
		Point itsUpperRight;
		Point itsLowerRight;
		int itsTop;
		int itsLeft;
		int itsBottom;
		int itsRight;
}; 

//FUNCTIONS
Rectangle::Rectangle(int top, int left, int bottom, int right){
	itsTop = top;
	itsLeft = left;
	itsBottom = bottom;
	itsRight = right;

	itsUpperLeft.SetX(left);
	itsUpperLeft.SetY(top);

	itsUpperRight.SetX(right);
	itsUpperRight.SetY(top);

	itsLowerLeft.SetX(left);
	itsLowerLeft.SetY(bottom);

	itsLowerRight.SetX(right);
	itsLowerRight.SetY(bottom);
}

int Rectangle::GetArea() const {
	int Width = itsRight - itsLeft;
	int Height = itsTop - itsBottom;
	return (Width * Height);
}

int Rectangle::GetPerimeter() const {
	int Length = (itsRight - itsLeft) * 2;
	int Breath = (itsTop - itsBottom) * 2;
	return (Length + Breath);
}

Point::Point(){}

//END OF RECTANGLE HPP