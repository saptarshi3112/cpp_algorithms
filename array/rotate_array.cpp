#include <iostream>
using namespace std;

vector <int> reversal_algorithm(vector<int> list, int k) {
	int size = list.size();
	
	// rotate the list by k

	return list;
}

void printList(vector<int> list) {
	for (int itr : list) {
		cout << itr << endl;
	}
}

int main() {
	vector<int> list = {1, 2, 3, 4, 5, 6, 7};
	int k = 2;

	vector<int> result = reversal_algorithm(list, k);
	printList(result);
	return 0;
}

