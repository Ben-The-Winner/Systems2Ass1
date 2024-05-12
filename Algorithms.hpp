#ifndef ALGORITHMS_H
#define ALGORITHMS_H
using namespace std;
#include <iostream>
#include <vector>
#include "Graph.hpp" 

bool isConnected(Graph);

vector<int> shortestPath(Graph, int, int);

vector<int> isContainsCycle(Graph);

vector<int> isBipartite(Graph);

vector<int> negativeCycle(Graph);

#endif
