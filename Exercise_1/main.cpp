/*
 * main.cpp
 *
 *  Created on: 18 lip 2024
 *      Author: Tomek
 *      Suma liczb naturalnych podzielnych przez 3 lub 5
 *		Napisz program, który oblicza sumę wszystkich liczb naturalnych podzielnych przez 3 lub 5
 *		aż do podanej wartości granicznej wprowadzonej przez użytkownika.
 */

#include <iostream>

constexpr unsigned long long getSum(unsigned int userNumber){
	unsigned long long sum = 0;
	for(unsigned int i = 0; i <= userNumber; i++){
		if(i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	return sum;
}

int main(void){


	static_assert(getSum(5) == 8);
	static_assert(getSum(3) == 3);

	return 0;
}

