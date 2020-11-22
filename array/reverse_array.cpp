#include <bits/stdc++.h>
using namespace std;

void printList(vector <int> list) {
	cout << "The list " << endl;
	for (int itr : list) {
		cout << itr << endl;
	}
}

void swap(int *a, int *b) {
	int temp = *b;
	*b = *a;
	*a = temp;
}

vector <int> reverseList(vector <int> list) {
	int end = list.size()-1, start = 0;
	while (start <= end) {
		swap(&list[start], &list[end]);
		start++;
		end--;
	}
	return list;
}

int main() {
	vector <int> list = {3, 8, 1, 5, 9, 6};
	printList(list);
	vector<int> result = reverseList(list);
	printList(result);
	return 0;
}
