//NOMBRE y APELLIDOS

/*
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int resolver(vector<int>const& v) {
	int i = v.size() - 1;
	bool found = false;
	int aux = 0; 
	while (i >= 0 && !found) {
		if (v[i] == aux) found = true;
		else {
			aux += v[i];
			i--;
		}
	}
	if (found) return i;
	return -1;
	
}

//Pre: {0 <= n <= 100000 <= N}
void resuelveCaso() {
	//resuelve aqui tu caso
	int n, aux;
	vector<int> v;
	   //Lee los datos
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> aux;
		v.push_back(aux);
	}
	   //Calcula el resultado
	int sol = resolver(v);
	   //Escribe el resultado

	if (sol == -1) cout << "No";
	else cout << "Si " << sol;
	cout << "\n";
}
//Pos: { ret = Ex.(i,j: 0<= i < j < v.size() ^ v[i] = suma(i,j): i)
//		suma(i,j) = Sum(i,j: 0<= i < j < v.size(): v[j]}
int main() {
	// Para la entrada por fichero.
#ifndef DOMJUDGE
	std::ifstream in("casos.txt");
	auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif


	unsigned int numCasos;
	std::cin >> numCasos;
	// Resolvemos
	for (int i = 0; i < numCasos; ++i) {
		resuelveCaso();
	}


#ifndef DOMJUDGE // para dejar todo como estaba al principio
	std::cin.rdbuf(cinbuf);
	system("PAUSE");
#endif

	return 0;
}
*/