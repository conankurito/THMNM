#include <iostream>

using namespace std;

struct Node {
	int a;
	Node* left;
	Node* right;
};

void taoCay(Node*& tree);
void xuatCay(Node* tree);
void xoa(Node* tree, int a);