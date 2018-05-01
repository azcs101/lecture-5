#include <iostream>

int len(const char str[]) {
	int i;
	for (i = 0; str[i] != '\0'; ++i) {}
	return i;
}

int main() {

	std::cout << len("Hello") << "\n";

	return 0;
}