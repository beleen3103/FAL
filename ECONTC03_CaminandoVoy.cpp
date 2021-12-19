
// NOMBRE Y APELLIDOS
/*
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

bool resolver(vector<int> v, const int& d) {
	int i = 1, ini, fin;
	bool correcto = true;

	//Funcion de cota: v.size() - i - 1
	//{I: ini < fin}
	//{I: 0 < i < v.size()}
	while (i < v.size() && correcto) {
		if (v[i] > v[i - 1]) {
			ini = v[i - 1];
			while (i < v.size() && v[i] > v[i - 1]) {
				i++;
			}
			fin = v[i - 1];
			if (fin - ini > d) correcto = false;
		}
		i++;
	}
	return correcto;
}

//Pre:{ 0 <= D <= 1000000 ^ 0 < n < 200000 }
bool resuelveCaso() {

	//Leer caso de prueba: cin>>...
	int D, n, aux;
	vector<int> v;
	cin >> D >> n;
	if (!std::cin)
		return false;
	for (int i = 0; i < n; i++) {
		cin >> aux;
		v.push_back(aux);
	}

	//Resolver problema
	cout << (resolver(v, D) ? "APTA":"NO APTA") << "\n";
	//Escribir resultado
	return true;
}
//Pos:{ret = (!Ex. i,j : 0 <= i < j < v.size() ^ creciente(i,j) : j-i > D)}
// siendo creciente(i,j) = (P.t. x, y: i <= x < y <= j : v[x] < v[y])


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