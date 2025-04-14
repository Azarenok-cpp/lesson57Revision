// [The Odd Count of Digits]
// Нечётное количество цифр
//
// Необходимо разработать рекурсивную функцию, которая проверяет,
// состоит ли заданное пользователем число только из нечётного 
// количества цифр или нет. Число может быть как положительным, 
// так и отрицательным.
// Напомним, что у числа 1234 – количество цифр чётное (even), 
// а у числа 12345 – количество цифр нечётное (odd). 

#include "logic.h"
int count_digits(long long number);

bool is_digits_count_odd(long long number) {
	return count_digits(number) % 2 == 1;
}

int count_digits(long long number){
	if (number < 10 && number > -10) {
		return 1;
	}

	return count_digits(number / 10) + 1;
}
