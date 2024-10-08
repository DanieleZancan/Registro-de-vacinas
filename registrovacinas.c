#include <stdio.h>
#include <stdlib.h>


struct vacina{
	char nome[20];
	unsigned long int cpf;
	char vacina[20];
    char data[10];
	int lote;
	int codigo;
	};

int main(int argc, char *argv[]) {
	struct vacina controle[5];
	unsigned long int buscacpf;
	int i;
	int leitura;
	int cadastro;
	int cpfvalido;
    
	leitura = 0;
	while (leitura != 4){
	
	
	printf("O que voce deseja fazer? \n");
	printf("1-Cadastrar Vacina \n");
	printf("2-Consultar Aplicacoes \n");
	printf("3-Consultar por CPF \n");
	printf("4-SAIR \n\n");
	scanf("%d", &leitura);
	
	fflush(stdin);
	if (leitura == 1){
		system("cls");
		printf("Quantos cadastro deseja realizar?\n");
		scanf("%d", &cadastro);
 		for (i=0; i<cadastro; i++){
	     printf("Digite seu nome: \n");
	     scanf("%s", &controle[i].nome);
	     printf("Digite seu CPF: \n");
	     scanf("%d", &controle[i].cpf);
	     printf("Digite qual a vacina tomada: \n");
	     scanf("%s", &controle[i].vacina);
	     printf("Digite a data que foi tomada a vacina: \n");
	     scanf("%s", &controle[i].data);
	     printf("Digite o numero do lote da vacina:\n");
	     scanf("%d", &controle[i].lote);
	     
	     controle[i].codigo = i+1;
          fflush(stdin);
}
}
    else
    {
    	if (leitura == 2){
    		system("cls");
    		fflush(stdin);
			for (i=0; i<cadastro; i++){
			
				
				 printf("Codigo Vacina %d\n", controle[i].codigo);
				 printf("Nome: %s\n", controle[i].nome);
				 printf("CPF: %d\n", controle[i].cpf);
				 printf("Vacina tomada: %s \n", controle[i].vacina);
				 printf("Data Vacinacao: %s \n", controle[i].data);
				 printf("Lote da vacina: %d \n\n", controle[i].lote);
			}	
				}
	

     else
    {
    	if (leitura == 3){
    		system("cls");
				 printf("Consulta por CPF \n");
				 scanf("%d", &buscacpf);
				 fflush(stdin);
				 i = 0;
				 cpfvalido = 0;
				 
				 while ((i<cadastro) && (cpfvalido ==0)){
			
				 if (controle[i].cpf == buscacpf)
				 
				 cpfvalido = 1;
				 else
				 
				 i++;
				 }
				 if (cpfvalido == 1){
				 
				 	printf("Nome: %s\n", controle[i].nome);				
			        printf("Vacina: %s \n", controle[i].vacina);
				    printf("Data da vacinacao: %s \n", controle[i].data);
				    printf("Lote da vacina: %d \n", controle[i].lote);
				    printf("Codigo da vacina %d \n\n", controle[i].codigo);
				 }
				 else{
				 
		          printf("CPF não encontrado \n");
			
				}
			
		
			}
			
			
		
	}
	}
	
	}
		
		
	


	return 0;


}



