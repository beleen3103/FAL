
// NOMBRE Y APELLIDOS
/*
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

bool esValido(const int& sol, int solProv, vector<int>const& minimos, const int& etapa) {
	if (solProv >= sol) return false;
	for (int i = etapa + 1; i < minimos.size(); i++) {
		solProv += minimos[i];
	}
	if (solProv >= sol) return false; //en el mejor caso no va a ser una solucion
	return true;
}

void esSolucion(int&sol, const int& solProv) {
	sol = solProv;
}

void vueltaAtras(vector<vector<int>>const& v, //vector con los datos
				int& sol, //solucion final
				int solProv, //suma de los tiempos hasta la etapa actual
				int const& n, //numero trabajadores
				vector<int>const& minimos, //poda
				vector<int> trabajos, //gente ya ocupada
				int etapa) {
	int i = 0;
	while (i < n) {
		if (trabajos[i] == 0) {
			solProv += v[i][etapa];
			if (esValido(sol, solProv, minimos, etapa)) {
				trabajos[i]++;
				if (etapa == n - 1) esSolucion(sol, solProv);
				else vueltaAtras(v, sol, solProv, n, minimos, trabajos, etapa + 1);
				trabajos[i]--;
			}
			solProv -= v[i][etapa];
		}
		
		i++;
	}

}

bool resuelveCaso() {

	//Leer caso de prueba: cin>>...
	int n;
	cin >> n;
	if (n == 0)
		return false;
	vector<vector<int>> v(n, vector<int>(n));
	vector<int> minimos(n), trabajos(n,0);
	int sol = 0, solProv = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++) {
			cin >> v[i][j];
			sol += v[i][j];
			if (i == 0) minimos[j] = v[i][j];
			else if (minimos[j] > v[i][j]) minimos[j] = v[i][j];
		}
	}

	//Resolver problema
	vueltaAtras(v, sol, solProv, n, minimos, trabajos, 0);
	//Escribir resultado
	cout << sol << "\n";
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