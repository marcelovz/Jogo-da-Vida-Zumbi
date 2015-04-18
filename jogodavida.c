#include <stdio.h>

#define TAM 5

void inicializaMatriz();
void carregaMatriz();
void imprimeMatriz(); 

int matrizAtual[TAM][TAM];

int main(){
	int geracoes;
	int i, j, k;
	
	inicializaMatriz();
	
	carregaMatriz();
	
	imprimeMatriz();
	
	
	printf("Digite o número de gerações: ");
	scanf("%d", &geracoes);
	
	for(i=0; i<geracoes; i++){
		
		for(j=0; j<TAM; j++){
			for (k=0; k<TAM; k++){
				zumbi=0;
				vivos=0;
				
				
			}
		}
		
		
	}
	
	
	
	
	/*getchar();*/
	return 0;	
}

void inicializaMatriz (){
	int i, j;
	
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			matrizAtual[i][j] = 0;	
		} 
	}
}

void carregaMatriz() {
	FILE *arq; 
	int linha, coluna, valor;
	
	arq = fopen("entrada.txt", "r");
	
	while(fscanf(arq, "%d,%d %d\n", &linha, &coluna, &valor) != EOF){	
		matrizAtual[linha-1][coluna-1] = valor;
	}
	
	fclose(arq);
	
}

void imprimeMatriz() {
	int i, j;
	
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			printf("%d ", matrizAtual[i][j]);	
		} 
		printf("\n");
	}
}
