/*
 * main.cpp
 *
 *  Created on: 20 lip 2024
 *      Author: Tomek
 *      PRIME NUMBERS
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

	unsigned int userNumber = 1;
	//static_assert(isPrime(7) == true);
	//static_assert(isPrime(4) == false);


	std::cout << "Enter positive number: ";
	std::cin >> userNumber;

	while(userNumber > 1){
		userNumber--;
		if(isPrime(userNumber) == true){
			break;
		}

	}

	std::cout << userNumber << "\n";

	return 0;
}
