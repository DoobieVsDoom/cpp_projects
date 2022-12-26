//Demonstrates a Forever Loop
#include <iostream>

#define STD std::cout <<
#define END << std::endl
#define EVER ;;
#define IPS std::cin >>

//prototypes
int menu();
void DoTaskOne();
void DoTaskMany(int);

int main(){
	bool exit = false;
	for (EVER){
		int choice = menu();
		switch(choice){
			case (1):
				DoTaskOne();
				break;
			case (2):
				DoTaskMany(2);
				break;
			case (3):
				DoTaskMany(3);
				break;
			case (4):
				continue; //extra effects
				break;
			case (5):
				exit = true;
				break;
			default:
				STD "Invalid Selection. Try Again." END;
				break;
		} //end of switch
		if(exit == true)
			break;
	} //end forever
	return (0);
} //end main

//functions
int menu(){
	int choice;

	STD "**** ** Menu ** ****" END;
	STD "	(1) Truth? " END;
	STD "	(2) Dare? " END;
	STD "	(3) Command? " END;
	STD "	(4) Redisplay Menu? " END;
	STD "	(5) Quit. " END;
	STD ": ";
	IPS choice;
	return (choice);
}

void DoTaskOne(){
	STD "Truth..." END;
	STD "Have you ever been to the shops in Pyjamas?" END;
}

void DoTaskMany(int which){
	if(which == 2){
		STD "Dare..." END;
		STD "I dare you to make a sentence in Sea lion sounds..." END;
	}
	else{
		STD "Command it is..." END;
		STD "*** read out loud ***" END;
		STD "I'm Using My Energy Better!" END;
	}
}