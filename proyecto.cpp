#include <stdio.h>

int main (){
	int n [100];
	int vec;
	int i;
	
	printf("De cuantos numeros sera el vector?: ");
	scanf("%d", &vec);
	
	for(int i=0;i<vec;i++){
		printf("\n Inserte los valores: ",i);
		scanf("%d", &n[i]);
		
	}
	printf("El vector es: \n");
	for (i=0;i<vec;i++){
		printf("%d\n", n[i]);
	}
	printf("\n El vector inverso es: \n");
	for (i=vec-1;i>=0;i--){
		printf("%d\n", n[i]);
	}
		return 0;
}
