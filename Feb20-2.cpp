//NOMBRE y APELLIDOS

/*
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int resolver(vector<vector<int>> const& v,int i, int j, int fin, int mitad, bool& correcto) {
	if (fin - i == 1 || fin-j == 1) return v[i][j];
	else {
		int diagonal1 = 1, diagonal2 = 1;
		diagonal1 *= resolver(v, i, j, mitad, (mitad + j) / 2, correcto); //arriba iz
		if (correcto) {
			diagonal2 *= resolver(v, i, mitad, fin, (mitad + fin) / 2, correcto);//arriba der
			if (correcto) {
				diagonal2 *= resolver(v, mitad, j, mitad, (i + mitad) / 2, correcto); //abajo iz
				if (correcto) {
					diagonal1 *= resolver(v, mitad, mitad, fin, (mitad + fin) / 2, correcto); //abajo der
					if (diagonal1 != diagonal2) correcto = false;
				}
			}
		}
		
		return diagonal1; //vale cualquiera de las dos;
	}
}

void resuelveCaso() {
	//resuelve aqui tu caso
	int n;
	   //Lee los datos
	cin >> n;
	vector<vector<int>> v(n, vector<int>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> v[i][j];
		}
	}
	   //Calcula el resultado
	   //Escribe el resultado
	//cout << (resolver(v, 0, n, n/2) ? "SI":"NO") << "\n";
	bool c = true;
	int x = resolver(v, 0, 0, n, n / 2, c);
	//cout << (c ? "SI" : "NO") << " " << x << "\n";
	if (c) cout << "SI " << x;
	else cout << "NO";
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