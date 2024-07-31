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

	unsigned int upperLimit = 1000000;

	for(unsigned int number = 1; number < upperLimit; number++){

		auto sum1 = getDivisors(number);
		if(sum1 >= upperLimit)
			break;
		if(number == getDivisors(sum1) && sum1 != number && number < sum1)
			std::cout << number << " " << sum1 << std::endl;
	}

	return 0;
}
