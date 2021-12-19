//NOMBRE y APELLIDOS

/*
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


//coste segun el teorema de la division donde a = 2, k = 0 y b = 2, a > b^2 por lo que el coste es O(n^log en base b de a) = O(n^log en base 2 de 2) = O(n)
int resuelve(vector<int>const& v, const int& ini, const int& fin, const int& mitad) {
	if (fin - ini == 1) return ini;
	else {
		bool par;
		if (mitad % 2 == 0) par = true;
		else par = false;
		//Par: si un numero par y el siguiente son iguales, el numero no duplicado esta a la derecha
		//Impar: si un numero impar y el anterior son iguales, el numero no duplicado esta a la derecha
		if (par && v[mitad - 1] != v[mitad] || !par && v[mitad - 1] == v[mitad]) return resuelve(v, mitad, fin, (fin + mitad) / 2);
		else return resuelve(v, ini, mitad, (ini + mitad) / 2);
	}

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
	int sol = resuelve(v, 0, n, n/2);
	   //Escribe el resultado
	cout << sol << "\n";
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