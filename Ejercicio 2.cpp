#include <stdio.h>

int main (){
	int n [100];
	int vec;
	int val;
	
	printf("Cual sera el tama�o del primer vector?: ");
	scanf("%d", &vec);
	
	for(int i=0;i<vec;i++){
		printf("\n inserte los valores: ");
		scanf("%d", &val);
		n[i]=val;
	}
	for(int i=0;i<vec;i++){
		printf("\n La posicion %d tiene un valor de: %d",i,n[i]);
	}
		printf("\n\n Cual sera el tama�o del segundo vector?: ");
	scanf("%d", &vec);
	
	for(int i=0;i<vec;i++){
		printf("\n inserte los valores: ");
		scanf("%d", &val);
		n[i]=val;
	}
	for(int i=0;i<vec;i++){
		printf("\n La posicion %d tiene un valor de: %d",i,n[i]);
	}
	return 0;
}
