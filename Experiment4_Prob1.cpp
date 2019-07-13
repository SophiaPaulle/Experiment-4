#include <iostream>
#include <conio.h>
#include<iomanip>

using namespace std;

//Write a C++ program using functions that will display the calculator menu. 

int main ()
{
	int choice;
	double a, b;
	int aRem, bRem;
	double sum, diff, prod, quotient;
	int rem;
	char response;

do {
	//displays choices
	cout << "Choose one:" << endl; 
	cout << "1. Add\n" << "2. Subtract\n" << "3. Multiply\n" << "4. Divide\n" << "5. Modulus\n";
	cout << "*****************************************" << endl;
	cout << "Input your choice: ";
	cin >> choice;
	cout << "Input two integer: ";
	cin >> a >> b;
	
				
	switch(choice)
	{
		//addition
		case 1:
			sum = a + b;
			cout << "Output: " << sum << endl;
			cout << "*****************************************" << endl;
			break;
			
		//subtraction
		case 2:
			diff = a - b;
			cout << "Output: " << diff << endl;
			cout << "*****************************************" << endl;
			break;
		
		//for multiplication	
		case 3:
			prod = a * b;
			cout << "Output: " << prod << endl;
			cout << "*****************************************" << endl;
			break;
		
		//for division
		case 4:
			quotient = a/b;
			cout << "Output: " << quotient << endl;
			cout << "*****************************************" << endl;
			break;	
		
		//for remainder
		case 5:
			rem = aRem%bRem;
			cout << "Output: " << rem << endl;
			cout << "*****************************************" << endl;
			break;
		
		default:
			cout << "Error. Try Again.";
			cout << "*****************************************" << endl;
			break;
	}

	cout << "Do another computation? (y/n): ";
	cin >> response;
	cout << "*****************************************" << endl;
	}
	while(response == 'y' || response == 'Y'); // loop to continue
	cout << "Thank you!";
	
	getch();
	return 0;
}
	

