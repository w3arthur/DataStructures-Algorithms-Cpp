//fix the issue with too much destructures

#include <iostream>
#include "Graph.cpp"
using  std::cout, std::boolalpha, std::endl;
int main() {

    cout << "GraphWheight\n";   //retrieval
        //all other methods not tested
    GraphWheight graph{};
    graph.addNode('a');
    graph.addNode('b');
    graph.addNode('c');

    graph.addNode('d');
    graph.addNode('e');
    cout << endl;

    graph.addEdge('a', 'b');
    graph.addEdge('b', 'c');
    graph.addEdge('a', 'd');
  //  graph.addEdge('c', 'a');
    cout << boolalpha << graph.hasCycle() << "\n";


    graph.ge




    cout << "graph prin1111"<< graph.print() << "\n";
    graph.removeNode('b');
    cout << endl;
    cout << "graph prin1111"<< graph.print() << "\n";
    return EXIT_SUCCESS;
}