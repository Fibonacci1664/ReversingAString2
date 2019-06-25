/*
 * Main.cpp
 *
 *  Created on: 24 Jun 2019
 *      Author: Dave
 */

#include<iostream>

using namespace std;

int main()
{
	char myStringArr [] = "This is a string";

	cout << myStringArr << endl;			// Prints out the whole array.

	cout << myStringArr[0] << endl;			// Prints out the first index position, 'T'.

	cout << myStringArr[3] << endl;			// Prints out the third index position 's'.

	char *pMyStringArr = myStringArr;		// Set up pointer, pointing to the first index in the array.

	cout << pMyStringArr << endl;			// Because this is a char it prints the whole array, normally with pointers this would print the address of the first element.

	cout << (void *)pMyStringArr << endl;	// This prints the mem address of the first element of the array.

	cout << &myStringArr << endl;			// This also prints the mem address of the first element of the array.

	cout << &pMyStringArr << endl;			// This prints the mem address of where the pointer is stored that in turn points to the mem address of the first element of the array.




	cout << "##############################" << endl;

	int arrLength = sizeof(myStringArr) - 1;	// Because char arrays get null terminators added on to the end of the array we must take the one away to get the length.

	char *startArr = myStringArr;
	char *endArr = &myStringArr[arrLength - 1];	// We must once again take one away to account for zero indexing in the array.

	while(startArr < endArr)					// The algorithm to reverse a string.
	{
		char save = *startArr;
		*startArr = *endArr;
		*endArr = save;

		startArr++;
		endArr--;

		cout << myStringArr << endl;
	}

	return 0;
}

