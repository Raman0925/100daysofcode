#include<iostream>
#include<vector> 
#include<stack> 

using namespace std;


class Graph{
    public:
    int vertices;
    vector<vector<int>> adjList;
    Graph(int V) : vertices(V),adjList(V){}
    void addEdge(int v , int w){
        adjList[v].push_back(w);
        adjList[w].push_back(v);

    }
    void DFS(int startVertex){
        vector<bool> visited(vertices,false);
        stack<int> dfsStack;
        dfsStack.push(startVertex);
        while(!dfsStack.empty()){
            int currentVertex = dfsStack.top();
            dfsStack.pop();

            if(!visited[currentVertex]){
                cout<<currentVertex<<" ";
                visited[currentVertex] ==true            }
        }
        for(const auto &neighbor :adjList[currentVertex]){
            if(!visited[neighbor]){
                dfsStack.push(neighbor);
            }
        }


    }


};
int main() {
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    cout << "DFS starting from vertex 0: ";
    g.DFS(0);

    return 0;
}