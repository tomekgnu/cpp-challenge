/*
 * main.cpp
 *
 *  Created on: 24 lip 2024
 *      Author: Tomek
 */

#include <iostream>

void show_bin(unsigned char n){
	for(int i = 4; i >= 0; i--){
		std::cout << (bool)(n & (1 << i));
	}

}

void show_gray(unsigned char n){
	unsigned char gray = (n >> 1) ^ (n);
	show_bin(gray);
}

void show_natural(unsigned char n){
	unsigned char gray = (n >> 1) ^ (n);
	unsigned char natural = 0;
	unsigned char bit = 4;
	natural = ((1 << bit) & gray);

	do{
		unsigned char next = (bool)(natural & (1 << bit)) ^ (bool)(gray & (1 << (bit - 1)));
		bit--;
		natural |= (next << bit);


	}while(bit > 0);

	show_bin(natural);

}

int main(void){

	for(unsigned char i = 0; i < 32; i++){
		std::cout << (int)i << " ";
		show_bin(i);
		std::cout << " ";
		show_gray(i);
		std::cout << " ";
		show_natural(i);
		std::cout << " ";
		std::cout << std::endl;
	}

	return 0;
}
