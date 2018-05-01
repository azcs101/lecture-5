#include <iostream>

int search_item(int * array, int len, int value) {
	for (int i = 0; i < len; ++i) {
		if (array[i] == value) {
			return i;
		}
	}

	return -1;
}

int main() {
	int some_array[] = { 1, 2, 4, 7, 9, 6, 5, 3, 8, 15, 78 };
	search_item(some_array, 11, 78);
	return 0;
}