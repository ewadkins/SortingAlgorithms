/*
 * InsertionSort.h
 *
 *  Created on: Sep 12, 2015
 *      Author: ericwadkins
 */

#ifndef INSERTIONSORT_H_
#define INSERTIONSORT_H_

#include <vector>

class InsertionSort {
public:
	template<typename T>
	static std::vector<T> sort(std::vector<T> x);
};

#endif /* INSERTIONSORT_H_ */
