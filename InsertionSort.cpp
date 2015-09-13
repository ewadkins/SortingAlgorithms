/*
 * InsertionSort.cpp
 *
 *  Created on: Sep 12, 2015
 *      Author: ericwadkins
 */

#include "InsertionSort.h"

template<typename T>
std::vector<T> InsertionSort::sort(std::vector<T> x) {
	for (int i = 1; i < x.size(); i++) {
		for (int j = i; j > 0 && x[j - 1] > x[j]; j--) {
			T temp = x[j - 1];
			x[j - 1] = x[j];
			x[j] = temp;
		}
	}

	return x;
}

template std::vector<char> InsertionSort::sort(std::vector<char>);
template std::vector<char16_t> InsertionSort::sort(std::vector<char16_t>);
template std::vector<char32_t> InsertionSort::sort(std::vector<char32_t>);
template std::vector<wchar_t> InsertionSort::sort(std::vector<wchar_t>);
template std::vector<signed char> InsertionSort::sort(std::vector<signed char>);
template std::vector<signed short int> InsertionSort::sort(std::vector<signed short int>);
template std::vector<signed int> InsertionSort::sort(std::vector<signed int>);
template std::vector<signed long int> InsertionSort::sort(std::vector<signed long int>);
template std::vector<signed long long int> InsertionSort::sort(std::vector<signed long long int>);
template std::vector<unsigned char> InsertionSort::sort(std::vector<unsigned char>);
template std::vector<unsigned short int> InsertionSort::sort(std::vector<unsigned short int>);
template std::vector<unsigned int> InsertionSort::sort(std::vector<unsigned int>);
template std::vector<unsigned long int> InsertionSort::sort(std::vector<unsigned long int>);
template std::vector<unsigned long long int> InsertionSort::sort(std::vector<unsigned long long int>);
template std::vector<float> InsertionSort::sort(std::vector<float>);
template std::vector<double> InsertionSort::sort(std::vector<double>);
template std::vector<long double> InsertionSort::sort(std::vector<long double>);
