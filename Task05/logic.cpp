#include "logic.h"

int sum_negative_elements(int* array, int size) {
	if (size < 0 || array == nullptr) {
		return -1;
	}

	if (size == 0) {
		return 0;
	}

	return array[size - 1] < 0 ? abs(array[size - 1]) + sum_negative_elements(array, size - 1)
		: sum_negative_elements(array, size - 1);
}