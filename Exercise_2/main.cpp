/*
 * main.cpp
 *
 *  Created on: 18 lip 2024
 *      Author: Tomek
 *      Napisz program, który obliczy i wyświetli największy wspólny dzielnik dwóch dodatnich
 *		liczb całkowitych.
 */

#include <iostream>
#include <numeric>
#include <map>

template<typename T, typename U>
constexpr unsigned int GCD2(T a, U b){
	return std::gcd(a,b);

}
template<typename T, typename U, typename...V>
constexpr unsigned int GCD2(T a, U b, V...c){
	return GCD2(a,GCD2(b,c...));

}

constexpr unsigned int GCD(int pa, int pb){
	unsigned int a = abs(pa), b = abs(pb);
	unsigned int gcd = 1;
	unsigned int div = 0;

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
	GCD2(4,16,8,5);

	static_assert(GCD(3,0) == 3);
	static_assert(std::gcd(0,-2) == 2);
	static_assert(GCD(-42,-28) == 14);
	static_assert(GCD(42,2) == 2);
	static_assert(GCD(33,11) == 11);
	static_assert(GCD(20,65) == 5);
	static_assert(GCD(28,15) == 1);
	static_assert(GCD(3,2) == 1);

	return 0;
}
