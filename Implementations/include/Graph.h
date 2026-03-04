//
// Created by oEnzoRibas on 03/03/2026.
//

#ifndef IMPLEMENTATIONS_GRAPH_H
#define IMPLEMENTATIONS_GRAPH_H

#include <vector>

class Graph {
    private:
    int n;
    std::vector<std::vector<int> > adj;
    
    public: 
    Graph(int vertices);

    void addEdge(int u, int v);

    int getNumVertices() const;

    int degree() const;

    std::vector<int> getNeighbors(int v) const;
    std::vector<int> degreeSequence() const;

    int numberOfEdges() const;

    void print() const;
};

#endif //IMPLEMENTATIONS_GRAPH_H