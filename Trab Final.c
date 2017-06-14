#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
 
 char heroi[25];
 int poder;
} heroes;

//void simularBatalha(heroes * herois[], heroes *thanos){

//}
heroes** selecaoParaAtaque(heroes herois[]){
    heroes **locao = (heroes*) malloc( sizeof(heroes*)*11);
    int i,c=0, escolha=0;
    for (i=0 ; i<11 ; i++){        
        printf("Escolha se o %s vai entrar:\n", herois[i]->heroi); 
        printf("SIM - 1 || Não - 2\n");        
        scanf("%d", &escolha);       
        if(escolha == 1){
        locao[c] = &herois[i];
        c++
        }
}
void imprime(heroes *thanos, heroes herois[]){
    int i;
    printf("%s\n", thanos->heroi);
    printf("%d\n", thanos->poder);
    for (i=0; i<11; i++){
        printf("%s\n",herois[i].heroi);
        printf("%d\n",herois[i].poder);
        }
}
void leHeroi(heroes *thanos,heroes h[])  {
    int i=0, temp1=0, temp2=0;   
    FILE * entrada;
    entrada = fopen ("herois.txt", "r");      
    if (entrada != NULL){
            
        do{
            fscanf (entrada,"%s",thanos->heroi);
            fscanf (entrada,"%d",&temp1);
            thanos->poder = temp1;
            for (i=0 ; i<11 ; i++){            
            fscanf(entrada,"%s",h[i].heroi);
            fscanf(entrada,"%d",&h[i].poder);
            }
        }while(!feof(entrada));
        fclose(entrada);


    } else { printf("Deu ruim."); }// treta no file 
                
           
    
        



}


int main(void){
int i;
heroes thanos, herois[11];
leHeroi(&thanos, herois);
imprime(&thanos, herois);
selecaoParaAtaque(herois);
}

    

return 0;
}
