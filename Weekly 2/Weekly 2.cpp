//1. Write a program that writes numbers from 1 to 100
//1. Use a while - loop
//2. Use a for - loop
//
//2. Write a program that writes numbers from 100 down to 1 to screen.
//Use a for - loop
//
//3. Make a program that writes 5 to 50 in steps of 5. Use a while loop. (should print 5 10 15 20 25, etc.)
//4. Make a program that writes 5 to 50 in steps of 5. Use a for loop. (should print 5 10 15 20 25, etc.)
//5. Make a program that writes 5 to 50 in steps of 5. Use Do ..while.(should print 5 10 15 20 25, etc.)
//6. Make a program that asks the user what grade they want in Programming 1.
//If the answer is A, write "Outstanding".
//If the answer is B, write "Very good".
//If the answer is C, write "Good".
//If the answer is D, write "Some flaws".
//If the answer is E, write "Not very good...".
//If the answer is F, write "Fail".
//If the answer is something else, write "That is not a grade!". (Use switch - case)
//7. Update task 7 to accept both capital and lower case letters.Both 'A' and ‘a’, etc.are valid answers(use char as the variable type).

#include <iostream>

int i = 1;
int j = 5;
int k = 0;

int main()
{
	do {
		std::cout << " " << i;
		i++;
	}
	while (i <= 100 && i > 0);
	std::cout << std::endl;
	std::cout << std::endl;
	for (int i = 1; i <= 100 && i > 0; i++) {
			std::cout <<" "<< i;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	for (int i = 100; i <= 100 && i > 0; i--) {
		std::cout << " " << i;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	while (k < 50) {
		k = k + 5;
		std::cout << " " << k;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	for (int j = 5; j <= 50; j=j+5) {
		std::cout << " " << j;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	do {
		std::cout << " " << j;
		j = j + 5;
	} while (j <= 50);
	std::cout << std::endl;
	std::cout << std::endl;
bool flag = true;
char option;
	do {
		std::cout << "\tWhat grade do you want in Programming 1? (eg: A-F)" << std::endl;
		std::cout << "\tQ. Exit" << std::endl;
		std::cout << std::endl;

		std::cin >> option;

		switch (option) {
		case 'A': case 'a':
			std::cout << "\tOutstanding" << std::endl;
			std::cout << std::endl;
			break;
		case 'B': case 'b':
			std::cout << "\tVery good" << std::endl;
			std::cout << std::endl;
			break;
		case 'C': case 'c':
			std::cout << "\tGood" << std::endl;
			std::cout << std::endl;
			break;
		case 'D': case 'd':
			std::cout << "\tSome flaws" << std::endl;
			std::cout << std::endl;
			break;
		case 'E': case 'e':
			std::cout << "\tNot very good..." << std::endl;
			std::cout << std::endl;
			break;
		case 'F': case 'f':
			std::cout << "\tFail" << std::endl;
			std::cout << std::endl;
			break;
		case 'Q': case 'q':
			flag = false;
			std::cout << "\tGoodbye!" << std::endl;
			std::cout << std::endl;
			break;
		default:
			std::cout << "\tInvalid input" << std::endl;
			std::cout << std::endl;
			break;
		}
		
	} while (flag == true);
}