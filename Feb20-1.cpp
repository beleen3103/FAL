//NOMBRE y APELLIDOS
/*

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

//coste: O(n) porque recorremos el vector 1 vez 
int resolver(vector<int>const& v) {
	int segCrec = 0, ini = 0, fin = 0, lMax = 0;
	int i = 1;
	while (i < v.size()) {
		//cota: n-i-1 (porque empiezo en 1)
		//{I: fin > ini}
		//{I: 0 <= segCrec < 3}
		//{I: lMax = max(fin-ini)}
		//{I: 0 < i < v.size()}
		if (v[i-1] < v[i]) segCrec++; //
		if (segCrec == 2) { //hay 3 elementos crecientes seguidos
			//i--; //retrocedemos hasta estar en el elemento creciente del medio
			fin = i; // hasta este punto hay un segmento sin elementos crecientes
			if (fin - ini > lMax) lMax = fin - ini;
			segCrec = 1;
			ini = i-1;//a partir de aqui no sabemos si hay 3 elementos crecientes
		}
		else if (v[i-1] >= v[i] && segCrec != 0) segCrec = 0;
		i++;
	}
	if (v.size() - ini > lMax) lMax = v.size() - ini;
	return lMax;
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
	cout << resolver(v) << "\n";
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