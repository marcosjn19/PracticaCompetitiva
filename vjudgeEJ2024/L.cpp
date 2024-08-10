#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int contarCiclos(vector<int>& perm) {
    int n = perm.size();
    vector<bool> visitados(n, false);
    int contCiclo = 0;

    for (int i = 0; i < n; ++i) {
        if (!visitados[i]) {
            int actual = i;
            while (!visitados[actual]) {
                visitados[actual] = true;
                actual = perm[actual];
            }
            contCiclo++;
        }
    }

    return contCiclo;
}

int main() {
    int N;
    cin >> N;
    vector<int> derecha(N), izquierda(N);

    for (int i = 0; i < N; ++i) {
        cin >> derecha[i];
    }
    for (int i = 0; i < N; ++i) {
        cin >> izquierda[i];
    }

    vector<int> permDerecha(N), permIzquierda(N);
    for (int i = 0; i < N; ++i) {
        permDerecha[i] = derecha[i] - 1;
        permIzquierda[i] = izquierda[i] - 1;
    }

    int ciclosDerecha = contarCiclos(permDerecha);
    int ciclosIzquierda = contarCiclos(permIzquierda);

    int totalCambios = (N - ciclosDerecha) + (N - ciclosIzquierda);
    cout << totalCambios << endl;

    return 0;
}

