#include <stdio.h>

int main (){
	int n [100];
	int vec;
	int val;
	
	printf("Cual sera el tamaño del vector?: ");
	scanf("%d", &vec);
	
	for(int i=0;i<vec;i++){
		printf("\n inserte los valores: ");
		scanf("%d", &val);
		n[i]=val;
	}
	for(int i=0;i<vec;i++){
		printf("\n La posicion %d tiene un valor de: %d",i,n[i]);
		
		if(val+n[i]==8){
		printf("\n El valor %d y %d suman 8",val,n[i]);
		}
		if(val+i==8){
		printf("\n El valor %d y %d suman 8",val,i);
		}	
		if	( i+n[i]==8){
		printf("\n El valor %d y %d suman 8",i,n[i]);
		}
	}
	
return 0;
}
