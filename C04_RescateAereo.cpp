//NOMBRE y APELLIDOS
/*

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void resuelve(vector<int> const& v, const int& t, int& ini, int& fin) {
	int i = 0;
	int iniProv, finProv;
	while (i < v.size()) {
		if (v[i] > t) {
			iniProv = i;
			while (i < v.size() && v[i] > t ) {
				i++;
			}
			finProv = i-1;
			if (finProv - iniProv > fin - ini) {
				ini = iniProv;
				fin = finProv;
			}
		}
		else i++;
	}
}

void resuelveCaso() {
	//resuelve aqui tu caso
	   //Lee los datos
	int edificios, t, aux;
	vector<int> v;
	cin >> edificios >> t;
	for (int i = 0; i < edificios; i++) {
		cin >> aux;
		v.push_back(aux);
	}
	   //Calcula el resultado
	int ini = 1, fin = 0;
	resuelve(v, t, ini, fin);
	   //Escribe el resultado
	cout << ini << " " << fin << "\n";
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