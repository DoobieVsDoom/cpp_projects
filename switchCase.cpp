//Switch Case demonstration Using Number Selection
#include <iostream>

//preprocessors
#define STD std::cout <<
#define END << std::endl
#define IPS std::cin >>

typedef unsigned short int USI;

int main(){
	//variables
	USI number;

	STD "Welcome! Let's play a game :)" END;
	STD "Choose a number betweeen 1 and 5: " END;
	IPS number;
	switch(number){
		case 0: STD "Too Small, Try again...";
				break;
		case 5: STD "Nice Pick! Confess your Love to a Crush!" END;
		//FALL THROUGH
		case 4: STD "Excellent! Confidently tell Your Crush a Joke!" END;
		//FALL THROUGH
		case 3: STD "Amazing! Stage a fall for Sympathy from a Crush." END;
		//FALL THROUGH
		case 2: STD "Masterful! Show Your Crush your Grade 2 Photo!" END;
		//FALL THROUGH
		case 1: STD "Incredible! Now, ask Your Crush out for Lunch!" END;
				break;
		default: STD "***Number Invalid. Please Try Again***" END;
				break;
	}
	return (0);
}