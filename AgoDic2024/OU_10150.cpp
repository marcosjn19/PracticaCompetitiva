#include <bits/stdc++.h> 
using namespace std;
typedef pair<int, int> NodoAdyacente;
class Grafo {
private:
    unordered_map<int, vector<NodoAdyacente>> adjList; 

public:
	// Añadir nodo
    void agregarCamino(int origen, int destino, int costo) {
        adjList[origen].push_back({destino, costo});
        adjList[destino].push_back({origen, costo});
    }

    int dijkstra(int origen, int destino, int numNodos) {
        vector<int> dist(numNodos, numeric_limits<int>::max()); 
        dist[origen] = 0;
        priority_queue<NodoAdyacente, vector<NodoAdyacente>, greater<NodoAdyacente>> pq;
		vector<int>distanciasRecorridas;
        pq.push({0, origen}); 
        while (!pq.empty()) {
            int distanciaActual = pq.top().first;
            int nodoActual = pq.top().second;
            pq.pop();
            if (nodoActual == destino){
				sort ( distanciasRecorridas.begin(), distanciasRecorridas.end(), greater<int>() );
				 return distanciaActual - distanciasRecorridas[0];
			}
            for (const auto& adyacente : adjList[nodoActual]) {
                int nodoVecino = adyacente.first;
                int costoArista = adyacente.second;
                if (distanciaActual + costoArista < dist[nodoVecino]) {
                    dist[nodoVecino] = distanciaActual + costoArista;
					distanciasRecorridas.push_back(costoArista);
                    pq.push({dist[nodoVecino], nodoVecino});
                }
            }
        }
        return -1;
    }
};
void solve () {
	int n; cin >> n; 
	int m; cin >> m;
	Grafo g;
	for ( int i = 0; i < m; i++ ) {
		int o; cin >> o;
		int d; cin >> d;
		int cto; cin >> cto;
		g.agregarCamino(o, d, cto);
	}
	
	cout << g.dijkstra(0, n-1, n) << endl;
	return;
}

int main(){
	// freopen("input.txt", "r", stdin); 
	// freopen("output.txt", "w", stdout);  
	solve();
}