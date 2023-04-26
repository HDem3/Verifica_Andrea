//Metto qua la tua verifica 
#include <iostream>
#include <cmath>

using namespace std;

#define MAX 50
#define VAL_MIN 0
#define	VAL_MAX	10

void init(int mat[MAX][MAX], int dim );
void stampa_somma(int mat1[MAX][MAX], int mat2[MAX][MAX], int dim);
void stampa_prod(int mat1[MAX][MAX], int mat2[MAX][MAX], int dim);
void stampa(int mat[MAX][MAX], int dim);
int casuale(int min, int max);



/*------------------------------------------------------------*/

int main(){
    srand(time(0));
    int dim;
    cout << "Enter the dimension of the matrix: ";
    cin >> dim;
    int mat1[MAX][MAX];
    int mat2[MAX][MAX];
    
    init(mat1, dim);
    init(mat2, dim);
    cout<<"Matrice 1:\n";
    stampa(mat1,dim);
    cout<<"Matrice 2:\n";
    stampa(mat2,dim);
    cout<<"\n";
    stampa_somma(mat1, mat2, dim);
    cout<<"\n";
    stampa_prod(mat1, mat2, dim);

    return 0;
}

/*-----------------------------------------------------------------*/

void stampa_prod(int mat1[MAX][MAX], int mat2[MAX][MAX], int dim){
    int ris[MAX][MAX];
    for(int i=0; i<dim; i++){
        for(int j=0; j<dim; j++){
            ris[i][j] = mat1[i][j] * mat2[i][j];
        }
    }
    cout<<"Matrice prodotto: "<<endl;
    stampa(ris, dim);

}

void stampa_somma(int mat1[MAX][MAX], int mat2[MAX][MAX], int dim){
    int ris[MAX][MAX];
    for(int i=0; i<dim; i++){
        for(int j=0; j<dim; j++){
            ris[i][j]= mat1[i][j] + mat2[i][j];
        }
    }
    cout<<"Matrice somma: "<<endl;
    stampa(ris, dim);
}

void stampa(int mat[MAX][MAX], int dim){
	for (int i=0; i<dim; i++) {
		for (int j=0; j<dim; j++) {
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}

void init(int mat[MAX][MAX], int dim ){
    for(int i=0; i<dim; i++){
        for(int j=0; j<dim; j++){
            mat[i][j] = casuale(VAL_MIN, VAL_MAX);
        }
    }
}

int casuale(int min, int max){
	return rand()%(max-min+1)+min;
}
