/**
 * Original contribution: priyanshi2808.
 * Shortest paths in a graph with non-negative edge weights.
 * Vertices are indexed from 0 to adj.size() - 1. An edge is {vertex, weight}.
 * Unreachable vertices retain std::numeric_limits<long long>::max().
 */
#include <functional>
#include <limits>
#include <queue>
#include <stdexcept>
#include <utility>
#include <vector>

std::vector<long long> dijkstra(
    const std::vector<std::vector<std::pair<int, int>>>& adj, int src)
{
    if (src < 0 || static_cast<std::size_t>(src) >= adj.size()) {
        throw std::out_of_range("source vertex is outside the graph");
    }
    for (const auto& edges : adj) {
        for (const auto& edge : edges) {
            if (edge.first < 0 || static_cast<std::size_t>(edge.first) >= adj.size()) {
                throw std::out_of_range("edge endpoint is outside the graph");
            }
            if (edge.second < 0) {
                throw std::invalid_argument("Dijkstra requires non-negative weights");
            }
        }
    }

    using QueueEntry = std::pair<long long, int>;
    std::priority_queue<QueueEntry, std::vector<QueueEntry>, std::greater<QueueEntry>> pq;
    std::vector<long long> dist(adj.size(), std::numeric_limits<long long>::max());
    dist[src] = 0;
    pq.push({0, src});
    while (!pq.empty()) {
        const auto [currDist, currNode] = pq.top();
        pq.pop();
        if (currDist != dist[currNode]) continue;
        for (const auto& [next, weight] : adj[currNode]) {
            if (currDist > std::numeric_limits<long long>::max() - weight) {
                throw std::overflow_error("path distance exceeds the supported range");
            }
            const long long candidate = currDist + weight;
            if (candidate < dist[next]) {
                dist[next] = candidate;
                pq.push({candidate, next});
            }
        }
    }
    return dist;
}

