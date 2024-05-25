#include <iostream>
using namespace std;
#include "Graph.hpp"

void Graph::loadGraph(int* matrix) {
  adjMatrix = new int[matrix.size()][matrix.size()];
  for (int i = 0; i < matrix.size(); ++i) {
    for (int j = 0; j < matrix.size(); ++j) {
        adjMatrix[i][j] = matrix[i][j];
  }
}

void Graph::printGraph() {
  for(int i = 0; i < adjMatrix.size(); i++) {
    for(int j = 0; j < adjMatrix.size(); j++) {
      cout << adjMatrix[i][j] << endl;
    }
  }
}
