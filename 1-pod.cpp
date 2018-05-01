#include <iostream>

struct Rectangle {
	float width;
	float height;
};

int main() {

	Rectangle r1;

	Rectangle *p1 = &r1;

	p1->width = 15;

	std::cout << p1->width << "\n";

	return 0;
}
