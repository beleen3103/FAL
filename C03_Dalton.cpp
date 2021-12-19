
// NOMBRE Y APELLIDOS
/*
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

bool resolver(const vector<long int>& gente) {
	bool dalton = true;
	int i = 1;
	if (gente[0] < gente[1]) {
		while (dalton && i < gente.size() - 1) {
			if (gente[i] >= gente[i + 1]) dalton = false;
			i++;
		}
	}
	else if (gente[0] > gente[1]) {
		while (dalton && i < gente.size() - 1) {
			if (gente[i] <= gente[i + 1]) dalton = false;
			i++;
		}
	}
	else dalton = false;
	return dalton;
}


bool resuelveCaso() {

	//Leer caso de prueba: cin>>...
	int nDalton, aux;
	vector<long int> gente;
	cin >> nDalton;
	if (nDalton == 0)
		return false;
	for (int i = 0; i < nDalton; i++) {
		cin >> aux;
		gente.push_back(aux);
	}

	cout << (resolver(gente) ? "DALTON" : "DESCONOCIDOS");
	cout << "\n";
	//Resolver problema
	//Escribir resultado
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