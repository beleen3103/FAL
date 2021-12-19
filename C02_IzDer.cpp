//NOMBRE y APELLIDOS

/*
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

bool resolver(const vector<int>& v, const int& p) {
	int max = v[0];
	for (int i = 1; i <= p; i++) {
		if (v[i] > max) max = v[i];
	}
	int min = v[p + 1], i = p+2;
	while (i < v.size() && max < min) {
		if (v[i] < min) min = v[i];
		i++;
	}
	return max < min;
}

void resuelveCaso() {
	//resuelve aqui tu caso
	   //Lee los datos
	vector<int> v;
	int nCasos, p, aux;
	cin >> nCasos >> p;
	for (int i = 0; i < nCasos; i++) {
		cin >> aux;
		v.push_back(aux);

	}
	//Calcula el resultado
	if (p == v.size() - 1) cout << "SI";
	else if (v.empty()) cout << "NO";
	else cout << (resolver(v, p) ? "SI" : "NO");
	cout << "\n";
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