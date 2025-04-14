#include "logic.h"

void print(string name, int expected, int* array, int size) {
	int actual = sum_negative_elements(array, size);
	cout << name << ": " << (expected == actual ? "\033[32m PASS \033[0m\n\n"

		: "\033[1;31m FAIL \033[0m expected = " + to_string(expected) + ", but actual = "
		+ to_string(actual) + "\n\n");
}

void test1() {
	int* array = new int[9]{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int expected = 0;
	print("All positive elems", expected, array, 9);
	delete[] array;
}

void test2() {
	int* array = new int[9] {0, 0, 0, 0, 0, 0, 0, 0, 0};
	int expected = 0;
	print("All zero elems", expected, array, 9);
	delete[] array;
}

void test3() {
	int* array = new int[8] {-8, -4, 2, 6, -7, 2, 0, -1};
	int expected = 20;
	print("Mixed array: ", expected, array, 8);
	delete[] array;
}

void test4() {
	int* array = nullptr;
	int expected = -1;
	print("Nullptr", expected, array, 0);
	delete[] array;
}

void test5() {
	int* array = new int[1] {-9};
	int expected = 9;
	print("One negative element", expected, array, 1);
	delete[] array;
}

void test6() {
	int* array = new int[1] {4};
	int expected = 0;
	print("One positive element", expected, array, 1);
	delete[] array;
}

void test7() {
	int* array = new int[9] {-9, -8, -7, -6, -5, -4, -3, -2, -1};
	int expected = 45;
	print("All negative elems", expected, array, 9);
	delete[] array;
}

void test8() {
	int* array = new int[1] {0};
	int expected = 0;
	print("One zero elem", expected, array, 1);
	delete[] array;
}

void test9() {
	int* array = nullptr;
	int expected = -1;
	print("Negative size", expected, array, -1);
	delete[] array;
}

void test10() {
	int* array = nullptr;
	int expected = -1;
	print("Zero size", expected, array, 0);
	delete[] array;
}

void test11() {
	int* array = new int[8] {4, 4, 4, 4, 4, 4, 4, 4};
	int expected = 0;
	print("Same positive elements", expected, array, 8);
	delete[] array;
}