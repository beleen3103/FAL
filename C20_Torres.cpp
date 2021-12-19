
// NOMBRE Y APELLIDOS
/*
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

//azul-> 0, rojo->1, verde->2

void esSolucion(vector<int> v, vector<vector<int>>& sol) {
	sol.push_back(v);
	
}

bool esValida(vector<int> v, const int& n) {
	bool esCorrecto = true;
	int i =0, azul =0, verde=0, rojo = 0;

	while (i < v.size() && esCorrecto) {
		if (v[i] == 0) azul++;
		else if (v[i] == 1) rojo++;
		else if (v[i] == 2) {
			verde++;
			if (v[i - 1] == 2) esCorrecto = false; //dos verdes seguidos
		}
		if (i == 0 && v[i] != 1) esCorrecto = false; //el primero no es rojo
		if (verde > azul) esCorrecto = false; //hay mas verdes que azules
		i++;
	}
	if (v.size() == n) if (rojo <= azul + verde) esCorrecto = false; //caso final: el rojo no es mayor
	return esCorrecto;
}

void vueltaAtras(vector<int> v, vector<vector<int>>& solucion, vector<int> colores, const int& n, int pos) {
		if (v.empty() && colores[1] > 0) {
			v.push_back(1);
			colores[1]--;
			vueltaAtras(v, solucion, colores, n, pos+1);
		}
		else {
			int i = 0;
			while (i < 3) {
				if (colores[i] > 0) {
					v.push_back(i);
					if (esValida(v, n)) {
						if (pos == n - 1) esSolucion(v, solucion);
						else {
							colores[i]--;
							vueltaAtras(v, solucion, colores, n, pos + 1);
							colores[i]++;
						}
					}
					v.pop_back();
				}
				i++;
			}
		}	
}

bool resuelveCaso() {

	//Leer caso de prueba: cin>>...
	int  n, aux;
	cin >> n;
	if (n == 0)
		return false;
	vector<int> sol;
	vector<int>colores;
	vector<vector<int>> solucion;
	for (int i = 0; i < 3; i++) {
		cin >> aux;
		colores.push_back(aux);
	}
	vueltaAtras(sol, solucion, colores, n, 0);

	if (solucion.empty()) cout << "SIN SOLUCION\n";
	else {
		for (int j = 0; j < solucion.size(); j++) {
			for (int i = 0; i < solucion[j].size(); i++) {
				if (solucion[j][i] == 0) cout << "azul ";
				else if (solucion[j][i] == 1) cout << "rojo ";
				else if (solucion[j][i] == 2) cout << "verde ";
			}
			cout << "\n";
		}
	}
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