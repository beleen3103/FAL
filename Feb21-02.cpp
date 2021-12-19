//NOMBRE y APELLIDOS
/*

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

typedef struct {
	int sumaPar = 0;
	int sumaImpar = 0;
	int productoPar = 1;
	int productoImpar = 1;
}solucion;

solucion resolver(vector<int> const& v, int ini, int fin, int mitad, bool& ext) {
	if (fin - ini == 1) {
		if (v[ini] % 2 == 0) {
			return { v[ini], 0, v[ini], 0 };
		}
		else return { 0, v[ini], 0, v[ini] };
	}
	else {
		solucion iz, der;
		bool correcto = true; //al menos una de las dos mitades es extraña
		iz = resolver(v, ini, mitad, (ini + mitad) / 2, ext);
		if (ext) correcto = true;
		der = resolver(v, mitad, fin, (fin + mitad) / 2, ext);
		if (ext && !correcto) correcto = true;
		if (iz.sumaPar + iz.productoImpar < der.productoPar + der.sumaImpar) ext = true;
		else ext = false;
		if (!correcto) ext = false;
		return { iz.sumaPar + der.sumaPar, der.sumaImpar + der.sumaImpar, der.productoPar * iz.productoPar, iz.productoImpar * der.productoImpar };
		
	}
}

void resuelveCaso() {
	//resuelve aqui tu caso
	int n, aux;
	vector<int>v;
	cin >> n;
	   //Lee los datos
	for (int i = 0; i < n; i++) {
		cin >> aux;
		v.push_back(aux);
	}

	   //Calcula el resultado
	bool ext = true;
	if (v.size() != 1) resolver(v, 0, n, n / 2, ext);
	cout << (ext ? "SI" : "NO") << "\n";
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