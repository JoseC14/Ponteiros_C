//ALUNO: JOSÉ CARLOS PEREIRA VIEIRA

//INCLUSÃO DE BIBLIOTECAS
#include <stdio.h>
#include <locale.h>

//FUNÇÃOD DE SOMA
void soma(int dimensoes[4],int matriz1[dimensoes[0]][dimensoes[1]], int matriz2[dimensoes[2]][dimensoes[3]])
{
    int cont = 0;
    int cont2 = 0;

    int matrizSoma[dimensoes[0]][dimensoes[1]];

    if(dimensoes[0] != dimensoes[2] || dimensoes[1] != dimensoes[3])
    {
        printf("Matriz de dimensoes diferentes\n");
        
    }else{
        while(cont < dimensoes[0]){
            while(cont2 < dimensoes[1])
            {

                matrizSoma[cont][cont2] = matriz1[cont][cont2] + matriz2[cont][cont2];
                cont2++;

            }
            cont2 = 0;
            cont++;
        }

        for(int i = 0; i < dimensoes[0] ; i++)
        {
            for(int j = 0; j < dimensoes[1]; j++)
            {
                printf("%d ",matrizSoma[i][j]);
            }
        }

    }

    
   
}

//FUNÇÃO DE SUBTRAÇÃO
void subtracao(int dimensoes[4],int matriz1[dimensoes[0]][dimensoes[1]], int matriz2[dimensoes[2]][dimensoes[3]])
{
    int cont = 0;
    int cont2 = 0;

    int matrizSoma[dimensoes[0]][dimensoes[1]];

    if(dimensoes[0] != dimensoes[2] || dimensoes[1] != dimensoes[3])
    {
        printf("Matriz de dimensoes diferentes\n");
        
    }else{
        while(cont < dimensoes[0]){
            while(cont2 < dimensoes[1])
            {

                matrizSoma[cont][cont2] = matriz1[cont][cont2] - matriz2[cont][cont2];
                cont2++;

            }
            cont2 = 0;
            cont++;
        }

        for(int i = 0; i < dimensoes[0] ; i++)
        {
            for(int j = 0; j < dimensoes[1]; j++)
            {
                printf("%d ",matrizSoma[i][j]);
            }
        }

    }

    
   
}

//FUNÇÃO DE MULTIPLICAÇÃO
void multiplicacao(int dimensoes[4],int matriz1[dimensoes[0]][dimensoes[1]], int matriz2[dimensoes[2]][dimensoes[3]])
{
    int cont  = 0;
    int cont2 = 0;

    int x,y,temp = 0;
    int matrizMult[dimensoes[0]][dimensoes[1]];

    if(dimensoes[1] != dimensoes[2] || dimensoes[0] != dimensoes[3])
    {
        printf("Matriz de dimensoes diferentes\n");
        
    }else{
        while(cont < dimensoes[0]*dimensoes[2])
        {
            matrizMult[x][y] = matriz1[cont][cont2] * matriz2[cont2][cont] + matriz1[cont][cont2+ 1] * matriz2[cont2+1][cont];
            cont++;
            cont2++;
            y++;
            if(y == dimensoes[1])
            {
                x++;
                y = 0;
            }
        }

        for(int i = 0; i <= dimensoes[1] ; i++)
        {
            for(int j = 0; j <= dimensoes[1]; j++)
            {
                printf(" %d ",matrizMult[i][j]);
            }
        }
    }

    
   
}

//MULTIPLICAÇÃO REAL
void multReal(int dimensoes[4],int matriz1[dimensoes[0]][dimensoes[1]])
{
    int cont = 0;
    int cont2 = 0;

    int matrizReal[dimensoes[0]][dimensoes[1]];
    while(cont < dimensoes[0]){
        while(cont2 < dimensoes[1])
        {

            matrizReal[cont][cont2] = matriz1[cont][cont2] * 2;
            cont2++;

        }
        cont2 = 0;
        cont++;
    }

    for(int i = 0; i < dimensoes[0] ; i++)
    {
        for(int j = 0; j < dimensoes[1]; j++)
        {
            printf("%d ",matrizReal[i][j]);
        }
    }

}
void main()
{
    while(1){
        int dimensoes[4];
        int cont = 0;
        int cont2 = 0;
        printf("Digite o numero de linhas da primeira matriz: ");
        scanf("%d",&dimensoes[0]);
        printf("Digite o numero de colunas da primeira matriz: ");
        scanf("%d",&dimensoes[1]);
        
        printf("Digite o numero de linhas da segunda matriz: ");
        scanf("%d",&dimensoes[2]);
        printf("Digite o numero de colunas da segunda matriz: ");
        scanf("%d", &dimensoes[3]);

        int x[dimensoes[0]][dimensoes[1]];
        int y[dimensoes[2]][dimensoes[3]];

        while(cont < dimensoes[0]){
            while(cont2 < dimensoes[1]){
                printf("Digite o elemento %d do array %d da primeira matriz: ", cont2,cont);
                scanf("%d",&x[cont][cont2]);
                cont2++;
            }
            cont2 = 0;
            cont++;
        }

        cont  = 0;
        cont2 = 0;
        while(cont < dimensoes[2]){
            while(cont2 < dimensoes[3]){
                printf("Digite o elemento %d do array %d: segunda matriz", cont2,cont);
                scanf("%d",&y[cont][cont2]);
                cont2++;
            }
            cont2 = 0;
            cont++;
        }
        printf("Soma das  matrizes: ");
        soma(dimensoes,x,y);

        printf("Subtracao das matrizeS: ");
        subtracao(dimensoes,x,y);

        printf("Multiplicacao das matrizes");
        multiplicacao(dimensoes,x,y);

        printf("Multiplicação Real da matriz 1: ");
        multReal(dimensoes,x);

        printf("Multiplicação Real da matriz 2: ");
        multReal(dimensoes,y);
    }

}