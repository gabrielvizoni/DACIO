#include <stdio.h>
#include <stdlib.h>

int main (){
	int opcao;
	
	do{
		printf("\nDigite o exercicio a ser resolvido\n");
		printf("\n 0 - consecutivos \n");
		printf("\n 1 - imc \n");
		printf("\n 2 - torre de hanoi \n");
		printf("\n 3 - sair \n");
		scanf("%d", &opcao);
		
		switch (opcao){
			case 0: {
				int n1,n2,n3,n4,n5;
				int consec = 0;
				printf("\n NUMEROS CONSECUTIVOS \n");
                printf("Digite 5 numeros inteiros:\n");
                scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
                
                if(n2 == n1 +1){
                	printf("\n%d e %d sao consecutivos\n",n1,n2);
                	consec = 1;
            	}if(n3 == n2 +1){
                	printf("\n%d e %d sao consecutivos\n",n1,n2);
                	consec = 1;
            	}if(n4 == n3 +1){
                	printf("\n%d e %d sao consecutivos\n",n1,n2);
                	consec = 1;
            	}if(n5 == n4 +1){
                	printf("\n%d e %d sao consecutivos\n",n1,n2);
                	consec = 1;
            	} if (consec = 0){
            		printf("\nnao achou nennhum consecutivo\n");
				}                
				break;
			}
			case 1: {
				float peso, altura, imc;
				printf("\n digite sua altura \n");
				scanf("%f", &altura);
                printf("\n digite seu peso \n ");
                scanf("%f", &peso);
                
                imc = peso / (altura*altura);
                
                if(imc < 18.5){
                	printf("\n abaixo do peso \n");                	
				}
				if(imc >= 18.5 && imc <= 24.9){
                	printf("\n normal \n");                	
				} 
				if(imc >= 25.0 && imc <= 29.9){
                	printf("\n acima do peso \n");                	
				}                       
				if (imc > 30.0){
					printf("\n obeso \n");
				}
				break;
			}
			
			case 2: {
				int a,b,c;
				printf("\n torre de hanoi \n");
                printf("Inicio:  A = %d | B = %d | C = %d \n", a, b, c);
					a = a - 1; // remove o menor do A 
                	c = c + 1; // joga o menor no C
                printf("1) Disco 1 de A para C: A = %d | B = %d | C = %d\n", a, b, c);
                	a = a - 2; // remove o m�dio do A
                	b = b + 2; // joga o m�dio no B
                printf("2) Disco 2 de A para B: A = %d | B = %d | C = %d\n", a, b, c);
                	c = c - 1; // remove o menor do C
                	b = b + 1; // joga o menor no B
                printf("3) Disco 1 de C para B: A = %d | B = %d | C = %d\n", a, b, c);
                	a = a - 3; // remove o maior do A
                	c = c + 3; // joga o maior no C
                printf("4) Disco 3 de A para C: A = %d | B = %d | C = %d\n", a, b, c);
                	b = b - 1; // remove o menor do B
					a = a + 1; // joga o menor no A
                printf("5) Disco 1 de B para A: A = %d | B = %d | C = %d\n", a, b, c);
                	b = b - 2; // remove o m�dio do B
                	c = c + 2; // joga o m�dio no C
                printf("6) Disco 2 de B para C: A = %d | B = %d | C = %d\n", a, b, c);
					a = a - 1; // remove o menor do A
					c = c + 1; // joga o menor no C 
				printf("7) Disco 1 de A para C: A = %d | B = %d | C = %d\n", a, b, c);
				printf("Fim: A = %d | B = %d | C = %d \n", a, b, c);
				break;
			}
			case 3:
                printf("\n Saindo do programa... \n");
                break;

            default:
                printf("\n Opcao invalida! \n");
        }
                
		} while (opcao != 3);
		
		return 0;
}

