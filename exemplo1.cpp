#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

#define LIN 5
#define COL 3

void mostra_matriz(int **x)
{
    for(int i=0; i<LIN; ++i)
	{
		for(int j = 0; j<COL; ++j)
		{
			cout << setw(5) << x[i][j] << " | ";
		}
		cout << endl;
	}
}


int main(int argc, char** argv)
{
	int i;
	int j;
	int k;
	
	// Declaração do array
	int **mat;
	
	// Inicialização de cada "linha" do aray
	mat = (int**)malloc(LIN * sizeof(int));
	
	for(i=0; i<LIN; ++i) // Percorre as linhas
	{
		mat[i] = (int*)malloc(COL * sizeof(int)); // Inicialização de cada coluna
	}
	// Fim da declaração do array
	
	k = 0;
	for(i=0; i<LIN; ++i)
	{
		for(j = 0; j<COL; ++j)
		{
			mat[i][j] = ++k;
		}
	}
	
	for(i=0; i<LIN; ++i)
	{
		for(j = 0; j<COL; ++j)
		{
			cout << setw(5) << mat[i][j] << " | ";
		}
		cout << endl;
	}
	
	cout << "=======================" << endl;
	mostra_matriz(mat);
	
	return 0;
}