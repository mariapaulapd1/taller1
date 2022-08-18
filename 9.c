/***********************************************************
 * Fecha: 10-Agosto-2022
 * Autor: Kevin Fabian Chepe
 * Materia: Parallel and Distributed Computing
 * Tema: Introducción Leguaje de Programación C
 * Tópico: Taller C
 * Fase 01: Producto entre dos enteros
 ***********************************************************/
 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int valorMat(){
	int x;
	printf("Ingrese el tamaño N de la matriz (maximo 7): ");
	scanf("%d", &x);

	while(x<1 || x>7 ){
	printf("Por favor ingrese un tamaño valido!");
	printf("\nTamaño: ");
	scanf("%d",&x);
	}
	
	return x;
}

void matrizRandom2(int random[], int random2[], int size){
	int i, a;		
	srand(time(NULL));
	for(i=0; i<size; i++){
		for(a=0; a<size; a++){
			random[i+a*size]=rand()%10;
			random2[i+a*size]=rand()%10;

		}
	}
	printf("Matriz 1: \n");
	for(i=0; i<size; i++){
		for(a=0; a<size; a++){
			printf("%d ", random[i+a*size]);
		}
		printf("\n");
	}
	printf("Matriz 2: \n");
	for(i=0; i<size; i++){
		for(a=0; a<size; a++){
			printf("%d ", random2[i+a*size]);
		}
		printf("\n");
	}

}

void restaMatriz(int matrizA[],int matrizB[],int matrizC[], int size){
	int i, a;		
	printf("Resultado de la resta: \n");
	for(i = 0; i <size;i++){
		for(a = 0; a<size; a++){
			printf(" %d", matrizC[i+a*size]= matrizA[i+a*size]-matrizB[i+a*size]);
		}
		printf("\n");
	}

}

void main(){
	int sizeM, total;
	sizeM=valorMat();
	total=sizeM*sizeM;
	int resta[total], a[total], b[total];					
	matrizRandom2(resta,a,sizeM);
	restaMatriz(resta, a, b, sizeM);
}

