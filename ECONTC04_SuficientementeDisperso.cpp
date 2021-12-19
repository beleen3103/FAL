
// NOMBRE Y APELLIDOS
/*
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

bool resuelve(vector<int> const& v, const int& d, const int& ini, const int& fin, const int& mitad) {
	if (fin - ini == 1) return true;
	else {
		bool disperso = true;
		if (abs(v[ini] - v[fin - 1]) >= d) {
			disperso = resuelve(v, d, ini, mitad, (ini + mitad) / 2);
			if (disperso) disperso = resuelve(v, d, mitad, fin, (fin + mitad) / 2);
			return disperso;
		}
		else return false;
	}
}


bool resuelveCaso() {

	//Leer caso de prueba: cin>>...
	int n, d, aux;
	vector<int> v;
	cin >> n >> d;
	if (!std::cin)
		return false;
	for (int i = 0; i < n; i++) {
		cin >> aux;
		v.push_back(aux);
	}

	//Resolver problema
	bool sol = resuelve(v, d, 0, n, n/2);
	//Escribir resultado
	cout << (sol ? "SI":"NO") << "\n";
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
}
*/