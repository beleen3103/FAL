//NOMBRE y APELLIDOS
/*

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

bool esValido(vector<int> const& maquinas, vector<int> const& carreteras, vector<int> const& solProv, const int& etapa) {
	if (solProv[etapa] == -1) return true; //si no se asigna ninguna caretera es valido
	if (carreteras[solProv[etapa]] < maquinas[etapa]) return false; //si el tamaño de la carretera no es suficiente, false
	return true;
}

bool esPrometedor(vector<int>const& poda,const int& etapa,const int& calMax, const int& calProv){
	int maxEsperable = calProv + poda[etapa];
	return (maxEsperable > calMax);
}

void esSolucion(int& calMax, const int& calProv) {
	calMax = calProv;
}

void resolver(vector<int> const& maquinas, //anchura maquinas
	vector<int> const& carreteras, //anchura carreteras
	vector<vector<int>>const& calidad, //relacion [maquina][carretera]
	vector<bool>& asignadas, //carreteras que ya tienen maquina (1) o no (0)
	vector<int> const& maximos, //maxima calidad que se puede conseguir por maquina. Poda
	vector<int>& solProv, //relacion provisional
	int& calProv, //calidad de momento
	int& calMax, //solucion
	const int& nCar, //nº carreteras
	const int& m, //nº maquinas
	const int etapa) //de 0 a m
{
	int i = -1;

	while (i < nCar) {
		if (i == -1 || !asignadas[i]) {
			solProv[etapa] = i; //asignamos una carretera a una maquina
			if(i != -1)calProv += calidad[etapa][i]; //sumamos la calidad
			if (esValido(maquinas, carreteras, solProv, etapa) && esPrometedor(maximos, etapa, calMax, calProv)) {
				if(i != -1)asignadas[i] = true;
				if (etapa == m - 1)
					esSolucion(calMax, calProv);
				else 
					resolver(maquinas, carreteras, calidad, asignadas, maximos, solProv, calProv, calMax, nCar, m, etapa + 1);
				if(i != -1) asignadas[i] = false;
			}
			if (i!=-1)calProv -= calidad[etapa][i];
		}
		i++ ;
	}
}

void resuelveCaso() {
	//resuelve aqui tu caso
	int n, m, aux;
	vector<int> maquinas, carreteras;
	cin >> m >> n;
	   //Lee los datos
	for (int i = 0; i < m; i++) {
		cin >> aux;
		maquinas.push_back(aux);
	}
	for (int i = 0; i < n; i++) {
		cin >> aux;
		carreteras.push_back(aux);
	}
	
	vector<vector<int>> calidad(m, vector<int>(n));
	vector<int> maximos(m); //maxima calidad que puede conseguir cada maquina;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> calidad[i][j];
			if (j == 0) maximos[i] = calidad[i][j];
			else if (maximos[i] < calidad[i][j]) maximos[i] = calidad[i][j];
		}
	}
	vector<int> solProv(m);
	vector<bool> asignadas(n, false);
	vector<int>poda(m, 0);
	for (int i = maximos.size() - 2; i >= 0; i--) {
		poda[i] = maximos[i+1] + poda[i + 1];
	}
	int calProv = 0, calMax = 0;
	   //Calcula el resultado
	if(m != 0) resolver(maquinas, carreteras, calidad, asignadas, poda, solProv, calProv, calMax, n,m, 0);

	   //Escribe el resultado
	cout << calMax << "\n";
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