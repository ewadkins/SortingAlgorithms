/*
 * main.h
 *
 *  Created on: Sep 12, 2015
 *      Author: ericwadkins
 */

#ifndef MAIN_H_
#define MAIN_H_

#include <iostream>
#include <vector>
#include <ctime>
#include <string>
#include <regex>

#include "InsertionSort.h"
#include "SelectionSort.h"
#include "MergeSort.h"
#include "VontellSort.h"

class main {
public:
	template<typename T, typename S>
	static std::vector<S> run(std::vector<S> x, bool printOutput);
	template<typename T>
	static std::vector<T> randomVector(int size, T min, T max);
	template<typename T>
	static std::vector<T> shuffledVector(int size, T min, T max);
	template<typename T>
	static std::vector<T> sortedVector(int size, T min, T max);
};

#endif /* MAIN_H_ */
