// C How to Program 9e, Ex.4.31/4.32, Diamond-Printing Program
#define _CRT_SECURE_NO_WARNINGS // ignores printf/scanf warnings in Visual Studio
#include <stdio.h> // includes standard input/output header (for prinf/scanf functions)
#include <iostream> // for system("pause"); /waiting for the user to press any key to continue
using namespace std;

// function main begins program execution
int main(void) {

	// defining and initialising the diamond size;
	int diamondSize = 0;

	// reading the diamond size from the user and placing a newline
	printf("%s", "Please enter the Diamond size: \a");
	scanf("%d", &diamondSize);
	puts("");

	// printing the diamond, row by row
	for (int row = 0; row < diamondSize; row++) {

		// defining and initialising the number of asterisks necessary to be printed on the current row to 0;
		int numberOfAsterisks = 0;

		// calculating the number of asterisks necessary to be printed on the current row
		if (row <= diamondSize / 2) {
			numberOfAsterisks = 2 * row + 1;
		}
		else {
			numberOfAsterisks = (diamondSize - row) * 2 - 1;
		}

		// printing the required number of asterisks on the current row
		for (int column = 0; column < diamondSize; column++) {
			if (column < (diamondSize - numberOfAsterisks) / 2 || column >= diamondSize - (diamondSize - numberOfAsterisks) / 2) {
				printf("%s", " ");
			}
			else {
				printf("%s", "*");
			}
		}

		// jumping to the next row
		puts("");
	}

	// printing a newline, waiting for pressing any key to continue
	printf("\n\a");
	system("pause");
}