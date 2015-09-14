/*
 * VontellSort.cpp
 *
 *  Created on: Sep 12, 2015
 *      Author: ericwadkins
 */

#include "VontellSort.h"

template<typename T>
std::vector<T> VontellSort::sort(std::vector<T> x) {
	if (x.size() <= 1) {
		return x;
	}
	T min = std::numeric_limits<T>::max();
	T max = std::numeric_limits<T>::min();
	for (int i = 0; i < x.size(); i++) {
		if (max < x[i]) {
			max = x[i];
		}
		if (x[i] < min) {
			min = x[i];
		}
	}
	min = (min < 0 && (int) min != min ? (int) (min - 1) : (int) min);
	max = (max < 0 && (int) max != max ? (int) (max - 1) : (int) max);
	std::vector<std::vector<T> > temp(max - min + 1);
	for (int i = 0; i < x.size(); i++) {
		temp[(int) (x[i] - min)].push_back(x[i]);
	}
	std::vector<T> result(x.size());
	int count = 0;
	for (int i = 0; i < temp.size(); i++) {
		temp[i] = MergeSort::sort(temp[i]);
		for (int j = 0; j < temp[i].size(); j++) {
			result[count + j] = temp[i][j];
		}
		count += temp[i].size();
	}
	return result;
}

template std::vector<char> VontellSort::sort(std::vector<char>);
template std::vector<char16_t> VontellSort::sort(std::vector<char16_t>);
template std::vector<char32_t> VontellSort::sort(std::vector<char32_t>);
template std::vector<wchar_t> VontellSort::sort(std::vector<wchar_t>);
template std::vector<signed char> VontellSort::sort(std::vector<signed char>);
template std::vector<signed short int> VontellSort::sort(std::vector<signed short int>);
template std::vector<signed int> VontellSort::sort(std::vector<signed int>);
template std::vector<signed long int> VontellSort::sort(std::vector<signed long int>);
template std::vector<signed long long int> VontellSort::sort(std::vector<signed long long int>);
template std::vector<unsigned char> VontellSort::sort(std::vector<unsigned char>);
template std::vector<unsigned short int> VontellSort::sort(std::vector<unsigned short int>);
template std::vector<unsigned int> VontellSort::sort(std::vector<unsigned int>);
template std::vector<unsigned long int> VontellSort::sort(std::vector<unsigned long int>);
template std::vector<unsigned long long int> VontellSort::sort(std::vector<unsigned long long int>);
template std::vector<float> VontellSort::sort(std::vector<float>);
template std::vector<double> VontellSort::sort(std::vector<double>);
template std::vector<long double> VontellSort::sort(std::vector<long double>);
