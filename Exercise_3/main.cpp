/*
 * main.cpp
 *
 *  Created on: 19 lip 2024
 *      Author: Tomek
 *
 *      LEAST COMMON MULTIPLY
 */

#include <numeric>
#include <algorithm>

constexpr unsigned int LCM(int a, int b){
	unsigned long multiply = std::min(a,b);
	while(true){
		if(multiply % a == 0 && multiply % b == 0)
			return multiply;
		multiply++;
	}
}

int main(void){
	static_assert(LCM(1,2) == std::lcm(1,2));
	static_assert(LCM(5,53) == std::lcm(5,53));

	return 0;
}

