#include<stdio.h>

int expo(int a, int b){
	int c = 0;
	if(a == 0){
		return 0;
	}else if(b == 0){
		return 1;
	}else{
		c = a * expo(a, b - 1);
		return c;
	}
}

int sus(int dom){
	if(dom == 0){
		return 0;
	}else if(dom == 1){
		return 5;
	}else{
		return (sus(dom-1) * 3);
	}
}

int main(){
	int a = 0, b = 0, c = 0, dom = 0, opc = 1;

	while(opc != 0){
		printf("1.- Problema 1: potencia\n");
		printf("2.- Problema 2: sucesion\n");
		printf("0.- Salir\n");
		scanf("%d", &opc);

		switch(opc){
			case 1:
				printf("Que numero desea elevar? ");
				scanf("%d", &a);
				printf("A que potencia desea elevarlo? ");
				scanf("%d", &b);

				printf("%d^%d = ", a, b);
				for(int i = 1; i <= b; i++){
					printf("%d", a);
					if(i < b)
						printf(" * ");
				}
				printf(" = %d\n", expo(a, b));
				printf("\n");
				break;
			case 2:
				printf("Sucesion de 5 X 3\n");
				printf("Hasta que posicion del dominio desea la sucesion? ");
				scanf("%d", &dom);

				for(int i = 1; i <= dom; i++){
					printf("%d.- %d\n", i, sus(i));
				}
				printf("\n");
				break;
			default: printf("Adios!!\n");
		}
	}
}