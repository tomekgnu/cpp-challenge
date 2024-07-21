/*
 * main.cpp
 *
 *  Created on: 21 lip 2024
 *      Author: Tomek
 *      Display prime number different by 6 up to number given by user
 *      E.g.: 1 7 13 19 23 29
 */

#include <iostream>

bool isPrime(unsigned int n){
	if(n == 0)
		return false;
	for(unsigned int i = 2; i < n; i++){
		if(n % i == 0)
			return false;
	}

	return true;
}

int main(void){

	unsigned int userNumber = 0;

	std::cout << "Enter positive number: ";
	std::cin >> userNumber;

	for(unsigned int i = 1; i < userNumber; i++){
		if((i + 6) < userNumber && isPrime(i) && isPrime(i + 6))
			std::cout << i << " " << i + 6 << "\n";
	}

	return 0;
}



