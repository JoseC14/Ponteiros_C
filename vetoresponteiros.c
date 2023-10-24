#include <stdio.h>

//Função que mostra os números
void mostraNumeros(int numeros[]){
    int *ponteiro = numeros;
    int cont = 0;
    while(ponteiro <= &numeros[5])
    {
        if(cont == 0)
        {
            printf("[");
        }
        cont++;
        if(cont == 6){
            printf("%d",*ponteiro);
            printf("]");
        }else{
            printf("%d, ",*ponteiro);
        }
        
        ponteiro++;
       
    }
}

int somaNumeros(int numeros[])
{
    int soma = 0;
    int *ponteiro = numeros;
    while(ponteiro <= &numeros[5])
    {
        soma += *ponteiro;
        ponteiro++;
    }
    return soma;
}

float media(int numeros[])
{
    return somaNumeros(numeros)/6;
}

void numerosPares(int numeros[])
{
    int par;
    int *ponteiro = numeros;
    int cont = -1;
    int numerosPares[6];
    printf("Numeros pares");
    //Loop para armazenar os números pares
    while(ponteiro <= &numeros[6])
    {
        par = 0;

        if(*ponteiro % 2 == 0)
        {
            par = 1;
            cont++;
        }

        if(par){
            numerosPares[cont] = *ponteiro;
        }

        ponteiro++;
    }
    //Loop para printar os números pares
    for(int j = 0; j < cont; j++){
        if(j == 0)
        {
            printf("[");
        }

        if(j < cont - 1)
        {
            printf("%d,", numerosPares[j]);  
        }
        else
        {
            printf("%d", numerosPares[j]); 
            printf("]\n");
        }
    }
}

//Função que inverte os números
void inverteNumeros(int numeros[])
{
    int vetorInvertido[6];
    int *ponteiro = &numeros[5];

    int indice = 0;
    printf("Vetor Invertido: ");
    // loop para inverter o vetor;
    while(ponteiro >= &numeros[0])
    {
        vetorInvertido[indice] = *ponteiro;
        indice++;
        ponteiro--;
    }

     //Loop para printar os números pares
    for(int j = 0; j < 6; j++){
        if(j == 0)
        {
            printf("[");
        }

        if(j < 5)
        {
            printf("%d,", vetorInvertido[j]);  
        }
        else
        {
            printf("%d", vetorInvertido[j]); 
            printf("]\n");
        }
    }


}
int main(){
    int cont;
    char opcao;
    int numeros[6]; 
    while(1){
        cont = 0;
        while(cont < 6)
        {
            printf("Digite o numero %d de 6: ",cont+1);
            scanf("%d",&numeros[cont]);
            cont++;
        }
        //RESULTADOS
        mostraNumeros(numeros);
        printf("\nSoma dos numeros %d\n",somaNumeros(numeros));
        printf("Media: %1.f\n",media(numeros));
        numerosPares(numeros);
        inverteNumeros(numeros);
        getchar();
        chooseoption:
        printf("\nDeseja continuar?(S/N)");
        opcao = getchar();

        if(opcao == 'S' || opcao == 's')
        {
            continue;
        }
        else if(opcao == 'N' || opcao == 'n')
        {
            break;
        }
        else
        {
            printf("Opcao invalida");
            goto chooseoption;
        }
    }
}