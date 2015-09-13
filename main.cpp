/*
 * main.cpp
 *
 *  Created on: Sep 12, 2015
 *      Author: ericwadkins
 */

#include "main.h"

int main() {
	srand(clock());

	//float arr[] = { 4, 7.5, 1, 6, 5, 8, 3.2 };
	//std::vector<float> x(arr, arr + sizeof(arr) / sizeof(arr[0]));

	//std::vector<float> x = main::shuffledVector<float>(22, -5, 5.5);
	std::vector<float> x = main::randomVector<float>(1000000, 0, 1000000);
	//std::vector<float> x = main::shuffledVector<float>(30000, 0, 1000000);
	//std::vector<float> x = main::sortedVector<float>(30000, 0, 1000000);

	/*std::cout << '[';
	for (int i = 0; i < x.size(); i++) {
		std::cout << " " << x[i] << (i == x.size() - 1 ? " " : ", ");
	}
	std::cout << ']' << std::endl;*/

	//main::run<InsertionSort>(x, false);
	//main::run<SelectionSort>(x, false);
	main::run<MergeSort>(x, false);
	main::run<VontellSort>(x, false);

}

template<typename T, typename S>
std::vector<S> main::run(std::vector<S> x, bool printOutput) {
	clock_t start, finish;
	std::string type = std::regex_replace(std::string(typeid(T).name()), std::regex("[0-9]"), "");
	std::cout << "Running " << type << " " << std::flush;
	std::vector<S> y;
	start = clock();

	y = T::sort(x);

	finish = clock();
	std::cout << "(Took " << (double(finish) - double(start)) / CLOCKS_PER_SEC * 1000 << " ms)" << std::endl;
	if (printOutput) {
		std::cout << '[';
		for (int i = 0; i < y.size(); i++) {
			std::cout << " " << y[i] << (i == y.size() - 1 ? " " : ", ");
		}
		std::cout << ']' << std::endl;
	}
	return y;
}

template<typename T>
std::vector<T> main::randomVector(int size, T min, T max) {
	std::cout << "Creating random vector with " << size << " values ranging from " << min << " to " << max << std::endl;
	std::vector<T> vector(size);
	bool floor = false;
	if ((T) 0.5 == (T) 0) {
		floor = true;
	}
	for (int i = 0; i < size; i++) {
		vector[i] = ((T)((float) rand() / RAND_MAX * ((floor ? max + 1 - std::numeric_limits<float>::min() : max) - min) + min));
		//std::cout << i << std::endl;
	}
	return vector;
}

template<typename T>
std::vector<T> main::shuffledVector(int size, T min, T max) {
	std::cout << "Creating shuffled vector with " << size << " values ranging from " << min << " to " << max << std::endl;
	std::vector<T> vector(size);
	bool floor = false;
	if ((T) 0.5 == (T) 0) {
		floor = true;
	}
	for (int i = 0; i < size; i++) {
		vector[i] = ((T)((float) i / (size - 1) * ((floor ? max + 1 - std::numeric_limits<float>::min() : max) - min) + min));
		//std::cout << i << std::endl;
	}
	std::random_shuffle (vector.begin(), vector.end());
	return vector;
}

template<typename T>
std::vector<T> main::sortedVector(int size, T min, T max) {
	std::cout << "Creating sorted vector with " << size << " values ranging from " << min << " to " << max << std::endl;
	std::vector<T> vector(size);
	bool floor = false;
	if ((T) 0.5 == (T) 0) {
		floor = true;
	}
	for (int i = 0; i < size; i++) {
		vector[i] = ((T)((float) i / (size - 1) * ((floor ? max + 1 - std::numeric_limits<float>::min() : max) - min) + min));
		//std::cout << i << std::endl;
	}
	return vector;
}
