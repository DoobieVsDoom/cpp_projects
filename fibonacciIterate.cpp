//Solving nth Fibonacci using Iteration
#include <iostream>

//preprocessors
#define STD std::cout <<
#define END << std::endl
#define IPS std::cin >>

typedef unsigned int UNS;

//function prototype
UNS fib(UNS n); //n describes the position

int main(){
	//Variables
	UNS answer;
	UNS position;

	STD "Welcome! Find the Nth Fibonacci Number :)" END;
	STD "Which Position?:";
	IPS position;

	answer = fib(position);
	STD answer << " is the ";
	STD position << "th Fibonacci Number :)" END;
	STD "***Complete***" END;

	return (0);
}

//function
UNS fib(UNS n){
	//variables
	UNS minusTwo = 1;
	UNS minusOne = 1;
	UNS answer = 2;

	if(n < 3)
		return 1;

	for(n = 3; n != 0; n--){
		minusTwo = minusOne;
		minusOne = answer;
		answer = minusOne + minusTwo;
	}
	return answer;
}