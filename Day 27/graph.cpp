#include <iostream>
#include <list>

using namespace std;

// Graph class with adjacency list representation
class Graph {
private:
    int vertices;            // Number of vertices
    list<int> *adjacencyList; // Array of lists to represent adjacency lists

public:
    // Constructor to initialize the graph
    Graph(int vertices) {
        this->vertices = vertices;
        adjacencyList = new list<int>[vertices];
    }

    // Function to add an edge to the graph
    void addEdge(int source, int destination) {
        adjacencyList[source].push_back(destination);
        adjacencyList[destination].push_back(source); // Uncomment this line for an undirected graph
    }

    // Function to print the adjacency list
    void printAdjacencyList() {
        for (int i = 0; i < vertices; ++i) {
            cout << "Adjacency list of vertex " << i << ": ";
            for (const auto &neighbor : adjacencyList[i]) {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    // Create a graph with 5 vertices
    Graph graph(5);

    // Add edges
    graph.addEdge(0, 1);
    graph.addEdge(0, 4);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);

    // Print the adjacency list
    graph.printAdjacencyList();

    return 0;
}
