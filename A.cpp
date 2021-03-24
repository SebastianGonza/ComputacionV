#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
int n,  i, c=0, m, A, aux, j;
	
	printf("De cuantos numeros sera el vector?: ");
	scanf("%i", &n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			c++;
		}
	}
	if(c>2){
		printf("numero invalido");
	}
	else{
		srand(time(NULL));
		for(int i=0;i<n;i++)
		printf("(%i)--",rand());
		
		printf("\nEl mediana del vector es la posicion %i y el valor original fue : %i",(n%2)+1, i-1);	
	}

		return 0;
}
