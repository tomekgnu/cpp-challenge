/*
 * main.cpp
 *
 *  Created on: 23 lip 2024
 *      Author: Tomek
 */

#include <iostream>

int main(void){

	for(int i = 100; i < 1000; i++){
		int digit1 = i / 100;
		int digit2 = (i - (100 * digit1)) / 10;
		int digit3 = (i - (100 * digit1) - (10 * digit2));

		if(digit1 * digit1 * digit1 + digit2 * digit2 * digit2 + digit3 * digit3 * digit3 == i)
			std::cout << digit1 << " " << digit2 << " " << digit3 << std::endl;
	}

	return 0;
}


