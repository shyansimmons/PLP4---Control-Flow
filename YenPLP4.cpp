//Name: Shyan Yen
//Due: February 27th, 2019

#include <iostream>

using namespace std;

// Switch case statement
// code format credit to Mike Dane on youtube
string getName(int nameNum){
	string name;

	switch(nameNum){
	case 0:
		name = "Sun";
		break;
	case 1:
		name = "Mon";
		break;
	case 2:
		name = "Tues";
		break;
	case 3:
		name = "Thurs";
		break;
	case 4:
		name = "Fri";
		break;
	case 5:
		name = "Sat";
		break;
	default:
		name = "Invalid day num";
	}
	return name;
}

int main(){
    // One condition using if/else statement
    cout << "This will print out the result of " << endl;
    cout << "a one condition if/else statement:"  << endl;

    bool isCool = false; // boolean isCool set to true

	if (isCool){ // equivalent to if isCool is true
        cout << "\nYou are cool!" << endl;
    }
    else {
        cout<< "\nYou are not cool!" << endl;
    }

    // Multi-condition using if/else statement
    cout << "\nThis will print out the result of " << endl;
    cout << "a multi-condition if/else statement: " << endl;

	bool isCute = true; // boolean isCute set to true
	if (isCool && isCute) { // equivalent to if isCool is true and isCute is true
        cout << "\nYou are cool and cute!" << endl;
        }
    else if (isCool && !isCute){ // if isCool is true AND isCute is false (! is the negation)
        cout << "\nYou are cool but not cute.";
        }
    else {
        cout << "\nYou are not cool or cute." << endl;
        }

    // Using while loop
    cout << "\nThis will print out the numbers 0-5 using a while loop:" << endl;

	int index = 0;

	while(index < 6){
	cout << index <<endl;
	index++;

	}

	// Using a do while loop
	cout << "\nThis will print out numbers 20-30 using a do while loop format:" << endl;

	int x = 20; // variable initiation for do while loop

	do {
        cout << x << endl;
        x = x + 1;
    }

    while(x < 31);

    // Using a for loop
    cout << "\nThis will print out the numbers 0-10 using a for loop: " << endl;

	for (int i=0; i < 11; i++){
        cout << i << endl;
	}
    /*
	// Using a foreach loop (range-based 'for' loop only used with -std=c++11 or -std=gnu++11
	cout << "\nThis will print out the numbers 100-500 using a foreach loop:" << endl;
    int numArray[] = { 100, 200, 300, 400, 500 };

    // Printing elements of an array using
    // foreach loop
    for (int k : numArray){
        cout << k << endl;
    }
    */

    // Print case(1) result from switch case
    cout << "\nThis will print out the result of case statement 1: " << endl;
    cout << getName(1)<< endl;
    cout << "\n";

    // Continue example
    cout << "This will print out numbers 2-9 excluding 1 & 10 using continue:" << endl;
    for (int i = 1; i <= 10; ++i){
        if ( i == 1 || i == 10)
        {
            continue;
        }
    cout << i << "\n";
    }

    // Break example
   int j = 1;
   cout << "\nThis will print out numbers 1-8 using a break: " << endl;

   do {
      cout << j << endl;
      j = j + 1;

      if( j > 8) {
         break; // terminate the loop
      }

   } while( j < 10 );

return 0;
}
