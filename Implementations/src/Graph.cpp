//
// Created by oEnzoRibas on 03/03/2026.
//

#include "../include/Graph.h"
#include <iostream>
#include <algorithm>

Graph::Graph(int vertices)
    : n(vertices) {
    adj.resize(n);
}
void Graph::addEdge(int u, int v){
    adj[u].push_back(v);
};

