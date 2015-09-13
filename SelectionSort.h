/*
 * SelectionSort.h
 *
 *  Created on: Sep 12, 2015
 *      Author: ericwadkins
 */

#ifndef SELECTIONSORT_H_
#define SELECTIONSORT_H_

#include <vector>

class SelectionSort {
public:
	template<typename T>
	static std::vector<T> sort(std::vector<T> x);
};

#endif /* SELECTIONSORT_H_ */
