#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
 
int main() 
{
    int i, j, k;
    //int escenario[50][50]; 
    int vector[100]; 
    int dat;
    int arrenum[400];     
    FILE *fichero;
 
    fichero = fopen("numeros.txt","r");
    if(fichero==NULL){
        printf("error");
    }else{
    for(i=0;i<10;i++){
		fscanf(fichero,"%d",&dat);
		while(!feof(fichero)){
		//arrenum[i]=dat;
		vector[i]=dat;	
		fscanf(fichero, "%d", &vector[i]);
	    	printf("%d", vector[i]);
		i++;
		//fscanf(fichero,"%d",&dat);
		//printf("Prueba : %lf\n");
		//printf("datos : \n",&dat);
		//printf("%d",arrenum[i]);
		//printf("\n");	
		}
	}
        printf("\n");      //cada vez que se termina una fila hay que pasar a la siguiente linea
    }
    fclose(fichero);
    //system("pause");
    return 0;
 
}
