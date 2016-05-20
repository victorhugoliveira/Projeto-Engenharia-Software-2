/*

    Autor: Victor Hugo Gomes de Oliveira
    RA: 177976
    Descrição: Sistema destinado a converter temperatura em graus Celsius para Kelvin ou Fahrenheit.
    Versão: 0.1
    Data: 09/04/2016


*/


#include<stdio.h>
#include<stdlib.h> // Biblioteca para apagar tela no windows - system("cls");


int main(){

    // Área de Designação de variáveis
        float TempC = 0.0, TempK = 0.0, TempF = 0.0;
        int opc = 0, selecao = 0;

    // Corpo do Código

    do{     // Layout
        printf("\n\t========================================================  ");
        printf("\n\t||  Bem-Vindo ao Software Calculadora de Temperatura  ||	");
        printf("\n\t======================================================== ");
        printf("\n\t||                                                    ||");
        printf("\n\t||        Digite a Temperatura em Celsius             ||");
        printf("\n\t||          e descubra em Kelvin e Fahrenheit         ||");
        printf("\n\t||                                                    ||");
        printf("\n\t========================================================\n\t  ");

        printf("\n\tTemperatura em Celsius: ");
        scanf("%f",&TempC);                                   // Entrada de dados

        printf("\n\tDigite: ");
        printf("\n\t1 - Efetuar Calculo ");
        printf("\n\t2 - Alterar a Temperatura \n\n\t");        // Botão
        scanf("%d",&selecao);

        system("cls");                                       // Limpa Tela

        if(selecao == 1){

            // Conversões de Temperatura
            TempK = TempC + 273;

            TempF = (TempC * 1.8) + 32;

            printf("\n\t========================================================  ");
            printf("\n\t||  Bem-Vindo ao Sistema Calculadora de Temperatura   ||	");
            printf("\n\t======================================================== ");
            printf("\n\t||                                                    ||");
            printf("\n\t||              Resultado da Conversao                ||");
            printf("\n\t||                                                    ||");
            printf("\n\t||                                                    ||");
            printf("\n\t========================================================\n\t  ");
            printf("\n\tTemperatura em Graus Kelvin: %0.2f",TempK);
            printf("\n\tTemperatura em Graus Fahrenheit: %0.2f",TempF);

        }

        printf("\n\tDeseja efetuar nova conversao? (1)SIM ou Qualquer outro numero para NAO \n\n\t");   // Condição para executar novamente
        scanf("%d",&opc);
        system("cls");
    }while(opc == 1);

    return 0;
}
