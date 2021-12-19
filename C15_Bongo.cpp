//NOMBRE y APELLIDOS

/*
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int resuelve(vector<int> v, int n, int ini, int fin, int mitad) {
	if (fin - ini <= 1 && v[ini] != ini + n) return -1;
	else {
	if (v[mitad] == mitad + n) return v[mitad];
	else if (v[mitad] > mitad + n) return resuelve(v, n, ini, mitad, (mitad + ini) / 2);
	else if (v[mitad] < mitad + n) return resuelve(v, n, mitad, fin, (mitad + fin) / 2);
	}
}

void resuelveCaso() {
	//resuelve aqui tu caso
	int n, carton, aux;
	vector<int> v;
	   //Lee los datos
	cin >> carton >> n;
	for (int i = 0; i < carton; i++) {
		cin >> aux;
		v.push_back(aux);
	}
	   //Calcula el resultado
	int sol = resuelve(v, n, 0, carton, carton / 2);
	if( sol == -1)cout <<"NO" << "\n";
	else cout << sol << "\n";
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