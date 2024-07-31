/*
 * main.cpp
 *
 *  Created on: 26 lip 2024
 *      Author: Tomek
 */

#include <iostream>
#include <string>
#include <map>

std::string convert_roman(unsigned int num);

int main(void) {

	std::cout << convert_roman(200) << std::endl;


	return 0;
}

std::string convert_part(unsigned int div, unsigned int num) {
	std::map<unsigned int, const char*> symbols = { { 1, "I" }, { 5, "V" }, {
			10, "X" }, { 50, "L" }, { 100, "C" }, { 500, "D" }, { 1000, "M" } };

	std::string add_romans, sub_romans;
	unsigned int end = div * 10, mid = end / 2, start = div;
	std::string side_numeral = symbols[start];

	if (num >= mid)
		start = mid;
	else
		end = mid;


	add_romans.append(symbols[start]);
	if(start == num)
		return add_romans;
	sub_romans.insert(0, symbols[end]);
	if(end == num)
		return sub_romans;

	while (start <= end) {

		start += div;
		end -= div;
		add_romans.append(side_numeral);
		sub_romans.insert(0, side_numeral);
		if(end == num && sub_romans.length() <= 2)
			return sub_romans;
		if(start == num)
			return add_romans;

	}


	return add_romans;

}

std::string convert_roman(unsigned int num) {

	std::string roman;

	for (unsigned int div = 1000, rem = div; rem > 0; div /= 10) {
		if (num >= div) {
			rem = num % div;
			roman.append(convert_part(div, num - rem));
			num = rem;
		}
	}

	return roman;

}
