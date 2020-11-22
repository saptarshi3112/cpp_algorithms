#include "graph.h"

void dfsUtil(int v, list<int> *graph, bool *visited) {
	visited[v] = true;
	cout << v << endl;
	for (int itr : graph) {
		if (!visited[itr]) {
			this->dfsUtil(itr, graph, visited);
		}
	}
}

void dfs(Graph g) {
	int vertices = g.getVertices();
	list <int> *graph = g.getGraph();
	bool *visited = new bool[vertices];
	for (int i = 0; i < vertices; i++) {
		if (!visited[i]) {
			this->dfsUtil(i, graph, visited);
		}
	}
}

int main() {

}
