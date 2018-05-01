#include <iostream>

struct Vector {
	float *array;
	int size;
	int capacity;
};

Vector* vector_init() {
	Vector *v = new Vector;
	v->size = 0;
	v->capacity = 5;
	v->array = new float[v->capacity];

	return v;
}

void vector_add(Vector *v, float value) {
	if (v->size >= v->capacity) {
		v->capacity *= 2;
		float *arr = new float[v->capacity];

		for (int i = 0; i < v->size; ++i) {
			arr[i] = v->array[i];
		}

		delete v->array;
		v->array = arr;
	}
	v->array[v->size] = value;

	v->size++;
}

float vector_get(Vector *v, int index) {
	return v->array[index];
}

int main() {

	Vector *v = vector_init();

	vector_add(v, 10.0);
	vector_add(v, 11.0);
	vector_add(v, 12.0);
	vector_add(v, 13.0);
	vector_add(v, 14.0);
	vector_add(v, 15.0);
	vector_add(v, 16.0);

	for (int i = 0; i < v->size; ++i) {
		std::cout << vector_get(v, i) << "\n";
	}
	return 0;
}
