# My_assignment_in תכנות מערכות 2


as required, I created 4 files called '''Graph.hpp''' '''Graph.cpp''' '''Algorithms.hpp''' and '''Algorithms.cpp'''. I will explain about them down below.



'''Graph.hpp''' is the file who is responsible for creating the class Graph that I used throughout the code. it has one variables that obtains the information given by the user.

- '''vector<vector<int>> adjMatrix;''' is a two dimentional vector that is responsible to store the values of the matrix that was given by the user.

besides the variable this class also stores two methods that are implemented in '''Graph.cpp'''.



'''Graph.cpp''' is the file that implements the two methods which were mentioned earlier on this page.

- '''void Graph::loadGraph(vector<vector<int>> matrix)''' gets an adjacent matrix from the user and stores the matrix in the variable '''adjMatrix'''.

- '''void Graph::printGraph()''' prints how many edges and how many vertices are in the graph. 
the amount of vertices is the size of the matrix SQUARED, if the matrix is 3x3 then there are 3 vertices. the amount of edges is all the values in the matrix that aren't 0 becasue 0 means there is no edge between these vertices.



'''Algorithms.hpp''' is the file that defines all the functions that are used in '''Algorithms.cpp'''.

 
'''Algorithms.cpp''' has 5 functions: '''isConnected(Graph)''', '''shortestPath(Graph, int, int)''', '''isContainsCycle(Graph)''', '''isBipartite(Graph)''' and '''negativeCycle(Graph)'''

'''isConnected(Graph g)''' tries to go over all the vertices. If it succeeded the graph is connected.

'''shortestPath(Graph, int start, int end)''' finds the shortest path using dijkstra's algorithm

'''isContainsCycle(Graph g)''' finds a cycle in a graph by going over all the vertices with BFS and if we find a path where we go over an already visited node, we found a cycle

'''isBipartite(Graph g)''' decides if a graph is bipartite or not. It does that by going over all the vertices with BFS and assigning colors for each vertex(either 0 or 1) if a vertex has the same color as its neighbor, the graph is not bipartite, otherwise it is. If it is bipartite this function will divide the parts into two disjoint sets

'''negativeCycle(Graph g)''' finds negative cycles using bellman ford's algorithm. We relax the edges to find the shortest path. If after we are done with the algorithm there is still more relaxation possible, that means we found a negative cycle





that's it! We went through all the files. I hope everything is clear.
