//Main Function Source code
#include <iostream>

#define STD std::cout <<
#define END << std::endl
#define IPS std::cin >>

//Function Prototypes

int main(){
	int rows; 
	int columns;
	char theChar;

	STD "How Many Rows?: ";
	IPS rows;
	STD "How Many Columns?: ";
	IPS columns;
	STD "What Character?: ";
	IPS theChar;

	int midR = rows/2;
	int midC = columns/2;
	if((rows/2)%1 == 0){
		midR = midR + 1;
	}
	//while()
	for(int i = 0; i < rows; i++){
		for (int j = 0; j < columns; j++){
			if(i == 0 && j == (midC-1)){
				STD "$";
				//i++;}
				j++;} //top
			if(i == (rows-1) && j == (midC-1)){
				STD "$";
				//i++;}
				j++;} //bottom
			if(i == (midR-1) && j == 0){
				STD "$";}
				//i++;}
				//j++;} //left
			if(i == midR-1 && j == columns-2){
				STD "$";
				//i++;
				j++; //right
			}else{
			STD theChar;}
		}
		STD "" END;
	}
	/*for(int p = 0; p < (rows/2); p++){
		for(int q = 0; q < (columns/2); q++){
			STD "$" END;
		} STD "" END;*/
	
	/*d1mx = columns/2;
	d1my = 1; //first row*/ 
	return (0);
}