#include<iostream>
using namespace std;
class node {
public:
	char c;
	node* left;
	node* right;
	node(char c) {
		this->c = c;
	}
};
class Tree {
public:
	node* head;
	node* arr[28];
	Tree() {
		head = new node('A');
		arr[0] = head;
	}
	void add(char p, char c, int i) {
		if (i == 0)
			arr[p - 'A']->left = new node(c);
		else
			arr[p - 'A']->right = new node(c);
	}
	void preorder(node* curr) {
		cout << curr->c;
		if (curr->left) preorder(curr->left);
		if (curr->right) preorder(curr->right);
	}
	void inorder(node* curr) {
		if (curr->left) inorder(curr->left);
		cout << curr->c;
		if (curr->right) inorder(curr->right);
	}
	void postorder(node* curr) {
		if (curr->left) postorder(curr->left);
		if (curr->right) postorder(curr->right);
		cout << curr->c;
	}
};
int main() {
	int N;
	char a, b, c;
	cin >> N;
	Tree* tree = new Tree();
	while (N--) {
		cin >> a >> b >> c;
		if (b != '.') {
			tree->add(a, b, 0);
			tree->arr[b - 'A'] = tree->arr[a - 'A']->left;
		}
		if (c != '.') {
			tree->add(a, c, 1);
			tree->arr[c - 'A'] = tree->arr[a - 'A']->right;
		}
	}
	tree->preorder(tree->head);
	cout << "\n";
	tree->inorder(tree->head);
	cout << "\n";
	tree->postorder(tree->head);
}