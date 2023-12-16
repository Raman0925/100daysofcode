#include <iostream>
#include <vector>

using namespace std;

// Define a graph using an adjacency list
class Graph {
public:
    int vertices;
    vector<vector<int>> adjList;

    // Constructor to initialize the graph with a given number of vertices
    Graph(int V) : vertices(V), adjList(V) {}

    // Function to add an edge to the graph
    void addEdge(int v, int w) {
        adjList[v].push_back(w);
        adjList[w].push_back(v); // For undirected graph
    }

    // Function to print the adjacency list
    void printGraph() {
        for (int v = 0; v < vertices; ++v) {
            cout << "Adjacency list of vertex " << v << ": ";
            for (const auto &neighbor : adjList[v]) {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    // Create a graph with 5 vertices
    Graph g(5);

    // Add edges to the graph
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    // Print the adjacency list
    g.printGraph();

    return 0;
}
