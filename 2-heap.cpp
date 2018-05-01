#include <iostream>

struct Rectangle {
	float width;
	float height;
};

int test2() {
	Rectangle * r1 = new Rectangle;

	delete r1;
}

int main() {

	test2();

	Rectangle r1;
	r1.width = 10;

	Rectangle *p = &r1;

	delete p;

	return 0;
}
