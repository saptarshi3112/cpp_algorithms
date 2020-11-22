#include <bits/stdc++.h>
using namespace std;

class Graph {
	int vertices;
	list <int> *graph;
	bool directed;

public:
	Graph(int v, bool directed) {
		this->vertices = v;
		this->graph = new list <int> [v];
		this->directed = directed;
	}

	void addEdge(int v, int w) {
		this->graph[v].push_back(w);
		if (this->directed) {
			this->graph[w].push_back(v);
		}
	}

	void printGraph() {
		// iterate thrrough the loop.
		for (int i = 0; i < this->vertices; i++) {
			cout << i << " " << endl;
			for (int itr : this->graph[i]) {
				cout << itr << " ";
			}
			cout << endl;
		}
	}

	int getVertices() {
		return this->vertices;
	}

	list<int> *getGraph() {
		return this->graph;
	}
};
