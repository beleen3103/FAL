//NOMBRE y APELLIDOS
/*

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;



void resuelveCaso() {
	//resuelve aqui tu caso
	   //Lee los datos
	int nCasos, aux, nPicos = 0, nValles = 0;
	vector<int> v;
	cin >> nCasos;
	
	for (int i = 0; i < nCasos; i++) {
		cin >> aux;
		v.push_back(aux);
	}
	   //Calcula el resultado
	for (int i = 1; i < nCasos -1; i++) {
		if (v[i - 1] > v[i] && v[i + 1] > v[i]) nValles++;
		else if (v[i - 1] < v[i] && v[i + 1] < v[i]) nPicos++;
	}
	   //Escribe el resultado
	cout << nPicos << " " << nValles << "\n";
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