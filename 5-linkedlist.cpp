#include <iostream>

struct Node {
	float value;
	Node *next;
};

Node * ll_init(float v) {
	Node * n = new Node;
	n->value = v;
	n->next = NULL;
	return n;
}

void ll_add(Node *root, Node *n) {
	n->next = root->next;
	root->next = n;
}

int main() {

	Node *root = ll_init(5);
	Node *n = ll_init(10);
	ll_add(root, n);
	ll_add(root, ll_init(67));


	for (Node *p = root; p != NULL; p = p->next) {
		std::cout << p->value << "\n";
	}

	
	return 0;
}
