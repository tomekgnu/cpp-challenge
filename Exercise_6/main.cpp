/*
 * main.cpp
 *
 *  Created on: 23 lip 2024
 *      Author: Tomek
 */

#include <iostream>

unsigned int getDivisors(unsigned int number){
	unsigned long sum = 0;
	for(unsigned int i = 1; i != number && i < number; i++){
		if(number % i == 0)
			sum += i;
	}

	return sum;

}

int main(void){

	unsigned int upperLimit = 0, divisors = 0;

	std::cout << "Enter positive number: ";
	std::cin >> upperLimit;

	for(unsigned int i = 0; i <= upperLimit; i++){
		if((divisors = getDivisors(i)) > i){
			std::cout << i << ": " << divisors - i << "\n";
		}
	}
	return 0;
}
