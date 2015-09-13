/*
 * SelectionSort.cpp
 *
 *  Created on: Sep 12, 2015
 *      Author: ericwadkins
 */

#include "SelectionSort.h"

template<typename T>
std::vector<T> SelectionSort::sort(std::vector<T> x) {
	if (x.size() == 0) {
		return x;
	}
	T temp;
	int min;
	for (int i = 0; i < x.size() - 1; i++) {
		min = i;
		for (int j = i + 1; j < x.size(); j++) {
			if (x[j] < x[min]) {
				min = j;
			}
		}
		if (min != i) {
			temp = x[i];
			x[i] = x[min];
			x[min] = temp;
		}
	}

	return x;
}

template std::vector<char> SelectionSort::sort(std::vector<char>);
template std::vector<char16_t> SelectionSort::sort(std::vector<char16_t>);
template std::vector<char32_t> SelectionSort::sort(std::vector<char32_t>);
template std::vector<wchar_t> SelectionSort::sort(std::vector<wchar_t>);
template std::vector<signed char> SelectionSort::sort(std::vector<signed char>);
template std::vector<signed short int> SelectionSort::sort(std::vector<signed short int>);
template std::vector<signed int> SelectionSort::sort(std::vector<signed int>);
template std::vector<signed long int> SelectionSort::sort(std::vector<signed long int>);
template std::vector<signed long long int> SelectionSort::sort(std::vector<signed long long int>);
template std::vector<unsigned char> SelectionSort::sort(std::vector<unsigned char>);
template std::vector<unsigned short int> SelectionSort::sort(std::vector<unsigned short int>);
template std::vector<unsigned int> SelectionSort::sort(std::vector<unsigned int>);
template std::vector<unsigned long int> SelectionSort::sort(std::vector<unsigned long int>);
template std::vector<unsigned long long int> SelectionSort::sort(std::vector<unsigned long long int>);
template std::vector<float> SelectionSort::sort(std::vector<float>);
template std::vector<double> SelectionSort::sort(std::vector<double>);
template std::vector<long double> SelectionSort::sort(std::vector<long double>);
