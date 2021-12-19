//NOMBRE y APELLIDOS

/*
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

//Coste O(n) siendo n el tamaño del vector porque siempre recorremos el vector una sola vez
//Pre: {0 < n < N}
int resuelve(vector<int> const& v) {
	int lMax = 0;
	int l = 0, i = 1, mejorMarca = v[0];
	//{I: i < v.size()}
	//{I: l = i,j: 0 < i < j < v.size() ^ (!Ex. x: i < x <= j ^v[x] > mejorMarca) : j- i)}
	//{I: lMax = max(l)}}
	//Funcion de cota: v.size()-i+1
	while (i < v.size()) {
		if (v[i] > mejorMarca) mejorMarca = v[i]; //la marca mejora
		else {
			while (i < v.size() && v[i] <= mejorMarca) { //mientras que no se mejore la marca, avanzamos
				l++;
				i++;
			}
			if(i < v.size())mejorMarca = v[i]; //si no se ha terminado de recorrer el vector es que se ha encontrado una marca mejor
			if (lMax < l) lMax = l; //guardamos la mayor longitud sin mejorar
			l = 0; //reiniciamos variable auxiliar
		}
		i++;
	}
	return lMax;
}
//Pos: {ret = max(i,j: 0 < i < j < v.size() ^ !Ex.(x, i, j: i < x < = j ^ v[x] > mejorMarca: x): j - i }

void resuelveCaso() {
	//resuelve aqui tu caso
	int n, aux;
	vector<int> v;
	   //Lee los datos
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> aux;
		v.push_back(aux);
	}
	   //Calcula el resultado
	int sol = resuelve(v);
	   //Escribe el resultado
	cout << sol << "\n";
}


int main() {
	// Para la entrada por fichero.
#ifndef DOMJUDGE
	std::ifstream in("casos.txt");
	auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif


	unsigned int numCasos;
	std::cin >> numCasos;
	// Resolvemos
	for (int i = 0; i < numCasos; ++i) {
		resuelveCaso();
	}


#ifndef DOMJUDGE // para dejar todo como estaba al principio
	std::cin.rdbuf(cinbuf);
	system("PAUSE");
#endif

	return 0;
}
*/