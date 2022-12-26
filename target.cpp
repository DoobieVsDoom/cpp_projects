#include <iostream>

#define STD std::cout <<
#define END << std::endl
#define IPS std::cin >>

typedef unsigned short US;
typedef unsigned long UL;

int main(){
	US small;
	UL large;
	UL skip;
	UL target;
	const US MAXSmall = 65535;

	STD "Enter a Small Number: ";
	IPS small;
	STD "Enter a Large Number: ";
	IPS large;
	STD "Enter a Skip Number: ";
	IPS skip;
	STD "Enter a Target Number: ";
	IPS target;
	STD "...>>...>>...<<...<<..." END;

	while (small < large && small < MAXSmall){
		small++;
		if (small % skip == 0){
			STD "Skipping On " << small END;
			continue; /*Return to Top of Loop*/}
		if (large == target){ //Exact Target Match
			STD "Target Reached." END;
			break;}
		large -= 2;
	} //END OF WHILE LOOP

	STD "...>>...>>...<<...<<..." END;
	STD "Small: " << small END;
	STD "Large: " << large END;

	return (0);
}