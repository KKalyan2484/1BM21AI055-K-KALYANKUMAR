#include <iostream>
#include <queue>

const int MAX_NODES = 10; // Adjust the maximum number of nodes accordingly

void bfs(bool graph[MAX_NODES][MAX_NODES], int numNodes, int startNode) {
    bool visited[MAX_NODES] = {false};
    std::queue<int> queue;

    visited[startNode] = true;
    queue.push(startNode);

    while (!queue.empty()) {
        int m = queue.front();
        queue.pop();
        std::cout << m << " ";

        for (int neighbour = 0; neighbour < numNodes; ++neighbour) {
            if (graph[m][neighbour] && !visited[neighbour]) {
                visited[neighbour] = true;
                queue.push(neighbour);
            }
        }
    }
}

int main() {
    bool graph[MAX_NODES][MAX_NODES] = {
        { false, false, true, true, false, false },
        { false, false, false, true, false, false },
        { false, false, false, false, false, true },
        { false, false, false, false, true, false },
        { false, false, false, false, false, true },
        { false, false, false, false, false, false }
    };

    int numNodes = 6; // Number of nodes in the graph
    int startNode = 0; // Starting node for BFS

    std::cout << "Following is the Breadth-First Search: ";
    bfs(graph, numNodes, startNode);
    std::cout << std::endl;

    return 0;
}
