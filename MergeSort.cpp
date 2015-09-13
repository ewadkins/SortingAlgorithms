/*
 * MergeSort.cpp
 *
 *  Created on: Sep 12, 2015
 *      Author: ericwadkins
 */

#include "MergeSort.h"

template<typename T>
std::vector<T> MergeSort::sort(std::vector<T> x) {
	if (x.size() <= 1) {
		return x;
	}
	std::vector<T> left, right;
	int middle = x.size() / 2;
	for (int i = 0; i < middle; i++) {
		left.push_back(x[i]);
	}
	for (int i = middle; i < x.size(); i++) {
		right.push_back(x[i]);
	}
	left = sort(left);
	right = sort(right);
	std::vector<T> result;
	int l = 0;
	int r = 0;
	while (l < left.size() && r < right.size()) {
		if (left[l] <= right[r]) {
			result.push_back(left[l]);
			l++;
		}
		else {
			result.push_back(right[r]);
			r++;
		}
	}
	while (l < left.size()) {
		result.push_back(left[l]);
		l++;
	}
	while (r < right.size()) {
		result.push_back(right[r]);
		r++;
	}
	return result;
}

template std::vector<char> MergeSort::sort(std::vector<char>);
template std::vector<char16_t> MergeSort::sort(std::vector<char16_t>);
template std::vector<char32_t> MergeSort::sort(std::vector<char32_t>);
template std::vector<wchar_t> MergeSort::sort(std::vector<wchar_t>);
template std::vector<signed char> MergeSort::sort(std::vector<signed char>);
template std::vector<signed short int> MergeSort::sort(std::vector<signed short int>);
template std::vector<signed int> MergeSort::sort(std::vector<signed int>);
template std::vector<signed long int> MergeSort::sort(std::vector<signed long int>);
template std::vector<signed long long int> MergeSort::sort(std::vector<signed long long int>);
template std::vector<unsigned char> MergeSort::sort(std::vector<unsigned char>);
template std::vector<unsigned short int> MergeSort::sort(std::vector<unsigned short int>);
template std::vector<unsigned int> MergeSort::sort(std::vector<unsigned int>);
template std::vector<unsigned long int> MergeSort::sort(std::vector<unsigned long int>);
template std::vector<unsigned long long int> MergeSort::sort(std::vector<unsigned long long int>);
template std::vector<float> MergeSort::sort(std::vector<float>);
template std::vector<double> MergeSort::sort(std::vector<double>);
template std::vector<long double> MergeSort::sort(std::vector<long double>);
