/*
 * main.cpp
 *
 *  Created on: 18 lip 2024
 *      Author: Tomek
 *      Napisz program, który obliczy i wyświetli największy wspólny dzielnik dwóch dodatnich
 *		liczb całkowitych.
 */

#include <iostream>

constexpr unsigned int GCD(unsigned int a, unsigned int b){
	unsigned int gcd = 1;
	unsigned int div = 2;


	do {
		div = 2;
		while(a % div != 0 || b % div != 0){
			if(div == a || div == b)
				return gcd;
			div++;
		}

		gcd *= div;
		a /= div;
		b /= div;

	}while(div < a && div < b);

	return gcd;
}


int main(void){

	GCD(33,11);
	static_assert(GCD(42,28) == 14);
	static_assert(GCD(42,2) == 2);
	static_assert(GCD(33,11) == 11);
	static_assert(GCD(20,65) == 5);
	static_assert(GCD(28,15) == 1);
	static_assert(GCD(3,2) == 1);

	return 0;
}
