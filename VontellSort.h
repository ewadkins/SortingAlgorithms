/*
 * VontellSort.h
 *
 *  Created on: Sep 12, 2015
 *      Author: ericwadkins
 */

#ifndef VONTELLSORT_H_
#define VONTELLSORT_H_

#include <iostream>
#include <vector>

#include "MergeSort.h"

class VontellSort {
public:
	template<typename T>
	static std::vector<T> sort(std::vector<T> x);
};

#endif /* VONTELLSORT_H_ */
