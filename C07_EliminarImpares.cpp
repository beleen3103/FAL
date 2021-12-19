
// NOMBRE Y APELLIDOS
/*
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

//coste O(n) siendo n el tamaño de v
void resolver(vector<int>&v) {
	int i = 0;
	while (i < v.size()) {
		if (v[i] % 2 == 1) {
			v.erase(v.begin() + i); //begin es 0 y es el iterador
		}
		else i++;
	}
}

bool resuelveCaso() {
	int n, aux;
	vector<int> v;
	//Leer caso de prueba: cin>>...
	cin >> n;
	if (n == -1)
		return false;

	for (int i = 0; i < n; i++) {
		cin >> aux;
		v.push_back(aux);
	}

	resolver(v);

	//Resolver problema
	//Escribir resultado
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << "\n";
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