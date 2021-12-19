//NOMBRE y APELLIDOS

/*
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int resuelve(vector<int> const& alturas) {
	int l = 1, i=0, lMax = 1;

	while (i < (alturas.size()-1)) {
		if (alturas[i] >= alturas[i + 1]) {
			while (i < alturas.size() - 1 && alturas[i] >= alturas[i + 1]) {
				l++;
				i++;
			}
			
			if (lMax < l) lMax = l;
			l = 1;
		}
		else i++;

	}

	return lMax;
}

void resuelveCaso() {
	//resuelve aqui tu caso
	int n, aux;
	vector<int> alturas;
	   //Lee los datos
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> aux;
		alturas.push_back(aux);
	}
	   //Calcula el resultado
	   //Escribe el resultado
	if(n!=0) cout << resuelve(alturas) << "\n";
	else cout << "0\n";
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