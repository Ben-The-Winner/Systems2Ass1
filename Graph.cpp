#include "Graph.hpp"
#include <vector>
#include <stack>

void Graph::loadGraph(const vector<vector<int>>& matrix) { // Updated parameter type
    adjMatrix = matrix;
}

void Graph::printGraph() {
    int countEdges = 0;

    for (int i = 0; i < adjMatrix.size(); i++) { // Use size_t for comparison
        for (int j = 0; j < adjMatrix.size(); j++) { // Use size_t for comparison
            if (adjMatrix[i][j] != 0)
                countEdges++;
        }
    }

    cout << "The number of vertices is " << adjMatrix.size() << endl;
    cout << "The number of edges is " << countEdges/2 << endl;//because the matrix is symmetrical
}

