#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char*loglog(){
	FILE*file=NULL;
    file=popen(" cat /home/test/goout.csv","r");
    char*site=malloc(sizeof(char)*255);
			//~ for(int i=0;i<255;i++) {
				//~ site[i]=malloc(500);
			//~ }
	                      ///comparaison des string dans le fichier goout.csv et regist.csv
	int i=0;
	while(feof(file)!=1){
			fgets(site,200,file);
			//sfscanf(file,"%s\n",site);
			//printf("la sortir est %d %s<br>",i,site);
			i++;
   }
   if(file==NULL){
			printf("je suis vide est %d %s<br>",i,site);
			//printf("<head><meta http-equiv=\"refresh\"content=\"0;url=http://www.lahoussa.com/login.html\"></head>");	
		  
   }
	pclose(file);
	
	return site;
	
	}
int nombreline(){
	char *car =(char*)malloc(sizeof(char)*1000);
	int nbl=0;
	FILE*file;
	file=fopen("/var/log/auth.log","r");
	
	if(file==NULL){
		printf("on n'a pas pu ouvrir le fichier\n");
	}

	
	while(!feof(file)){
		fgets(car,1000,file);	
		nbl++;	
	}
	fclose(file);
	return nbl;
}
void logIn(){
	  FILE*fil=NULL;
		fil=fopen("/home/test/Documents/lolo/momo.txt","r");
		char**html=malloc(sizeof(char)*1000);
			for(int i=0;i<1000;i++){
			html[i]=malloc(800);
			}
		int indexe=0;
	while(feof(fil)!=1){
			fgets(html[indexe],1000,fil);
			printf("%s",html[indexe]);
			indexe++;
	}
	fclose(fil);
}
void logIn1(){
	  FILE*fil=NULL;
	  fil=fopen("/home/test/Documents/lolo/momo1.txt","r");
		char**html=malloc(sizeof(char)*1000);
			for(int i=0;i<1000;i++){
				html[i]=malloc(800);
			}
		int indexe=0;
	while(feof(fil)!=1){
			fgets(html[indexe],1000,fil);
			printf("%s",html[indexe]);
			indexe++;
	}
	fclose(fil);
}
void inscription(char*lo){
	FILE*file=NULL;
    file=fopen("/home/test/regist.csv","r");
   
	char*login=malloc(200);
	char*log0=malloc(sizeof(char)*255);
	char*log=malloc(sizeof(char)*255);
	char*site=malloc(sizeof(char)*255);
			
		
	int i=0; int reper=0;
	if( (*lo!='\0')){
	while(feof(file)!=1){
			fgets(login,200,file);
			sscanf(login,"%[^\t]\t%[^\t]\t%*[^,],%*[\n]\n",log,log0);
			sprintf(site,"%s\t%s",log,log0);
			if(strstr(lo,site)!=NULL){
					  reper=1;

			          //~ printf("<h1>coucou %s vs %s</h1><br>",lo,site); 
			          			           break;
		           
			}
			else if((strcmp(lo,site)!=0)){
					 reper=0;
					  // printf("<h2>coucou %s vs %s</h2><br>",lo,login); 

			}
			
			
		     i++;
    }  
    
 }                    
			if(reper==1){
				
				//printf("<A href=\"http://www.lahoussa.com/cgi-bin/ess.cgi\"> voir_les_pages</A>");
				printf("<head><meta http-equiv=\"refresh\"content=\"0;url=http://www.lahoussa.com/cgi-bin/ess.cgi\"></head>");	
		                      
			}
			else if(reper==0){
				printf("<div>");
				 logIn();
				printf("<head><meta http-equiv=\"refresh\"content=\"0;url=http://www.lahoussa.com/cgi-bin/log1.cgi\"></head>");	
		
				//printf("<A href=\"http://www.lahoussa.com/cgi-bin/marche.cgi\"> voir_les_pages</A>");
				 // printf("veuillez te connecter avec ce lien ci dessous<br>");
								   
			}
   fclose(file);
  
	//~ //return login; 
	
}

int main(){
	//char*str=getenv("QUERY_STRING");
			printf("Content-type: text/html\n\n");
	        printf("<html lang=\"fr\"><head><meta charset=UTF-8><title>teste de  formulaire</title>");
	        printf("<link rel=\"stylesheet\" href=\"http://www.lahoussa.com/style2.css\"></head>");

             	        // FILE*fil=NULL;
             	         //FILE*file=NULL;
             	         char*log=malloc(123);
	                     char*log0=malloc(123);
	                     char*site=malloc(sizeof(char)*255);
							
	       printf("<body>");
           
	        //logIn1();    
	       printf("<h1> %sand %s</h1>",log,log0);

	      strcpy(site,loglog());
	                    printf("<h1>%s </h1>",site);
	                     inscription(site);
	                    
	                  
	
	         printf("</body>");
	         printf("</html>");
			 free(site);free(log0);free(log);
	         //~ free(day);free(session);free(lo);
	        // 
	
	return 0;
}
