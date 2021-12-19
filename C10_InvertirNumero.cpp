
// NOMBRE Y APELLIDOS
/*
#include <iostream>

#include <fstream>
using namespace std;


int recursion(int n, int& mux) {
	if (n < 10) {
		return n;
	}
	else {
		int ret = n % 10;
		int a = recursion(n / 10, mux);
		mux *= 10;
		ret *= mux;
		ret += a;
		return ret;
	}
}

bool resuelveCaso() {
	int n, mux =1;
	//Leer caso de prueba: cin>>...
	cin >> n;
	if (n==0)
		return false;

	//Resolver problema
	//Escribir resultado
	cout << recursion(n, mux) << "\n";
	return true;
}


int main() {

	// ajuste para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
	std::ifstream in("casos.txt");
	auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif

	while (resuelveCaso());

	// restablecimiento de cin
#ifndef DOMJUDGE
	std::cin.rdbuf(cinbuf);
	system("pause");
#endif
	return 0;
}*/
