#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void inicializaMatriz();
void carregaMatriz(char *nome);
void imprimeMatriz(); 
void salvaMatriz(char *nome);

int matrizAtual[1000][1000];
int matrizNova[1000][1000];
int TAM;
char *arq_entrada, *arq_saida;

int main(){
	int geracoes;
	int g, i, j;
	int zumbi, vizinhosVivos;
	char arq[200];
	
	//Entrada dos dados via terminal
	scanf("%d %d %[^\n]s", &TAM, &geracoes, arq);
	arq_entrada = strtok(arq, " ");
	arq_saida = strtok(NULL, " ");
	
	inicializaMatriz();
	carregaMatriz(arq_entrada);
	printf("\n1ª geração:\n");
	imprimeMatriz();
	
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
		printf("%dª geração:\n", g+2);
		imprimeMatriz();
	}
	
	salvaMatriz(arq_saida);
	
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

void carregaMatriz(char *nome) {
	FILE *arq; 
	int linha, coluna, valor;
	
	arq = fopen(nome, "r");
	
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

void salvaMatriz(char *nome){
	FILE *arq;
	int i, j;
	int contZumbi=0, contVivos=0, contMortos=0;
	
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			if(matrizAtual[i][j] == 0){
				contMortos++;
			}
			else if(matrizAtual[i][j] == 1){
					contVivos++;				
				}
				else contZumbi++;	
		} 
	}
	arq = fopen(nome, "w");
	//fprintf(arq, "%d %d %d", contVivos, contZumbi, contMortos);
	
	fprintf(arq, "%d células vivas\n", contVivos);
	fprintf(arq, "%d células zumbi\n", contZumbi);
	fprintf(arq, "%d células mortas", contMortos);
	
	fclose(arq);
}

