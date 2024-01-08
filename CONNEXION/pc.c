#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

int main(){
	pc *etudiant = malloc(sizeof(pc)*50);
	
	FILE *file ,*new_file;
	
	//file = fopen("pc.csv","r");
	//if (file == NULL) printf("Erreur d'ouverture!\n");

	file = infos_pc(2, etudiant, "pc.csv");
	
	new_file = trier (file,"pc.csv");
	
	//fclose(new_file);
	
	return 0;
}
