#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	
setlocale (LC_ALL, "Portuguese");    
// variaveis
	
	int cnh, maior, menor,cls;
	char nome[40];
	float multa, motorista, valor, total,total1;
	cls=0;
	maior=0;
	menor=1000000000;
	
	
// entrada de dados

	do  { // FAÇA 
		
		printf ("\nDigite o nome do condutor: ");
		scanf  ("%s", &nome);
		
		printf ("\nDigite o número da carteira de motorista (0001 a 4327): "); // CNH INTEIRO
		scanf  ("%d", &cnh);
	
		if ((cnh>0) && (cnh<=4327)){ // SE
		
		printf ("\nDigite a quantidade de multas: "); 
		scanf  ("%f", &multa);
	
		printf ("\nDigite os valores das multas: ");
		scanf  ("%f", &valor);	
		
		
		total= multa*valor;   // valores do laço de repetição 
		
		printf ("\nO condutor(a) %s pagará o total de R$ %2.f ",nome, total);
			
			if(maior < total) //SE
	 	{
            maior = total;
            cls=cnh;
        }
        else if(menor > total){
        	menor = total;
        	
    		}		
		total1=total1+total;
			}
	
	} while (cnh!=0); // ENQUANTO 
		

	printf("\nO condutor %s número da carteira do motorista que teve a maior multa e %d e o valor da maior multa e %.2f", nome , cls , total);
	printf("\n\nTotal de recursos arrecadados R$ %.2f ",total1);
	
	
		
		
}



 


