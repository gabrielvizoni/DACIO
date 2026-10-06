#include<stdio.h>
#include<stdlib.h>

//faça um programa que leia 10 valores e indique o maior entre os 5 primeiros e o menor entre os 5 restantes

int compMaior(int a, int b){ // em uma função as variaveis sao sempre declaradas para uso exclusivo da funcao como visto em (int a, int b) sem o int, nao funciona
	if (a>b)	return a;
	else 	return b;
}

int compMenor(int a, int b){
	if (a<b)	return a;
	else 	return b;
}


int main (){
	int valor[10]; // seta a variavel para guardar 10 valores 
	int i, maior, menor; // para auxiliar nas funcoes 
	
	for(i = 0; i < 10; i++){ // faz um contador que percorre os 10 valores digitados e evita printf e scanf
		printf("Valor %d: ",i+1); 
		scanf("%d", &valor[i]);
	}
	
	maior = valor[0]; // aqui a variavel maior vai receber o numero do primeiro slot da variavel valor  
	for(i = 0; i < 5; i++){ // o "int = 0" quer dizer que o contador começa na slot 0, e vai percorrer até o valor "i < 5", o i++ vai avançar o slot (próximo numero)
		maior = compMaior(maior, valor[i]); //maior vai chamar a funcao compMaior e vai comparar com o próximo numero, se ele for maior, esse valor será atribuido para a variavel maior, e por ai vai até o quinto valor digitado
	}
	
	menor = valor[5]; // aqui segue a mesma lógica, mas para os numeros menores, e percorrendo o slot 6 em diante
	for(i = 6; i < 10; i++){
		menor = compMenor(menor, valor[i]);
	}
	
	
	printf("---------------------------------------------\n");	
	printf("Valor maior entre os 5 primeiros: %d\n",maior);	
	printf("Valor menor entre os 5 primeiros: %d\n",menor);
	
	return 0;
}
