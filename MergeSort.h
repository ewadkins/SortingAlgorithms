/*
 * MergeSort.h
 *
 *  Created on: Sep 12, 2015
 *      Author: ericwadkins
 */

#ifndef MERGESORT_H_
#define MERGESORT_H_

#include <vector>

class MergeSort {
public:
	template<typename T>
	static std::vector<T> sort(std::vector<T> x);
};

#endif /* MERGESORT_H_ */
