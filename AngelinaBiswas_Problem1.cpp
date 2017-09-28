//Angelina Biswas 9-22-17 1st Period
//Displaying Text
//Learnging to use a cout funtion to display text

//LIBRARIES
#include <iostream>
#include <conio.h>

//NAMESPACES
using namespace std;

//FUNCTIONS ()
void pause() {
	cout << "Press any key to continue...";
		while (!_kbhit());
	_getch();
	cout << '/n';
}

//MAIN
void main() {
	cout << "Hello World!" << endl;
	cout << "Angelina Biswas" << endl;
	cout << "Computer Science" << endl;
	cout << "1st Period" << endl;
	pause();
}