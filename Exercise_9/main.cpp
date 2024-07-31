/*
 * main.cpp
 *
 *  Created on: 24 lip 2024
 *      Author: Tomek
 */


#include <iostream>

bool isPrime(unsigned int n){
	if(n == 0 || n == 1)
		return false;
	for(unsigned int i = 2; i < n; i++){
		if(n % i == 0)
			return false;
	}

	return true;
}

int main(void){
	unsigned int userNumber;

	std::cout << "Enter positive number: ";
	std::cin >> userNumber;

	if(isPrime(userNumber)){
		std::cout << userNumber << " is a prime number\n";
		return 0;
	}

	for(unsigned int divisor = 2; userNumber != 1;){
		if(isPrime(divisor) && (userNumber % divisor == 0)){
			std::cout << divisor << " ";
			userNumber /= divisor;
		}
		else {
			divisor++;
		}
	}

	return 0;
}

