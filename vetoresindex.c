//ALUNO: JOSÉ CARLOS PEREIRA VIEIRA
// 2 SEMESTRE EM BACHARELADO EM CIÊNCIA DA COMPUTAÇÃO

#include <stdio.h>

//Função que mostra os números
void mostraNumeros(int numeros[6],int tamanho)
{
     for(int i = 0; i < tamanho ; i++)
        {
            if(i == 0)
            {
                printf("[");
            }
            if(i < tamanho - 1)
            {
                printf("%d,", numeros[i]);  
            }
            else
            {
                printf("%d", numeros[i]); 
                printf("]\n");
            }
        }
}
// Função que soma os números
int somaNumeros(int numeros[6],int tamanho)
{
    int soma = 0;
    for(int i = 0; i < tamanho; i++)
    {
        soma+=numeros[i];
    }

    return soma;
}

// Função para a média dos números
float mediaNumeros(int numeros[6],int tamanho)
{
    return somaNumeros(numeros,tamanho)/tamanho;
}

// Função que imprime os números pares
void numerosPares(int numeros[6], int tamanho)
{
    int par;
    int cont = -1;
    int numerosPares[6];
    printf("Numeros pares");
    //Loop para armazenar os números pares
    for(int i = 0; i <= tamanho; i++){
        par = 0;

        if(numeros[i] % 2 == 0)
        {
            par = 1;
            cont++;
        }

        if(par){
            numerosPares[cont] = numeros[i];
        }
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
void inverteNumeros(int numeros[6],int tamanho)
{
    int vetorInvertido[6];
    printf("Vetor Invertido: ");
    // loop para inverter o vetor;
    for(int i = 0; i <= tamanho; i++)
    {
        vetorInvertido[i-1] = numeros[tamanho - i];
    }

     //Loop para printar os números pares
    for(int j = 0; j < tamanho; j++){
        if(j == 0)
        {
            printf("[");
        }

        if(j < tamanho - 1)
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

//Função principal
int  main()
{
    int numeros[6];
    int cont;
    char opcao;

    while(1)
    {
        cont = 0;
        while(cont < 6)
        {
            printf("Digite o numero %d de 6: ",cont+1);
            scanf("%d",&numeros[cont]);
            cont++;
        }
        //RESULTADOS
        mostraNumeros(numeros,cont);
        printf("Soma dos elementos %d\n",somaNumeros(numeros,cont));
        printf("Media: %1.f \n",mediaNumeros(numeros,cont));
        numerosPares(numeros,cont);
        inverteNumeros(numeros,cont);
        getchar();
        chooseoption:
        printf("Deseja continuar?(S/N)");
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

    return 0;


}