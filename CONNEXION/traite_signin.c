#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char** inscription(int ligne,FILE*file);
int nombreline();


int main (){
	FILE*file=NULL;
    file=popen("cat /home/test/regist.csv","r");
    
     char**site=malloc(sizeof(char*)*500);
			for(int i=0;i<500;i++) {
					site[i]=malloc(500);
			}
	 int ligne=0;
		  ligne= nombreline();
		    printf("%d",ligne);
            site=inscription(ligne,file);
            printf("%s",site[0]);
			free(site);
			pclose(file);
    return 0;
}
int nombreline(){
	char *car =(char*)malloc(sizeof(char)*1000);
	
	FILE*file;
	file=fopen("/home/test/regist.csv","r");
	
	if(file==NULL){
		printf("on n'a pas pu ouvrir le fichier\n");
	}
	int nbl=0;
	
	while(!feof(file)){
		fgets(car,1000,file);	
		nbl++;	
	}
	fclose(file);
	return nbl;
}
char** inscription(int ligne,FILE*file){
	//~ FILE*file=NULL;
    //~ file=fopen("/home/test/regist.csv","r");
    
  
	 char**login=malloc(sizeof(char*)*1000);
			for(int i=0;i<1000;i++) {
					login[i]=malloc(500);
			}
	 char**log=malloc(sizeof(char*)*1000);
			for(int i=0;i<1000;i++) {
					log=malloc(500);
			}
     
	//int i=0;
	for(int i=0;i<ligne;i++){
		
			fgets(login[i],1000,file);
			strcpy(log[i],login[i]);
			
		
            
    }
  printf("llllllllaa");
    //rewind(file);
    //free(login);
	return log;
	
}
