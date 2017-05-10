#include <stdio.h>
#include <stdlib.h>

int main (void){

    char url[] = "arquivoTelefone.txt";
    char digito;
    
    FILE *arquivo;
	arquivo = fopen(url, "r");

    if(arquivo == NULL)
        printf("Falha no arquivo");

    else{
        digito = fgetc(arquivo);

        while(digito != EOF){
            if(digito == '1')
                printf("1");

            if(digito == '0')
                printf("0");

            if(digito == '-')
                printf("-");

            if(digito == '\n')
                printf("\n");

            if(digito == 'A'|| digito == 'B' || digito =='C')
                printf("2");

            if(digito == 'D'|| digito == 'E'|| digito == 'F')
                printf("3");

            if(digito == 'G'|| digito == 'H'|| digito == 'I')
                printf("4");

            if(digito == 'J'|| digito == 'K'|| digito == 'L')
                printf("5");

            if(digito == 'M'|| digito == 'N'|| digito == 'O')
                printf("6");

            if(digito == 'P'|| digito == 'Q'|| digito == 'R'|| digito == 'S')
                printf("7");

            if(digito == 'V'|| digito == 'T'|| digito == 'U')
                printf("8");

            if(digito == 'W'||digito == 'X'|| digito == 'Y'|| digito == 'Z')
                printf("9");

            digito = fgetc(arquivo);
            
            }
             fclose(arquivo);
          }

         getch();

     return 0;
}
