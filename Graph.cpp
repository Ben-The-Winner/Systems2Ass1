#include <iostream>
using namespace std;
#include "Graph.hpp"

void Graph::loadGraph(int* matrix, int size) {
  adjMatrix = new int[size*size];
  matrixSize = size;
  for (int i = 0; i < size*size; ++i) {
    adjMatrix[i] = matrix[i];
  }
}

void Graph::printGraph() {
  for(int i = 0; i < matrixSize; i++) {
    for(int j = 0; j < matrixSize; j++) {
      cout << adjMatrix[i * matrixSize + j] << " \n";
    }
  }
}
