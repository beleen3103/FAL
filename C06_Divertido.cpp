//NOMBRE y APELLIDOS

/*
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

bool resuelve(vector<int> const& v, int d) {
	bool divertido = true;
	int iguales = 0;
	int i = 0;
	while (divertido && i < v.size() - 1) {
		if (v[i] > v[i + 1]) divertido = false;
		else if (v[i] == v[i + 1]) {
			while (i < v.size()-1 && v[i] == v[i + 1]) {
				iguales++;
				i++;
			}
			if (v[i] == v[i - 1]) iguales++;
			if (d < iguales) divertido = false;
			else iguales = 0;
		}
		else {
			if (v[i + 1] - v[i] <= 1) i++;
			else divertido = false;
		}
	}
	return divertido;
}

void resuelveCaso() {
	//resuelve aqui tu caso
	int d, n, aux;
	vector<int> v;
	   //Lee los datos
	cin >> d >> n;
	for (int i = 0; i < n; i++) {
		cin >> aux;
		v.push_back(aux);
	}
	   //Calcula el resultado
	   //Escribe el resultado
	cout << (resuelve(v, d) ? "SI" : "NO");
	cout << "\n";
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