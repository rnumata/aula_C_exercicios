
/* 
 * File:   vetor.c
 * Author: regisnumata
 * Created on 5 de Outubro de 2019, 16:34
 * Trabalho Vetor
 */

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>



int main() {
    setlocale(LC_ALL,"");
    
    char voto;
    int presidente [15] = {0};   // Inicializa as 15 posições com zero
    int governador [12] = {0};   // Inicializa as 12 posições com zero
    int i, maiorPresidente = 0, maiorGovernador = 0, iMaiorP = 0, iMaiorG = 0, votoPresidente, votoGovernador;
    
    printf("Deseja Votar? S/N:  ");
    fflush(stdin);
    scanf("%s", &voto); 
    system("clear");                     //Limpa a tela. Está na Biblioteca stdlib.h
    
    while (voto == 's' || voto == 'S'){
        
        printf("******************************************************\n");
        printf("*********** VOTE NO CANDIDATO A PRESIDENTE ***********\n");
        printf("* BRANCO => 0                                        *\n");
        printf("* ALVARO DIAS (PODEMOS) => 1                         *\n");
        printf("* CABO DACIOLO (PATRIOTA) => 2                       *\n");
        printf("* CIRO GOMES (PDT) => 3                              *\n");
        printf("* EYMAEL (DC) => 4                                   *\n");
        printf("* FERNANDO HADDAD (PT) => 5                          *\n");
        printf("* GERALDO ALCKMIN (PSDB) => 6                        *\n");
        printf("* GUILHERME BOULOS (PSOL) => 7                       *\n");
        printf("* HENRIQUE MEIRELLES (MDB) => 8                      *\n");
        printf("* JAIR BOLSONARO (PSL) => 9                          *\n");
        printf("* JOAO AMOEDO (NOVO) => 10                           *\n");
        printf("* JOÃO VICENTE GOULART (PPL) => 11                   *\n");
        printf("* MARINA SILVA (Rede) => 12                          *\n");
        printf("* VERA LUCIA (PSTU) => 13                            *\n");
        printf("* NULO => 14                                         *\n");
        printf("******************************************************\n");
        
        printf("Digite seu voto =>  ");
        fflush(stdin);
        scanf("%d", &votoPresidente);       
        ++presidente[votoPresidente];        //Adiciona +1 no valor da posição [votoPresidente]
        system("clear");                     //Limpa a tela. Está na Biblioteca stdlib.h
        
        printf("******************************************************\n");
        printf("*********** VOTE NO CANDIDATO A GOVERNADOR ***********\n");
        printf("* BRANCO => 0                                        *\n");
        printf("* CIDA BORGHETTI (PROGRESSISTA) => 1                 *\n");
        printf("* DOUTOR ROSINHA (PT) => 2                           *\n");
        printf("* GEONISIO MARINHO (PRTB) => 3                       *\n");
        printf("* JOÃO ARRUDA (MDB) => 4                             *\n");
        printf("* JORGE BERNARDI (REDE) => 5                         *\n");
        printf("* OGIER BUCHI (PSL) => 6                             *\n");
        printf("* PRISCILA EBARA (PSO) => 7                          *\n");
        printf("* PROF. IVAN BERNARDO (PSTU) => 8                    *\n");
        printf("* PROF. PIVA (PSol) => 9                             *\n");
        printf("* RATINHO JUNIOR (PSD) => 10                         *\n");
        printf("* NULO => 11                                         *\n");
        printf("******************************************************\n");
        
        printf("Digite seu voto =>  ");
        fflush(stdin);
        scanf("%d", &votoGovernador);       
        ++governador[votoGovernador];        //Adiciona +1 no valor da posição [votoGovernador]
        system("clear");                     //Limpa a tela. Está na Biblioteca stdlib.h
        
        printf("Deseja Votar? S/N:  ");
        scanf("%s", &voto);
        system("clear");                     
    } 
    // Fim do While
    
    
        printf("******************************************************\n");
        printf("********** RESULTADO DOS VOTOS A PRESIDENTE **********\n");
        printf("* BRANCO =>                                       %d  *\n", presidente[0]);
        printf("* ALVARO DIAS (PODEMOS) =>                        %d  *\n", presidente[1]);
        printf("* CABO DACIOLO (PATRIOTA) =>                      %d  *\n", presidente[2]);
        printf("* CIRO GOMES (PDT) =>                             %d  *\n", presidente[3]);
        printf("* EYMAEL (DC) =>                                  %d  *\n", presidente[4]);
        printf("* FERNANDO HADDAD (PT) =>                         %d  *\n", presidente[5]);
        printf("* GERALDO ALCKMIN (PSDB) =>                       %d  *\n", presidente[6]);
        printf("* GUILHERME BOULOS (PSOL) =>                      %d  *\n", presidente[7]);
        printf("* HENRIQUE MEIRELLES (MDB) =>                     %d  *\n", presidente[8]);
        printf("* JAIR BOLSONARO (PSL) =>                         %d  *\n", presidente[9]);
        printf("* JOAO AMOEDO (NOVO) =>                           %d  *\n", presidente[10]);
        printf("* JOÃO VICENTE GOULART (PPL) =>                   %d  *\n", presidente[11]);
        printf("* MARINA SILVA (Rede) =>                          %d  *\n", presidente[12]);
        printf("* VERA LUCIA (PSTU) =>                            %d  *\n", presidente[13]);
        printf("* NULO =>                                         %d  *\n", presidente[14]);
        printf("******************************************************\n");
        printf("\n\n");
        
        printf("******************************************************\n");
        printf("********** RESULTADO DOS VOTOS A GOVERNADOR **********\n");
        printf("* BRANCO => 0                                    %d  *\n", governador[0]);
        printf("* CIDA BORGHETTI (PROGRESSISTA) => 1             %d  *\n", governador[1]);
        printf("* DOUTOR ROSINHA (PT) => 2                       %d  *\n", governador[2]);
        printf("* GEONISIO MARINHO (PRTB) => 3                   %d  *\n", governador[3]);
        printf("* JOÃO ARRUDA (MDB) => 4                         %d  *\n", governador[4]);
        printf("* JORGE BERNARDI (REDE) => 5                     %d  *\n", governador[5]);
        printf("* OGIER BUCHI (PSL) => 6                         %d  *\n", governador[6]);
        printf("* PRISCILA EBARA (PSO) => 7                      %d  *\n", governador[7]);
        printf("* PROF. IVAN BERNARDO (PSTU) => 8                %d  *\n", governador[8]);
        printf("* PROF. PIVA (PSol) => 9                         %d  *\n", governador[9]);
        printf("* RATINHO JUNIOR (PSD) => 10                     %d  *\n", governador[10]);
        printf("* NULO => 11                                     %d  *\n", governador[11]);
        printf("******************************************************\n\n\n");
        
        // Descobrir o presidente + votado
        
        for(i=0; i<14; i++){
            if(presidente[i] >= maiorPresidente){
                maiorPresidente = presidente[i];
                iMaiorP = i;
            }
        }
        
        switch (iMaiorP) {
            case 0:
                printf("********* RESULTADO ELEIÇÃO PARA PRESIDENTE **********\n\n");
                printf("*     BRANCO COM %d VOTO(s)\n", maiorPresidente);
                printf("******************************************************\n");
                break;
            case 1:
                printf("********* RESULTADO ELEIÇÃO PARA PRESIDENTE **********\n");
                printf("*     ALVARO DIAS (PODEMOS) COM %d VOTO(s)\n", maiorPresidente);
                printf("******************************************************\n");
                break;
            case 2:
                printf("********* RESULTADO ELEIÇÃO PARA PRESIDENTE **********\n");
                printf("*     CABO DACIOLO (PATRIOTA) COM %d VOTO(s)\n", maiorPresidente);
                printf("******************************************************\n");
                break;
            case 3:
                printf("********* RESULTADO ELEIÇÃO PARA PRESIDENTE **********\n");
                printf("*     CIRO GOMES (PDT) COM %d VOTO(s)\n", maiorPresidente);
                printf("******************************************************\n");
                break; 
            case 4:
                printf("********* RESULTADO ELEIÇÃO PARA PRESIDENTE **********\n");
                printf("*     EYMAEL (DC) COM %d VOTO(s)\n", maiorPresidente);
                printf("******************************************************\n");
                break; 
            case 5:
                printf("********* RESULTADO ELEIÇÃO PARA PRESIDENTE **********\n");
                printf("*     FERNANDO HADDAD (PT) COM %d VOTO(s)\n", maiorPresidente);
                printf("******************************************************\n");
                break;
            case 6:
                printf("********* RESULTADO ELEIÇÃO PARA PRESIDENTE **********\n");
                printf("*     GERALDO ALCKMIN (PSDB) COM %d VOTO(s)\n", maiorPresidente);
                printf("******************************************************\n");
                break;  
            case 7:
                printf("********* RESULTADO ELEIÇÃO PARA PRESIDENTE **********\n");
                printf("*     GUILHERME BOULOS (PSOL) COM %d VOTO(s)\n", maiorPresidente);
                printf("******************************************************\n");
                break;  
            case 8:
                printf("********* RESULTADO ELEIÇÃO PARA PRESIDENTE **********\n");
                printf("*     HENRIQUE MEIRELLES (MDB) COM %d VOTO(s)\n", maiorPresidente);
                printf("******************************************************\n");
                break;
            case 9:
                printf("********* RESULTADO ELEIÇÃO PARA PRESIDENTE **********\n");
                printf("*     JAIR BOLSONARO (PSL) COM %d VOTO(s)\n", maiorPresidente);
                printf("******************************************************\n");
                break;  
            case 10:
                printf("********* RESULTADO ELEIÇÃO PARA PRESIDENTE **********\n");
                printf("*     JOAO AMOEDO (NOVO) COM %d VOTO(s)\n", maiorPresidente);
                printf("******************************************************\n");
                break;  
            case 11:
                printf("********* RESULTADO ELEIÇÃO PARA PRESIDENTE **********\n");
                printf("*     JOÃO VICENTE GOULART (PPL) COM %d VOTO(s)\n", maiorPresidente);
                printf("******************************************************\n");
                break; 
            case 12:
                printf("********* RESULTADO ELEIÇÃO PARA PRESIDENTE **********\n");
                printf("*     MARINA SILVA (Rede) COM %d VOTO(s)\n", maiorPresidente);
                printf("******************************************************\n");
                break; 
            case 13:
                printf("********* RESULTADO ELEIÇÃO PARA PRESIDENTE **********\n");
                printf("*     VERA LUCIA (PSTU) COM %d VOTO(s)\n", maiorPresidente);
                printf("******************************************************\n");
                break;
            case 14:
                printf("********* RESULTADO ELEIÇÃO PARA PRESIDENTE **********\n");
                printf("*     NULO COM %d VOTO(s)\n", maiorPresidente);
                printf("******************************************************\n");
                break;    
        } 
         
        
        // Descobrir o Governador + votado
        
        
        for(i=0; i<11; i++){
            if(governador[i] >= maiorGovernador){
                maiorGovernador = governador[i];
                iMaiorG = i;
            }
        }
        
        switch (iMaiorG){
            case 0:
                printf("********* RESULTADO ELEIÇÃO PARA GOVERNADOR **********\n\n");
                printf("*     BRANCO COM %d VOTO(s)\n", maiorGovernador);
                printf("******************************************************\n");
                break;
            case 1:
                printf("********* RESULTADO ELEIÇÃO PARA GOVERNADOR **********\n");
                printf("*    CIDA BORGHETTI (PROGRESSISTA) COM %d VOTO(s)\n", maiorGovernador);
                printf("******************************************************\n");
                break;
            case 2:
                printf("********* RESULTADO ELEIÇÃO PARA GOVERNADOR **********\n");
                printf("*    DOUTOR ROSINHA (PT) COM %d VOTO(s)\n", maiorGovernador);
                printf("******************************************************\n");
                break;
            case 3:
                printf("********* RESULTADO ELEIÇÃO PARA GOVERNADOR **********\n");
                printf("*    GEONISIO MARINHO (PRTB) COM %d VOTO(s)\n", maiorGovernador);
                printf("******************************************************\n");
                break;
            case 4:
                printf("********* RESULTADO ELEIÇÃO PARA GOVERNADOR **********\n");
                printf("*    JOÃO ARRUDA (MDB) COM %d VOTO(s)\n", maiorGovernador);
                printf("******************************************************\n");
                break;
            case 5:
                printf("********* RESULTADO ELEIÇÃO PARA GOVERNADOR **********\n");
                printf("*    JORGE BERNARDI (REDE) COM %d VOTO(s)\n", maiorGovernador);
                printf("******************************************************\n");
                break;
            case 6:
                printf("********* RESULTADO ELEIÇÃO PARA GOVERNADOR **********\n");
                printf("*    OGIER BUCHI (PSL) COM %d VOTO(s)\n", maiorGovernador);
                printf("******************************************************\n");
                break;
            case 7:
                printf("********* RESULTADO ELEIÇÃO PARA GOVERNADOR **********\n");
                printf("*    PRISCILA EBARA (PSO) COM %d VOTO(s)\n", maiorGovernador);
                printf("******************************************************\n");
                break;
            case 8:
                printf("********* RESULTADO ELEIÇÃO PARA GOVERNADOR **********\n");
                printf("*    PROF. IVAN BERNARDO (PSTU) COM %d VOTO(s)\n", maiorGovernador);
                printf("******************************************************\n");
                break;  
            case 9:
                printf("********* RESULTADO ELEIÇÃO PARA GOVERNADOR **********\n");
                printf("*    PROF. PIVA (PSol) COM %d VOTO(s)\n", maiorGovernador);
                printf("******************************************************\n");
                break; 
            case 10:
                printf("********* RESULTADO ELEIÇÃO PARA GOVERNADOR **********\n");
                printf("*    RATINHO JUNIOR (PSD) COM %d VOTO(s)\n", maiorGovernador);
                printf("******************************************************\n");
                break;  
            case 11:
                printf("********* RESULTADO ELEIÇÃO PARA GOVERNADOR **********\n");
                printf("*    NULO COM %d VOTO(s)\n", maiorGovernador);
                printf("******************************************************\n");
                break;    
             
        }
        
        

    return (0);
    system("pause");
}

