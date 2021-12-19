
// NOMBRE Y APELLIDOS
/*
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;


int divide(vector<int> v, int ini, int fin, int mitad) {
	//casos base: que el vector solo tenga 1 o 2 elementos
	if (v.size() ==1) return v[ini];
	else if (v.size() == 2) {
		if (v[0] < v[1]) return v[0];
		else return v[1];
	}
	//divide y venceras: busqueda binaria
	else {
		if (mitad == v.size()-1 && v[mitad] < v[mitad-1] || mitad == 0 && v[mitad] < v[mitad+1] || v[mitad] < v[mitad - 1] && v[mitad] < v[mitad + 1]) return v[mitad];
		else if (v[mitad] > v[mitad + 1]) return divide(v, mitad, fin, (fin + mitad) / 2);
		else if (v[mitad] > v[mitad - 1]) return divide(v, ini, mitad, (mitad + ini) / 2);		
	}
}

//Pre: {0< n <= N ^ (!Ex. i: 0 <= i < N-1 : v[i] = v[i+1])}
bool resuelveCaso() {
	int n, aux;
	vector<int> v;
	//Leer caso de prueba: cin>>...
	cin >> n;
	if (!std::cin)
		return false;
	for (int i = 0; i < n; i++) {
		cin >> aux;
		v.push_back(aux);
	}

	//Resolver problema
	 cout << divide(v, 0, n, n/2) << "\n";
	//Escribir resultado
	return true;
}
//Pos: {ret = min i: 0 <= i < v.size() : v[i]}

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