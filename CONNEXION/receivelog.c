#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char**inscription();
char*loglog();
void se_connecter();
int main(){
	 char*str=getenv("QUERY_STRING");
     printf("Content-type: text/html\n\n");
	 printf("<html lang=\"fr\"><head><meta charset=UTF-8><title>ce formulaire</title>");
	 printf("<link rel=\"stylesheet\" href=\"http://www.lahoussa.com/style2.css\"></head>");

	         char*len=getenv("CONTENT_LENGTH");
		      
	         //~ FILE*file=NULL;
	         //~ file=fopen("/home/test/logout.csv","w+");
	         	       
	         FILE*fil=NULL;
	         fil=fopen("/home/test/regist.csv","a+");
	         	       
             //char*str=getenv("QUERY_STRING"); 	
     printf("<body>");
            se_connecter();
	        char*log=malloc(123);
	        char*log0=malloc(123);
	        char*pass=malloc(123);
			char*mai=malloc(123);
			char*ad=malloc(123);
			char*fulna=malloc(123);
			char**pas=malloc(sizeof(char*)*200);
		       for(int i=0;i<200;i++){
			       pas[i]=malloc(200);
		       } 
				
			//char*site=malloc(sizeof(char)*255);
			sscanf(str,"%*[^=]=%[^ &]&%*[^=]=%[^\n]\n",log,log0);
			FILE*file=NULL;
			printf("ici les log%s\t%s\n",log,log0);
			
			file=fopen("/home/test/goout.csv","w+");
			if(strstr(log,"logout")==NULL){
			fprintf(file,"%s\t%s\n",log,log0);
				
			}
			fclose(file);
		
			 if(strstr(log,"logout")!=NULL){
				 printf("<head><meta http-equiv=\"refresh\"content=\"0;url=http://www.lahoussa.com/cgi-bin/log1.cgi\"></head>");	
		        
				//printf("Location:http://www.lahoussa.com/cgi-bin/recupere.cgi\n");
			}
			
        //~ if(str!=NULL){
					 
		        //~ sscanf(str,"%*[^=]=%[^ &]&%*[^=]=%[^\n]\n",log,log0);
	    //~ }
	   // int i=0;
	    if(len!=NULL){
			int rlen=atoi(len);
			char*postdata=(char*)malloc(rlen+1);
			if(postdata!=NULL){
					fgets(postdata,rlen+1,stdin);
							 
					sscanf(postdata,"%*[^=]=%[^ &]&%*[^=]=%[^ &]& %*[^=]=%[^&]&%*[^=]=%[^\n]\n",fulna,pass,mai,ad);
			}
			//printf("%s<br>",pass[i]);
		}
	 fprintf(fil,"%s\t%s\t%s\t%s\n",fulna,pass,mai,ad);      
    // fprintf(file,"%s,%s",log,log0);
     //~ FILE*fic=NULL;
    //~ fic=fopen("/home/test/logout.csv","r");
    
	//~ 
			char**login=malloc(sizeof(char*)*200);
				for(int i=0;i<200;i++){
					login[i]=malloc(200);
			}
				//login=inscription();
			char*user=malloc(200);
		  //~ char**lo=malloc(sizeof(char*)*200);
		      //~ for(int i=0;i<200;i++){
			     //~ lo[i]=malloc(200);
		   //~ } 
					//strcpy(user,loglog());
  
	       // while( ){
	       if(file!=NULL){
			   printf("<head><meta http-equiv=\"refresh\"content=\"0;url=http://www.lahoussa.com/cgi-bin/marche.cgi\"></head>");
			   
		   }
	       
	       for(int i=0;i<100;i++){
			  
	             if(strcmp(user,login[i])==0){
					 
							printf("oui");
							
						
						//printf("<head><meta http-equiv=\"refresh\"content=\"0;url=http://www.lahoussa.com/cgi-bin/marche.cgi\"></head>");	
						//printf("<A href=\"http://www.lahoussa.com/cgi-bin/ess.cgi\"> voir_les_pages</A>");
						 printf("<h1>%s VS %s</h1>",user,login[i]);
						break;
		          }
		//~ else{
				//~ printf("<h1>Mot de passe ou le login incorrecte</h1>");
		//~ }
		  printf("<h1>%s VS %s</h1>",user,login[i]);
		//}
	
	}	//fclose(file);
	fclose(fil);
			   
	printf("</body>");
	printf("</html>");
				 
	        
	
	return 0;
}
char**inscription(){
	  FILE*file=NULL;
      file=fopen("/home/test/regist.csv","r");
		char**login=malloc(sizeof(char*)*200);
		for(int i=0;i<200;i++){
			login[i]=malloc(200);
		}
		//~ char**lo=malloc(sizeof(char*)*200);
		//~ for(int i=0;i<200;i++){
			//~ lo[i]=malloc(200);
		//~ }
		//~ char*log=malloc(123);
		//~ char*log0=malloc(123);
	      
		int i=0;int j=0;
	while(feof(file)!=1){
		
		fgets(login[i],200,file);
	  
			//strcpy(lo[j],login[i]);
		  // sscanf(login,"%[^,],%[^,],%*[^,],%*[\n]\n",log,log0);
	    printf("<p>%s pourquoi tu n'existe pas</p>",login[i]);
	
		i++;
	
    }
	  fclose(file);
	return login;
	
	}
char*loglog(){
	FILE*file=NULL;
    file=fopen("/home/test/goout.csv","r");
	char*lo=malloc(200);
	int i=0;
	while(feof(file)!=1){
		fgets(lo,200,file);
		i++;
		 printf("<h2> je suis ici \"%s\" j' existes n'est ce pas</h2>",lo);
    }
   
	fclose(file);
	return lo;
	
	}
	void se_connecter(){
      printf("<div class=\"bloc1\">");
   
      printf(" <div class=\"bloc\"><form ACTION=\"http://www.lahoussa.com/cgi-bin/log1.cgi\" METHOD=\"GET\">");
      printf("Login<br>");
      printf("<br><input type=\"text\" name=\"nom\" class=\"bloc3\"><br>");
      printf(" <br>Password<br>");
      printf("  <br><input type=\"password\" name=\"anni\" class=\"bloc3\"><br>");
      printf(" <br><input type=\"submit\" class=\"bloc2\"value=\"se connecter\">");
      printf("</form>");
      printf("</div>");
      printf(" </div>");
    
}

