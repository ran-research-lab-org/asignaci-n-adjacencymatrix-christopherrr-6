#include "Graph.hpp"

using namespace std;

int main() {
  Graph G(10);
  G.addEdge(0,9);
  G.addEdge(4, 2);

  G.print();
  cout<<endl;

  cout << "Número de aristas: " << G.numEdges() << "\n\n";

  for (int u = 0; u < 10; u++) {
    cout << "Vértice " << u << ":\n";
    cout << "  In-degree: " << G.inDegree(u) << "\n";
    cout << "  Influencer? " << (G.isInfluencer(u) ? "Sí" : "No") << "\n\n";
}
}
