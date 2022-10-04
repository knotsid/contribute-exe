// Topological Sort For Directed Acyclic Graph
// Using BFS
// Ordering the task (nodes) such that there is no conflict
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Graph {
	int V;
	list<int> *l;
public:
	Graph(int V) {
		this->V = V;
		l = new list<int>[V];
	}
	void addEdge(int x, int y) {
		l[x].push_back(y);
	}
	void bfs() {
		int *indegree = new int[V];
		queue<int> Q;
		// mark all the indegree as 0 initially
		for (int i = 0; i < V; i++) {
			indegree[i] = 0;
		}

		// update indegree by traversing edges
		for (int i = 0; i < V; i++) {
			for (auto y : l[i]) {
				indegree[y]++;
			}
		}

		// find the nodes with indegree 0
		for (int i = 0; i < V; i++) {
			if (indegree[i] == 0) {
				Q.push(i);
			}
		}

		// start removing elements from the queue
		while (!Q.empty()) {
			int node = Q.front();
			cout << node << ",";
			Q.pop();
			// iterate over the neighbours of that node and reduce its indegree
			for (auto neigh : l[node]) {
				indegree[neigh]--;
				if (indegree[neigh] == 0) {
					Q.push(neigh);
				}
			}
		}
	}
};
int main() {
// 	init();
	int V, E;
	cin >> V >> E;
	Graph g(V);
	for (int i = 0; i < E; i++) {
		int x, y;
		cin >> x >> y;
		g.addEdge(x, y);
	}
	g.bfs();
	return 0;
}
