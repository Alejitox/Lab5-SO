#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <wait.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int main(int argc, char *argv[]) 
{
    int i=1, j;
    char *argument[30];
    char *rep[8];    
    FILE *fichero;
    char linea[80];
	pid_t p_hijo;
	int num;
    char *let;
    fichero = fopen(argument[1],"r");
    //fichero = fopen("numeros.txt","r");
	rep[0] = argv[1];
    if(fichero==NULL){
        printf("error");
    }else{
		fgets(linea,80,fichero);		
		while(!feof(fichero)){
		char *let=strtok(linea," ");
	
			while(let != NULL){
				rep[i]=let;
				//fgets(linea;80,fichero)
				let=strtok(NULL," ");
				i++;	
			}
			if (rep[i]>5){
				printf("Vector no paso");	
				}else{
					printf("Vector paso");
					printf("\t");
					p_hijo = fork();
					if(p_hijo==0){
						execvp("./sincro",rep);
					}else{
						wait(&num);
						}
							
					}
	
		for(j=0;j<i;j++){
			printf("%s", rep[j]);
			
        		printf("\t");      
			//printf("\n");
		}
			fgets(linea,80,fichero);
			i=0;
		
		}
	
	
    }
	
    fclose(fichero);
    return 0;
 
}
