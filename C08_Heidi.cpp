
// NOMBRE Y APELLIDOS
/*
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

vector<int> resolver(vector<int> const& v, const int& l, int& llanos, int& longMax) {
	int i = v.size()-1;
	int ini = 0, longitud = 0, maxAltura = 0;;
	vector<int> llanosIni;
	while(i>0){
		if (maxAltura < v[i]) maxAltura = v[i];
		if (v[i] >= maxAltura && v[i] == v[i - 1]) {
			ini = i;
			while (i > 0 && v[i] == v[i - 1]) {
				longitud++;
				i--;
			}
			longitud++;
			if (longitud >= l) {
				llanosIni.push_back(ini);
				llanos++;
				if (longMax < longitud) longMax = longitud;
			}
		}
		else i--;
		longitud = 0;
	}
	return llanosIni;
}

bool resuelveCaso() {

	//Leer caso de prueba: cin>>...
	int n, l, aux;
	vector<int> v;
	cin >> n >> l;
	if (!std::cin)
		return false;
	for (int i = 0; i < n; i++) {
		cin >> aux;
		v.push_back(aux);
	}
	int llanos = 0, longitud =0;
	//Resolver problema
	vector<int> sol = resolver(v, l, llanos, longitud);
	//Escribir resultado
	cout << longitud << " " << llanos << " ";
	for (int i = 0; i < sol.size(); i++) {
		cout << sol[i] << " ";
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