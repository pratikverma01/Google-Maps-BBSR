#include <vector> //vectors from stl
#include <queue>  //queues from stl
#include "Place.h"
#include "Edge.h"
#include <climits>
using namespace std;
// Graph class for all kind of graph related tasks
class Graph
{
private:
    int numNodes; // Number of destination in the map
    std::vector<std::vector<Edge>> adjList;
    std::vector<Place> places; // Vector to store Place objects

public:
    // Constructor
     Graph(int numNodes, const std::vector<Place>& places) : numNodes(numNodes), adjList(numNodes), places(places) {}

    // Add edge to graph
    void addEdge(const Edge &edge)
    {
        adjList[edge.getFrom()].push_back(edge);
    }

    // Function to set a Place by its ID
    void setPlace(int placeID, const Place& place) {
        if (placeID >= 0 && placeID < numNodes) {
            places[placeID] = place;
        }
    }
    
    // Function to get the name of a place by its ID
    string getPlaceName(int placeID) const {
        if (placeID >= 0 && placeID < numNodes) {
            return places[placeID].getName();
        }
        return "Unknown Place";
    }

    // Dijkstra's algorithm
    float dijkstra(int startNode, int endNode)
    {
        // Initialize distance array
        std::vector<float> distance(numNodes, INT_MAX);
        distance[startNode] = 0;

        //* Priority queue for Dijkstra's algorithm
        std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pq;
        pq.push(std::make_pair(0, startNode));

        //* Main loop of Dijkstra's algorithm
        while (!pq.empty())
        {
            int u = pq.top().second;
            pq.pop();

            // Iterate through neighbors of node u
            for (const Edge &edge : adjList[u])
            {
                int v = edge.getTo();
                float w = edge.getDistance();

                // Relax edge (u, v)
                if (distance[u] != INT_MAX && distance[u] + w < distance[v])
                {
                    distance[v] = distance[u] + w;
                    pq.push(std::make_pair(distance[v], v));
                }
            }
        }

        // Return shortest path distance from startNode to endNode
        return distance[endNode];
    }
};