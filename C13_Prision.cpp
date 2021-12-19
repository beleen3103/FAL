//NOMBRE y APELLIDOS

/*
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

//es recursion???
//coste O(n) en el peor caso
char resolver(vector<int> v, char ini, char fin, int pos) {
	if (fin - ini == pos) return fin;
	else if (v[pos] != ini + pos) return ini + pos;
	else {
		return resolver(v, ini, fin, pos + 1);
	}
}

void resuelveCaso() {
	//resuelve aqui tu caso
	char ini, fin, aux;
	vector<int> prision;
	   //Lee los datos
	cin >> ini>> fin;
	for (int i = 0; i < fin-ini; i++) {
		cin >> aux;
		prision.push_back(aux);
	}
	   //Calcula el resultado
	cout << resolver(prision, ini, fin,0) << "\n"	;
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