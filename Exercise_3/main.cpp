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
#include <vector>

constexpr int LCM(int a, int b){
	unsigned long multiply = std::min(a,b);
	if(a == 0 || b == 0)
		return 0;
	while(true){
		if(multiply % a == 0 && multiply % b == 0)
			return multiply;
		multiply++;
	}
}

template<typename T, typename U, typename...V>
constexpr int LCM(T a, U b, V... c){
	return LCM(a, LCM(b, c...));
}


int main(void){

	static_assert(LCM(1,2) == std::lcm(1,2));
	static_assert(LCM(5,53) == std::lcm(5,53));
	static_assert(LCM(5,53,2) == 530);

	return 0;
}

