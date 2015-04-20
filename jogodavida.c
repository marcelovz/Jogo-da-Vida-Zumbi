#include <stdio.h>

#define TAM 5

void inicializaMatriz();
void carregaMatriz();
void imprimeMatriz(); 

int matrizAtual[TAM][TAM];
int matrizNova[TAM][TAM];

int main(){
	int geracoes;
	int g, i, j;
	int zumbi, vizinhosVivos;
	
	inicializaMatriz();
	
	carregaMatriz();
	
	imprimeMatriz();
	
	
	printf("Digite o número de gerações: ");
	scanf("%d", &geracoes);
	
	for(g=0; g<geracoes; g++){
		
		for(i=0; i<TAM; i++){
			for(j=0; j<TAM; j++){	
				zumbi=0;
				vizinhosVivos=0;
				
				if(i == 0 && j == 0)
				{
					//verifica o vizinho i, j+1
					if(matrizAtual[i][j+1] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i][j+1] == 2){
								zumbi++;
							}
					
					//verifica o vizinho i+1, j
					if(matrizAtual[i+1][j] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i+1][j] == 2){
								zumbi++;
							}
							
					//verifica o vizinho i+1, j+1
					if(matrizAtual[i+1][j+1] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i+1][j+1] == 2){
								zumbi++;
							}				
				} 
				
				if(i == 0 && j > 0 && j< TAM-1)
				{	
					//verifica o vizinho i, j-1
					if(matrizAtual[i][j-1] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i][j-1] == 2){
								zumbi++;
							}

					//verifica o vizinho i, j+1
					if(matrizAtual[i][j+1] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i][j+1] == 2){
								zumbi++;
							}
							
					//verifica o vizinho i+1, j-1
					if(matrizAtual[i+1][j-1] == 1){
						vizinhosVivos++;
						}
					else if(matrizAtual[i+1][j-1] == 2){
							zumbi++;
						}

					//verifica o vizinho i+1, j
					if(matrizAtual[i+1][j] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i+1][j] == 2){
								zumbi++;
							}

					//verifica o vizinho i+1, j+1
					if(matrizAtual[i+1][j+1] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i+1][j+1] == 2){
								zumbi++;
							}					
				}
				
				if(i == 0 && j == TAM-1)
				{
					//verifica o vizinho i, j-1
					if(matrizAtual[i][j-1] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i][j-1] == 2){
								zumbi++;
							}
					
					//verifica o vizinho i+1, j-1
					if(matrizAtual[i+1][j-1] == 1){
						vizinhosVivos++;
						}
					else if(matrizAtual[i+1][j-1] == 2){
							zumbi++;
						}

					//verifica o vizinho i+1, j
					if(matrizAtual[i+1][j] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i+1][j] == 2){
								zumbi++;
							}				
				}
				
				if(i > 0 && i < TAM-1 && j == 0)
				{
					//verifica o vizinho i-1, j
					if(matrizAtual[i-1][j] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i-1][j] == 2){
								zumbi++;
							}

					//verifica o vizinho i-1, j+1
					if(matrizAtual[i-1][j+1] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i-1][j+1] == 2){
								zumbi++;
							}
						
					//verifica o vizinho i, j+1
					if(matrizAtual[i][j+1] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i][j+1] == 2){
								zumbi++;
							}
					
					//verifica o vizinho i+1, j+1
					if(matrizAtual[i+1][j+1] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i+1][j+1] == 2){
								zumbi++;
							}	
							
					//verifica o vizinho i+1, j
					if(matrizAtual[i+1][j] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i+1][j] == 2){
								zumbi++;
							}
				}
				
				if(i == TAM-1 && j == 0)
				{
					//verifica o vizinho i-1, j
					if(matrizAtual[i-1][j] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i-1][j] == 2){
								zumbi++;
							}

					//verifica o vizinho i-1, j+1
					if(matrizAtual[i-1][j+1] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i-1][j+1] == 2){
								zumbi++;
							}
					
					//verifica o vizinho i, j+1
					if(matrizAtual[i][j+1] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i][j+1] == 2){
								zumbi++;
							}
				}
				
				if(i == TAM-1 && j > 0 && j < TAM-1)
				{
					//verifica o vizinho i, j-1
					if(matrizAtual[i][j-1] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i][j-1] == 2){
								zumbi++;
							}
					
					//verifica o vizinho i-1, j-1  
					if(matrizAtual[i-1][j-1] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i-1][j-1] == 2){
								zumbi++;
							}

					//verifica o vizinho i-1, j
					if(matrizAtual[i-1][j] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i-1][j] == 2){
								zumbi++;
							}

					//verifica o vizinho i-1, j+1
					if(matrizAtual[i-1][j+1] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i-1][j+1] == 2){
								zumbi++;
							}
					
					//verifica o vizinho i, j+1
					if(matrizAtual[i][j+1] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i][j+1] == 2){
								zumbi++;
							}
				}
				
				if(i == TAM-1 && j == TAM-1)
				{
					//verifica o vizinho i, j-1
					if(matrizAtual[i][j-1] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i][j-1] == 2){
								zumbi++;
							}
					
					//verifica o vizinho i-1, j-1  
					if(matrizAtual[i-1][j-1] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i-1][j-1] == 2){
								zumbi++;
							}
					
					//verifica o vizinho i-1, j
					if(matrizAtual[i-1][j] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i-1][j] == 2){
								zumbi++;
							}
				}
				
				if(i > 0 && i < TAM-1 && j == TAM-1)
				{
					//verifica o vizinho i-1, j
					if(matrizAtual[i-1][j] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i-1][j] == 2){
								zumbi++;
							}
							
					//verifica o vizinho i-1, j-1  
					if(matrizAtual[i-1][j-1] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i-1][j-1] == 2){
								zumbi++;
							}

					//verifica o vizinho i, j-1
					if(matrizAtual[i][j-1] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i][j-1] == 2){
								zumbi++;
							}
							
					//verifica o vizinho i+1, j-1
					if(matrizAtual[i+1][j-1] == 1){
						vizinhosVivos++;
						}
					else if(matrizAtual[i+1][j-1] == 2){
							zumbi++;
						}

					//verifica o vizinho i+1, j
					if(matrizAtual[i+1][j] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i+1][j] == 2){
								zumbi++;
							}
				}
				
				else{
					//verifica o vizinho i-1, j-1  
					if(matrizAtual[i-1][j-1] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i-1][j-1] == 2){
								zumbi++;
							}

					//verifica o vizinho i-1, j
					if(matrizAtual[i-1][j] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i-1][j] == 2){
								zumbi++;
							}

					//verifica o vizinho i-1, j+1
					if(matrizAtual[i-1][j+1] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i-1][j+1] == 2){
								zumbi++;
							}
						
					//verifica o vizinho i, j-1
					if(matrizAtual[i][j-1] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i][j-1] == 2){
								zumbi++;
							}

					//verifica o vizinho i, j+1
					if(matrizAtual[i][j+1] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i][j+1] == 2){
								zumbi++;
							}

					//verifica o vizinho i+1, j-1
					if(matrizAtual[i+1][j-1] == 1){
						vizinhosVivos++;
						}
					else if(matrizAtual[i+1][j-1] == 2){
							zumbi++;
						}

					//verifica o vizinho i+1, j
					if(matrizAtual[i+1][j] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i+1][j] == 2){
								zumbi++;
							}

					//verifica o vizinho i+1, j+1
					if(matrizAtual[i+1][j+1] == 1){
						vizinhosVivos++;
						}
						else if(matrizAtual[i+1][j+1] == 2){
								zumbi++;
							}	
						
					}
							
				
				
				 
		//Verifica as regras 			
		if(matrizAtual[i][j] == 1 && (zumbi >= 1 || vizinhosVivos == 8))
			matrizNova[i][j] = 2;
		
		else if(matrizAtual[i][j] == 2 && vizinhosVivos == 0)
				matrizNova[i][j] = 0;
			
		else if(matrizAtual[i][j] == 2 && vizinhosVivos >= 1)
			matrizNova[i][j] = 2;
			
		else if(matrizAtual[i][j] == 1 && (vizinhosVivos < 2 || vizinhosVivos > 3))
			matrizNova[i][j] = 0;
		
		else if(matrizAtual[i][j] == 0 && vizinhosVivos == 3)
			matrizNova[i][j] = 1;
		
		else if(matrizAtual[i][j] == 1 && (vizinhosVivos == 2 || vizinhosVivos == 3))
			matrizNova[i][j] = 1;
		
		else 
			matrizNova[i][j] = matrizAtual[i][j];
				
			}
		}
		
		//Copia da matriz provisória para a permanente
		for(i=0; i<TAM; i++){
			for(j=0; j<TAM; j++){
				matrizAtual[i][j] = matrizNova[i][j];		
			}
		}
		
		imprimeMatriz();
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
	printf("\n");
}

