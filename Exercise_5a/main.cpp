/*
 * main.cpp
 *
 *  Created on: 22 lip 2024
 *      Author: Tomek
 */

#include <iostream>
#include <vector>

bool isPrime(unsigned int n) {
	if (n == 0)
		return false;
	for (unsigned int i = 2; i < n; i++) {
		if (n % i == 0)
			return false;
	}

	return true;
}

int main(void) {

	unsigned int upperLimit = 0, seriesCount = 0;

	std::cout << "Enter series count: ";
	std::cin >> seriesCount;
	std::cout << "Enter upper limit: ";
	std::cin >> upperLimit;

	for (unsigned int i = 1; i < upperLimit; i++) {
		if (i > upperLimit)
			break;
		std::vector<unsigned int> numbers;
		for (unsigned int j = 0, count = 0; j < seriesCount; j++) {
			if (isPrime(i + (j * 6))) {
				count++;
				numbers.push_back(i + (j * 6));
				if (count == seriesCount) {
					for(auto n:numbers)
						std::cout << n << " ";
					std::cout << "\n";
				}
			}

		}

	}

	return 0;
}

