
// NOMBRE Y APELLIDOS
/*
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int resuelve(vector<int> v, int ini, int fin, int mitad) {
	
	if (v.size() == 1 || fin - ini ==1) return v[ini];
	else if (v[mitad] > v[ini]) return resuelve(v, ini, mitad, (mitad + ini) / 2);
	else return resuelve(v, mitad, fin, (mitad + fin) / 2);

}

bool resuelveCaso() {

	//Leer caso de prueba: cin>>...
	int n, aux;
	vector<int> v;
	cin >> n;
	if (!std::cin)
		return false;
	for (int i = 0; i < n; i++) {
		cin >> aux;
		v.push_back(aux);
	}

	//Resolver problema
	//Escribir resultado
	if(n!=0)cout << resuelve(v, 0, n, n / 2) << "\n";
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