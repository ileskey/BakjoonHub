#include<iostream>
using namespace std;
class node {
public:
	int n;
	node* left;
	node* right;
	node(int n) {
		this->n = n;
	}
};
class Tree {
public:
	node* head;
	Tree() {
		int n;
		cin >> n;
		head = new node(n);
	}
	void add(int k) {
		node* curr = head;
		node* parent = head;
		while (curr != NULL) {
			parent = curr;
			if (curr->n > k) curr = curr->left;
			else curr = curr->right;
		}
		if (parent->n > k) parent->left = new node(k);
		else parent->right = new node(k);

	}
	void search(node* curr) {
		if (curr->left) search(curr->left);
		if (curr->right) search(curr->right);
		cout << curr->n << "\n";
	}
};
int main() {
	int n;
	Tree* tree=new Tree();
	while (cin >> n) {
		tree->add(n);
	}
	tree->search(tree->head);
}