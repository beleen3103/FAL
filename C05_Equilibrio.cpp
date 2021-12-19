//NOMBRE y APELLIDOS

/*
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int resuelve(vector<int> const& v) {
	int i = 0, pos = -1, equilibrio = 0;
	while (i < v.size()) {
		if (v[i] == 0) equilibrio++;
		else if (v[i] == 1) equilibrio--;

		if (equilibrio == 0) pos = i;

		i++;
	}
	return pos;
}

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
	cout << resuelve(v) << "\n";
	   //Escribe el resultado
}

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