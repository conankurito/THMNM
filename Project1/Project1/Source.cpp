#include"Header.h"

Node* taoNode(int n) {
	Node* node = new Node;
	node->a = n;
	node->left = node->right = NULL;
	return node;
}

void xuatNode(Node* node) {
	cout << node->a << " ";
}

bool checkTrung(Node* tree, int n) {
	while (tree != NULL)
		if (tree->a == n)
			return true;
		else if (tree->a < n)
			tree = tree->right;
		else tree = tree->left;
	return false;
}

void themNode(Node*& tree, int n) {
	if (tree == NULL)
		tree = taoNode(n);
	else if (tree->a < n)
		themNode(tree->right, n);
	else themNode(tree->left, n);
}

void taoCay(Node*& tree) {
	tree = NULL;
	int n;
	bool check;
	while (1) {
		do {
			cout << "Nhap phan tu (-99 thoat): ";
			cin >> n;
			if (n == -99)
				return;
			check = checkTrung(tree, n);
			if (check)
				cout << "Nhap lai";
		} while (check);
		themNode(tree, n);
	}
}

void xuatCay(Node* tree) {
	if (tree == NULL)
		return;
	cout << tree->a << " ";
	xuatCay(tree->left);
	xuatCay(tree->right);
}

void xoa(Node* tree, int a) {
	if (tree == NULL)
		return;
	else {
		if (tree->left == NULL) {
			Node* temp = tree;
			tree = tree->right;
			delete temp;
			return;
		}
		else if (tree->right == NULL) {
			Node* temp = tree;
			tree = tree->left;
			delete temp;
			return;
		}
		else {
			Node* p = tree->left;
			while (p->right != NULL)
				p = p->right;
			tree->a = p->a;
			xoa(tree->left, p->a);
		}
	}
}