#include <iostream>
#include <vector>
using namespace std;

int solution (vector<int> list, int x) {

}

int binary_search(vector<int> list, int start, int end, int x) {
	if (start <= end) {
		int mid = (start+end)/2;
		if (list[mid] == x) return mid;
		if (list[mid] > x) return binary_search(list, start, mid-1, x);
		else return binary_search(list, mid+1, end, x);
	}
	return -1;
}

int main() {
	
	vector<int> list = {};

	return 0;
}

