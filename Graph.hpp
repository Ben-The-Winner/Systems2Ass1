#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Graph {
public:
    vector<vector<int>> adjMatrix;

    void loadGraph(const vector<vector<int>>& matrix); // Updated parameter type
    void printGraph();
};

#endif
