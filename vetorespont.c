
/*
    Programa que realiza operacoes com vetores e ponteiros
*/
#include <stdio.h>

/* retorna o valor da soma dos elementos do vetor */
int soma( int numeros[] ,int ultimoElemento)
{
	int soma = 0;
	int* ponteiro = numeros;
	while(ponteiro < &numeros[ultimoElemento])
	{
		if(*ponteiro == 0)
		{
			break;
		}
		soma += *ponteiro;
		ponteiro++;
	}
	return soma;
}

/* retorna a quatidade de elementos validos do vetor */
int tamanho( int numeros[] ,int ultimoElemento)
{	
	int tamanho = 0;
	int* ponteiro = numeros;
	while(ponteiro < &numeros[ultimoElemento])
	{
		if(*ponteiro == 0){
			break;
		}
		else
		{
			tamanho++;
		}
		ponteiro++;
	}
	return tamanho;
}

/* retorna media dos valores do vetor */
float media( int numeros[] ,int ultimoElemento)
{
    int* ponteiro = numeros;
    float media = soma(numeros,ultimoElemento)/tamanho(numeros,ultimoElemento);
    return media;
}

/* retira elementos repetidos do vetor */
void nao_repetido( int numeros[] ,int ultimoElemento)
{
	//ponteiro1 sempre tem que estar um indice a frente de ponteiro2
	int* ponteiro1 = numeros;
	int* ponteiro2 = numeros;
	int repetiu = 0;
	int cont = 0;
	int numsPercorridos[50];
	int *pontPercorrido = numsPercorridos;
	while(ponteiro1 < &numeros[ultimoElemento])
	{
		repetiu = 0;//variavel booleana para checar se um número foi repetido
		numsPercorridos[cont] = *ponteiro2;


		if(cont != 0)//Se cont for diferente de zero o ponteiro passará a ser o próximo indice do array
		//Assim podemos fazer com que ele esteja sempre um indice antes que o ponteiro1
		{
			ponteiro2++;
		}

		cont++;//Adiciona o contador
		if(cont > 1){ //Se o contador for maior que 1 ele irá checar se o valor do ponteiro está em numsPercorridos
			for(int i = 0; i < cont ; i++)
			{
				
				if(numsPercorridos[i] == *ponteiro1) 
				{
					repetiu = 1;
				}
			}
		}
		if(!repetiu){
			printf("%d, ",*ponteiro1);
		}
	
		ponteiro1++; //Adiciona ao ponteiro


		
		
	}
}

/* funcao principal */


void main() 
{
   // declaracao e inicializacao do vetor numeros
	int numeros[50] = {100,2,2,6,6,5,3,5,1};
	int ultimoElemento = sizeof(numeros)/sizeof(numeros[0]);
	printf("Tamanho do array %d", ultimoElemento);
	printf("Tamanho do array %d \n", ultimoElemento);
	printf("Soma de numeros = %d \n", soma(numeros,ultimoElemento));
	printf("Numero de elementos = %d \n", tamanho(numeros,ultimoElemento));
	printf("Media = %1.f\n", media(numeros,ultimoElemento));
	nao_repetido(numeros,ultimoElemento);

}