//NOMBRE y APELLIDOS

/*
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

//b = 2, k = 0, a = 2, a > b^k -> O(n^log en base b de a) -> O(n)
int resolver(vector<int> const& v, const int& x, const int& ini, const int& fin, const int& mitad) {
	if (fin - ini == 1) {
		if (ini < v.size()-1 && abs(x - v[ini]) > abs(x - v[ini + 1]))return v[ini + 1]; // si i no es el ultimo y si el numero de la derecha es mas cercano
		else return v[ini]; //si tienen la misma distancia o el de la izquiera es mas cercano, devolvemos ese
	}
	else {
		if (v[mitad] == x) return v[mitad];
		else if (v[mitad] < x) return resolver(v, x, mitad, fin, (fin + mitad) / 2);
		else return resolver(v, x, ini, mitad, (ini + mitad) / 2);
	}
}

void resuelveCaso() {
	//resuelve aqui tu caso
	int x, n, aux;
	//Lee los datos
	vector<int> v;
	cin >> x >> n;
	//Calcula el resultado
	for (int i = 0; i < n; i++) {
		cin >> aux;
		v.push_back(aux);
	}
	//if (v.size() == 1) cout << v[0] << "\n";
	if(!v.empty()) cout << resolver(v, x, 0, n, n/2) << "\n";
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
