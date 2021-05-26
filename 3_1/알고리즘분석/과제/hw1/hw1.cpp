#include <iostream>
#include <fstream>
using namespace std;

int n;
int tree[1000][2];
int cnt;

void init() {
	for (int i = 0; i < n; i++)
		tree[i][0] = tree[i][1] = -1;
	cnt = 0;
}

int nodes(int node) {
	int left = 0, right = 0;
	int leftChild = tree[node - 1][0];
	int rightChild = tree[node - 1][1];

	if (leftChild != -1) left += nodes(leftChild);
	if (rightChild != -1) right += nodes(rightChild);

	if (left < right) cnt++;

	return left + right + 1;
}

int main() {
	int node, leftChild, rightChild, t;
	ifstream file("input.txt");

	if (file.is_open()) {
		file >> t;

		for (int i = 0; i < t; i++) {
			init();

			file >> n;

			for (int j = 0; j < n; j++) {
				file >> node >> leftChild >> rightChild;
				tree[node - 1][0] = leftChild;
				tree[node - 1][1] = rightChild;
			}

			nodes(1);
			cout << cnt << endl;
		}
	}

	file.close();
}
