#include <algorithm>
#include <cassert>
#include <iostream>
#include <limits>
#include <vector>

#include "../Graph Algorithms/Dijkstra/C++/Dijkstra.cpp"
#include "../Searching/Linear Search/C++/LinearSearch.cpp"
#include "../Sorting/Quick Sort/C++/QuickSort.cpp"
#include "../Sorting/Selection Sort/C++/SelectionSort.c++"

int main() {
    using Graph = std::vector<std::vector<std::pair<int, int>>>;
    const auto unreachable = std::numeric_limits<long long>::max();
    Graph graph = {{{1, 10}, {2, 1}}, {{3, 2}}, {{1, 1}}, {}, {}};
    assert((dijkstra(graph, 0) == std::vector<long long>{0, 2, 1, 4, unreachable}));
    assert((dijkstra(Graph(1), 0) == std::vector<long long>{0}));
    Graph large = {{{1, 2000000000}}, {{2, 2000000000}}, {}};
    assert(dijkstra(large, 0)[2] == 4000000000LL);
    Graph zeroCycle = {{{1, 0}}, {{0, 0}}};
    assert((dijkstra(zeroCycle, 0) == std::vector<long long>{0, 0}));
    bool invalidSource = false, invalidEdge = false, negativeWeight = false;
    try { dijkstra(Graph{}, 0); } catch (const std::out_of_range&) { invalidSource = true; }
    try { dijkstra(Graph{{{1, 1}}}, 0); } catch (const std::out_of_range&) { invalidEdge = true; }
    try { dijkstra(Graph{{{0, -1}}}, 0); } catch (const std::invalid_argument&) { negativeWeight = true; }
    assert(invalidSource && invalidEdge && negativeWeight);

    for (std::vector<int> input : std::vector<std::vector<int>>{{}, {1}, {3, -1, 3, 0}, {5, 4, 3, 2, 1}}) {
        std::vector<int> expected = input;
        std::sort(expected.begin(), expected.end());
        auto copy = input;
        assert(quickSort(copy, 0, static_cast<int>(copy.size()) - 1) == expected);
        assert(copy == expected);
        assert(selectionsort(input, static_cast<int>(input.size())) == expected);
    }
    assert(linear_search({}, 1) == -1);
    assert(linear_search({1, 3, 3}, 3) == 1);
    assert(linear_search({1, 3, 3}, 4) == -1);
    std::cout << "PASS: shortest paths, validation, sorting edge cases, linear search\n";
}
