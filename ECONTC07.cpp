
// NOMBRE Y APELLIDOS
/*
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

typedef struct {
	int duracion;
	int puntuacion;
} canciones;

bool esValido(vector<canciones> const& v, const int& cara, vector<int>& durProv, const int& c, int& puntProv, const int& puntMax, const int& etapa, vector<int> const& poda) {
	bool correcto = false;
	if (c == 0) correcto = true;

	else if (c == 1 && cara - durProv[0] >= v[etapa].duracion) {
		durProv[0] += v[etapa].duracion;
		puntProv += v[etapa].puntuacion;
		correcto = true;
	}
	else if (c == 2 && cara - durProv[1] >= v[etapa].duracion) {
		durProv[1] += v[etapa].duracion;
		puntProv += v[etapa].puntuacion;
		correcto =  true;
	}
	//poda
	if (correcto) {
		//int aux = 0;
		
		if ((poda[etapa] + puntProv) <= puntMax) return false; //ni en el mejor caso nos sirve
		else return true;
	}
	
	
	return correcto;
}

void resolver(vector<canciones>const& v, //vector con los datos
			const int& n, //numero de canciones
			const int& cara, //tamaño de una cara
			vector<int> durProv, //duracion hasta el momento en cada cara
			int puntProv,
			int& puntMax,
	const int& etapa,
	vector<int>const& poda) //solucion) 
{
	int c = 0;
	
	//while (i < n) {
		while (c < 3) { //0 no la pongo, 1 la pongo en la cara 1, 2 la pongo en la cara 2
			if (esValido(v, cara, durProv, c, puntProv, puntMax, etapa, poda)) {
					if (etapa == n - 1) { if (puntProv > puntMax)puntMax = puntProv; } //si es una solucion mejor que la actual, se actualiza
					else resolver(v, n, cara, durProv, puntProv, puntMax, etapa+1, poda); //siguiente cancion
				if(c !=0) {
					durProv[c-1] -= v[etapa].duracion;
					puntProv -= v[etapa].puntuacion;
				}
			}
			c++;
		}
		
}

bool resuelveCaso() {
	int n, cara;
	//Leer caso de prueba: cin>>...
	cin >> n;
	if (n == 0)
		return false;
	cin >> cara;

	vector<canciones> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].duracion;
		cin >> v[i].puntuacion;
	}


	//Resolver problema
	//vector<vector<int>> solProv(2,vector<int>());
	vector<int> duracionProv(2, 0);
	vector<bool> usadas(n, false);
	vector<int> poda(n, 0);
	for (int i = n-2; i >=0; i--) {
		poda[i] = poda[i + 1] + v[i+1].puntuacion;
	}
	int puntMax = 0;
	resolver(v, n, cara, duracionProv, 0, puntMax, 0, poda);
	//Escribir resultado

	cout << puntMax << "\n";
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