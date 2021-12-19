
// NOMBRE Y APELLIDOS
/*
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;


//coste siendo a=2, k = 0 y b= 2, segun el teorema de la division se cumple que a > b^k por lo que es O(n^log base 2 de 2) = O(n)
int resolver(vector<int> const& v, bool& degradado, int ini, int fin, int mitad) {
	if (fin - ini == 1) {	
		return v[ini];
	}
	else {
		int iz, der;
		iz = resolver(v, degradado, ini, mitad, (ini + mitad) / 2);		
		der = resolver(v, degradado, mitad, fin, (fin + mitad) / 2);
			
		if (iz >= der) degradado = false;
		return iz + der;
		
	}

}

bool resuelveCaso() {

	//Leer caso de prueba: cin>>...
	int filas, columnas, aux, i = 0;
	vector<int> v;
	cin >> filas >> columnas;
	if (!std::cin)
		return false;
	bool degradado = true;
	while(i<filas) {
		for (int j = 0; j < columnas; j++) {
			cin >> aux;
			v.push_back(aux);
		}
		if(degradado) resolver(v, degradado, 0, columnas, columnas/2);
		v.clear();
		i++;
	}

	//Resolver problema
	//Escribir resultado
	cout << (degradado ? "SI" : "NO") << "\n";
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