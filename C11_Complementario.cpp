//NOMBRE y APELLIDOS

/*
#include <iostream>
#include <fstream>
using namespace std;

int complementario(int n, int& mux) {
	if (n < 10) return (9 - n);
	else {
		int a = complementario(n/10, mux);
		int ret = a*10;
		ret += (9 - (n % 10));
		return ret;
	}
}

int inverso(int n, int& mux) {
	if (n < 10) {
		return n;
	}
	else {
		int ret = n % 10;
		int a = inverso(n / 10, mux);
		mux *= 10;
		ret *= mux;
		ret += a;
		return ret;
	}
}

void resuelveCaso() {
	//resuelve aqui tu caso
	int n, mux =1;
	   //Lee los datos
	cin >> n;
	   //Calcula el resultado
	int a = complementario(n, mux);
	mux = 1;
	   //Escribe el resultado
	cout << a << " " << inverso(a, mux) << "\n";
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