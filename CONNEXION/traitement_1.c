#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int ancre1(int nb,int anc);
int ancre2(int nb,int anc);
int nombreline();
void ancre(int nb);
void ancre3(int deb,int fin,int anc);
int main(){
	char*caro=getenv("QUERY_STRING");
		printf("Content-type: text/html\n\n");
	    printf("<html lang=\"fr\"><head><meta charset=UTF-8><title>Mon calendrier</title></head>");printf("<body width=70%%> ");
	   char*cara=malloc(45);
	   char*ca4=malloc(sizeof(char)*1000);
	   FILE*fi=NULL;
	   fi=fopen("/home/test/goout.csv","r");
	   int l=0;
	   while(feof(fi)!=1){
		   fgets(ca4,255,fi);
		   l++;
	   }
	   
	  
		   
	   char *ca2 = (char*)malloc(sizeof(char)*1000);
	   char*car=malloc(sizeof(char)*1000);
	
	char*ca5=malloc(sizeof(char)*1000);

	char*ca=malloc(sizeof(char)*1000);

	char*ca3=malloc(sizeof(char)*1000);

	

	char*ca1=malloc(sizeof(char)*1000);

	char*ca6=malloc(sizeof(char)*1000);

	char*ca7=malloc(sizeof(char)*1000);

	char*ca8=malloc(sizeof(char)*1000);
	
	char*ca9=malloc(sizeof(char)*1000);
    printf("<A href=\"http://www.lahoussa.com/cgi-bin/log1.cgi?anni=logout\">logout</A>");
	    FILE*file=NULL;
	         file=fopen("/var/log/auth.log","r");
	   sscanf(caro,"nbr=%s",cara);
	   int anc=atoi(cara);
	        printf("<H1> ici %s</H1>",cara);
	       // printf("<H1> veuillez remplir la formulaire d'abord avant de voir les pages%s </H1>",ca4);
	     
	    if(strstr(ca4,"logout")!=NULL){
		    printf("<H1> veuillez remplir la formulaire d'abord avant de voir les pages%s </H1>",ca4);
		    printf("<A href=\"http://www.lahoussa.com/login.html\">la formulaire</A>");
	    }
	   else if(ca4==NULL){
		    printf("<H1> veuillez remplir la formulaire d'abord avant de voir les pages%s </H1>",ca4);
		    printf("<A href=\"http://www.lahoussa.com/login.html\">la formulaire</A>");
	  	
	   }
	  else{ 
	   int nb=nombreline();
	     ancre(nb);
	  int deb=ancre1(nb,anc);
	  int fin= ancre2(nb,anc);
	  ancre3(deb,fin,anc);
	  int i=0;
	  printf("<H1> ici %d et fin est %d</H1>",deb,fin);
	   printf("<center><table border=\"2\" width=80%% height=70%% style=\"text-align:center;\">");
	   printf("<tr style=\"background-color:white;\"><th>DATE DE L'OUVERTURE ET DE FERMETURE</th><th>OUVERT/FERMER </th><th>UTILISATEUR</th></tr>");
	
	  while(feof(file)!=1){
		  
		
		 fgets(ca2,1000,file);
		 i++;	
		 sscanf(ca2,"%[^ ] %[^ ] %[^ ] %*[^:]: %*[^ ] %[^ ] %[^ ] %*[^ ] %*[^ ] %[^ ] %[^\n]",ca,ca1,car,ca3,ca6,ca7,ca8);
	      
			if(strcmp(ca7,"root")==0 || strcmp(ca7,"misa")==0 || strcmp(ca7,"gdm")==0){
		     strcpy(ca9,ca7);
	         }// printf("<H1> lolo%dici %s</H1>",i,ca7);
	        if(strcmp(ca6,"closed")==0 || strcmp(ca6,"opened")==0){
		    strcpy(ca5,ca6);
	         }
	
		 if(i==deb){
		     if(deb<=fin){
	         if(strstr(ca6,"closed")!=NULL || strstr(ca6,"opened")!=NULL){
	  
			  printf("<tr style=\"background-color:cadetblue;\"><td>%s   %s   %s</td><td>%s</td><td>%s </td></tr>",ca,ca1,car,ca5,ca7);
	
		  }
		   deb++;
	     }
	     }
	     
      
     }
 
}
	 printf("</body></html>");
	
	
	fclose(file);
	
	fclose(fi);
	
	return 0;
}
void ancre(int nb){
	//int j=0;
	 for(int i=1;i<=10;i++){
		  printf("<A href=\"http://www.lahoussa.com/cgi-bin/ess.cgi?nbr=%d\"></A>",i);	
	       
		
     }
		
	
}
void ancre3(int deb,int fin,int anc){
		
	if(anc==(((deb+fin)/2)/10)){
	  for(int i=(fin/10);i<=(fin/10)+5;i++){
			
		 printf("<div style=\"text-decoration:none;width:6vw;height:6vw;border-radius:50%%;display:flex;justify-content:center;flex-direction:row-reverse;align-items:center;background-color: darksalmon;\"><A href=\"http://www.lahoussa.com/cgi-bin/ess.cgi?nbr=%d\"><font color=\"black\">%d  &nbsp;</font></A></div>",i,i);	
	       	
		}	
	}
	else if(anc==(fin/10)){
		for(int i=anc+1;i<=(fin/10)+10;i++){
			
		 printf("<div style=\"text-decoration:none;width:6vw;height:6vw;border-radius:50%%;display:flex;justify-content:center;flex-direction:row-reverse;align-items:center;background-color: darksalmon;\"><A href=\"http://www.lahoussa.com/cgi-bin/ess.cgi?nbr=%d\"><font color=\"black\">%d  &nbsp;</font></A></div>",i,i);	
	       		     
		}
	}
	else{
		 for(int i=1;i<=(10);i++){
			
		 printf("<div style=\"text-decoration:none;width:6vw;height:6vw;border-radius:50%%;display:flex;justify-content:center;flex-direction:row-reverse;align-items:center;background-color: darksalmon;\"><A href=\"http://www.lahoussa.com/cgi-bin/ess.cgi?nbr=%d\"><font color=\"black\">%d  &nbsp;</font></A></div>",i,i);	
	       		     
		}
	}
	
}
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
	return nbl;
}
int ancre1(int nb,int anc){
	int  debut=0;
	 for(int i=1;i<(nb/10);i++){
	  if(i==anc){
		 debut=(i-1)*10+1;
		  
		  
	  }
	 }
		
	return debut;
}
int ancre2(int nb,int anc){
	int  fin=0;
	 for(int i=1;i<(nb/10);i++){
	  if(i==anc){
		 fin=i*10;
		  
		  
	  }
	 }
		
	return fin;
}
