#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int nombreline(){
	char *car =(char*)malloc(sizeof(char)*1000);
	FILE*file;
	file=fopen("/var/log/auth.log","r");
	
	if(file==NULL){
		printf("on n'a pas pu ouvrir le fichier\n");
	}
	int nbl=0;
	
	while(!feof(file)){
		fgets(car,1000,file);	
		nbl++;	
	}
	fclose(file);
	return nbl-95;
}
int main(){
	char*caro=getenv("QUERY_STRING");
		printf("Content-type: text/html\n\n");
	    printf("<html lang=\"fr\"><head><meta charset=UTF-8><title>Mon calendrier</title></head>");
	     FILE*file=NULL;
	file=fopen("/var/log/auth.log","r");
	char *ca2 = (char*)malloc(sizeof(char)*1000);
	//char ca4[400];
	char*car=malloc(sizeof(char)*1000);
	
	char*ca5=malloc(sizeof(char)*1000);

	char*ca=malloc(sizeof(char)*1000);

	char*ca3=malloc(sizeof(char)*1000);

	//char*ca4=malloc(sizeof(char)*1000);

	char*ca1=malloc(sizeof(char)*1000);

	char*ca6=malloc(sizeof(char)*1000);

	char*ca7=malloc(sizeof(char)*1000);

	char*ca8=malloc(sizeof(char)*1000);
	
	char*ca9=malloc(sizeof(char)*1000);

	    char*cara=malloc(45);
	    int *tab=(int*)malloc(sizeof(int)*52);
	   sscanf(caro,"nbr=%s",cara);
	    printf("<H1> ici %s</H1>",cara);
	    
	   printf("<body style=\"background-color:violet;\"><div align=\"center\"><B><font color=\" darksalmon;\" size=20>Les 100 derniers authentification dans /var/log/auth.log </font></B></div>");
	   if(file==NULL){
		printf("<h2>on n'a pas pu ouvrir le fichier<br></h2>");
		return 1;
	}
	   int i=0;
	   int nb=nombreline();
	   // char ca[125]="1";
	   
	    int index=0;
	    index=atoi(cara);
	 for(int i=1;i<=(nb/10);i++){
		
	  printf("<A href=\"http://www.lahoussa.com/cgi-bin/essay.cgi?nbr=%d\">%d<br></A>",i,i);	 
	 }
	 for(int i=1;i<=(nb/10);i++){
		tab[i]=i; 
	
	  }
		
	   printf("<center><table border=\"2\" width=80%% height=70%% style=\"text-align:center;\">");
	   printf("<tr style=\"background-color:white;\"><th>DATE DE L'OUVERTURE ET DE FERMETURE</th><th>OUVERT/FERMER </th><th>UTILISATEUR</th></tr>");
	
	   
	
	
	
	
	     while(feof(file)!=1){
		
	    fgets(ca2,1000,file);	
	
         i++;
	     sscanf(ca2,"%[^ ] %[^ ] %[^ ] %*[^:]: %*[^ ] %[^ ] %[^ ] %*[^ ] %*[^ ] %[^ ] %[^\n]",ca,ca1,car,ca3,ca6,ca7,ca8);
	     /*for(int i=1;i<=(nb/10);i++)*/
	    // printf("<H1> l'index ici %d</H1>",i);
	     if(i<=nb/10){
	    		//printf("<P> le voici %d</p>",i);
	    		  if( index==i){
					 // printf("<H1> l'index ici %d</H1>",i);
			//  if(i>=((i-1)*10+1) && i<= ((i)*10)){
	   
			for(int j=((i-1)*10+1);j<=((i)*10);j++){
				printf("<H1> l'index ici %d</H1>",j	);
		if(strcmp(ca7,"root")==0 || strcmp(ca7,"misa")==0 || strcmp(ca7,"gdm")==0){
		strcpy(ca9,ca7);
	    }// printf("<H1> lolo%dici %s</H1>",i,ca7);
	    if(strcmp(ca6,"closed")==0 || strcmp(ca6,"opened")==0){
		strcpy(ca5,ca6);
	    }
	
	   if(strstr(ca6,"closed")!=NULL || strstr(ca6,"opened")!=NULL){
	    //printf("<H1> l'index ici %d</H1>",i);
			//printf("<P> le voici %d</p>",j);
			  printf("<tr style=\"background-color:cadetblue;\"><td>%s   %s   %s</td><td>%s</td><td>%s %d</td></tr>",ca,ca1,car,ca5,ca7,j);
	
		  }
		  }
	  }
  }
	}  fclose(file);
	   printf("</table></body></html>");
	return 0;
}
