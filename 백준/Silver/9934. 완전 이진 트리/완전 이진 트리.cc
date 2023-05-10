#include<iostream>
#include<queue>
using namespace std;
typedef struct Tree{
	int n;
	struct Tree* left;
	struct Tree* right;
}Tree;
queue<Tree*> q;
void make(Tree* node, int K) {
	if (K > 0) {
		node->left = new Tree;
		make(node->left, K - 1);
		cin >> node->n;
		node->right = new Tree;
		make(node->right, K - 1);
	}
	else cin >> node->n;
}
void push(Tree* node, int K) {
	Tree* temp;
	if (K > 0) {
		temp = q.front();
		q.pop();
		q.push(temp->left);
		q.push(temp->right);
		push(node->left, K - 1);
		push(node->right, K - 1);
	}
}
void print(int K) {
	int a, b, c=1;
	Tree* temp;
	for (a = 0; a < K; a++) {
		for (b = 0; b < c; b++) {
			temp = q.front();
			q.pop();
			if (a < K - 1) {
				q.push(temp->left);
				q.push(temp->right);
			}
			cout << temp->n << " ";
			free(temp);
		}
		c *= 2;
		cout << "\n";
	}
}
int main() {
	int K;
	cin >> K;
	Tree* root=new Tree;
	make(root, K - 1);
	q.push(root);
	print(K);
}