#include <stdio.h>
#include <stdlib.h>
void chile_machine(char *frase){
    //printf("%s", frase);
    chile_head(frase);
    return;
}

void chile_head(char *frase){
    //printf("%s", frase);
    int cont=2, contLetras=0;
    for(int i=0; i<4; i++){
        for(int j=0; j<cont;j++){
            if(frase[contLetras]==' '){
                printf("-");
            }else{
                printf("%c",frase[contLetras]);
            }

         contLetras++;
        }
        printf("\n");
        cont++;
    }
    chile_body_top(contLetras, frase);
}

void chile_body_top(int contLetras, char*frase){
    for(int i=0;i<14;i++){
        if(i<12){
            for(int j=0; j<3;j++){
                if(frase[contLetras]==' '){
                    printf("-");
                }else{
                    printf("%c",frase[contLetras]);
                }
                contLetras++;
            }
            printf("\n");
        }
        else{
            printf(" ");
            for(int j=0;j<2;j++){
                if(frase[contLetras]==' '){
                    printf("-");
                }else{
                    printf("%c",frase[contLetras]);
                }
                contLetras++;
            }
            printf("\n");
        }
    }
    chile_body_bottom(contLetras,frase);
}

void chile_body_bottom(int contLetras,char *frase){
    int cont=3;
    for(int i=0; i<6;i++){
        if(i%2==0 && i!=0){
         cont++;
        }

        for(int j=0;j<cont;j++){
            if(frase[contLetras]==' '){
                    printf("-");
                }else{
                    printf("%c",frase[contLetras]);
                }
            contLetras++;
        }
        printf("\n");
        //printf("%d",i);
    }
    chile_foot(contLetras, frase);
}

void chile_foot(int contLetras, char *frase){
    int cont=9, contspace=0;
    for(int i=0;i<6;i++){
        for(int j=0; j<contspace;j++){
            printf(" ");
        }
        for(int j=0; j<cont; j++){
            if(frase[contLetras]==' '){
                    printf("-");
                }else{
                    printf("%c",frase[contLetras]);
                }
            contLetras++;
        }
        if(i==5){
            for(int j=0; j<12;j++){
                printf("%c",frase[contLetras]);
                contLetras++;
            }
        }
        printf("\n");
        cont--;
        contspace++;
    }
}

int main(){
    char frase[150];
    for(int i=0;i<149;i++){
        frase[i]='@';
    }
    frase[149]='\0';
    printf("DIGITE UMA FRASE\n");
    scanf("%[^\n]",frase);
    chile_machine(&frase);
    //pontos de melhoria: limitar a quant de caracteres digitados para 128
    return 0;
}
