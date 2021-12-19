//NOMBRE y APELLIDOS

/*
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int resolver(vector<int> const& v, const int k) {
	int i = 0, segPar = 0, segActual = 0, max=0;

	while (i < v.size()) {
		if (v[i] % 2 == 0) { //si el numero es par
			segPar++;//par++
			if (segPar > k) { //si es mayor que k ya no vale
				if (segActual > max) max = segActual; 
				segActual = k; //el segmento se reinicia hasta 1 despues de que inicie la secuencia de pares
				segPar--;//quitamos uno de la lista de pares consecutivos
			}
			else segActual++;
		}
		else {
			if (segPar != 0) segPar = 0; //si el numero es impar, se rompe cualquier secuencia de pares
			segActual++;
		}
		
		i++;
	}
	if (segActual > max) max = segActual;
	return max;
}

void resuelveCaso() {
	//resuelve aqui tu caso
	int n, k, aux;
	vector<int> v;
	   //Lee los datos
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> aux;
		v.push_back(aux);
	}
	   //Calcula el resultado
	cout << resolver(v, k) << "\n";
	   //Escribe el resultado
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