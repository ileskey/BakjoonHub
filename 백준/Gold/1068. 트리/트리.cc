#include<iostream>
#include<queue>
using namespace std;
typedef struct node {
public:
	int N;
	node* left_child;
	node* right_sibling;
	node(int n) {
		this->N = n;
		this->left_child = 0;
		this->right_sibling = 0;
	}
}node;
node *arr[50];
int main() {
	int N, k, t, qsize, flag;
	int parent[50] = {};
	queue<int> q;
	node* head = 0;
	node* curr;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> k;
		arr[i] = new node(i);
		if (k == -1) {
			head = arr[i];
			q.push(i);
		}
		parent[i] = k;
	}
	qsize = q.size();
	while (!q.empty()) {
		while (qsize--) {
			t = q.front();
			flag = 0;
			q.pop();
			for (int i = 0; i < N; i++) {
				if (parent[i] == t) {
					if (arr[t]->left_child) {
						curr = arr[t]->left_child;
						while (curr->right_sibling != 0) curr = curr->right_sibling;
						curr->right_sibling = arr[i];
					}
					else arr[t]->left_child = arr[i];
					q.push(i);
				}
			}
		}
		qsize = q.size();
	}
	cin >> k;
	if (head->N == k) {
		cout << 0;
		return 0;
	}
	node* par = arr[parent[k]];
	curr = par->left_child;
	if (curr->N == k) par->left_child = curr->right_sibling;
	else {
		while (curr->right_sibling->N != k)curr = curr->right_sibling;
		curr->right_sibling = curr->right_sibling->right_sibling;
	}
	int cnt = 0;
	q.push(head->N);
	while (!q.empty()) {
		while (qsize--) {
			t = q.front();
			q.pop();
			flag = 0;
			if (arr[t]->left_child) {
				curr = arr[t]->left_child;
				while (curr) {
					q.push(curr->N);
					curr = curr->right_sibling;
				}
				flag = 1;
			}
			if (!flag) cnt++;

		}
		qsize = q.size();
	}

	cout << cnt;
}