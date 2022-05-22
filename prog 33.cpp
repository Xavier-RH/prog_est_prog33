/* Autor: Xavier Romero Hernández, Realizado: 03/03/2022 
	Programa que pida el salario de trabajadores de una empresa y calcule: 
		-Media
		-Varianza
		-Desviacion Estandar (muestral)
	El programa terminara cuando se introduce un 0
	*/

#include <stdio.h>
#include <math.h>

int main(){
	
	float salario, media, vec[9999], var, desv;
	int cont=0;
	do{
		printf("Ingresa el salario %d: ",cont+1);
		scanf("%f",&salario);
		if (salario!=0){
			media=media+salario;
			vec[cont]=salario;
			cont++;	
		}
	}while (salario!=0);
	
	media=media/cont;
	for(int i=0;i<cont;i++){
		var=var+pow(vec[i]-media,2);
	}
	
	var=var/cont;
	desv=sqrt(var);
	
	printf("\nLa media es de %.2f",media);
	printf("\nLa varianza es de %.2f",var);
	printf("\nLa desviacion estandar es de %.2f",desv);
	return 0;	
}

