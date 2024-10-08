#include <stdio.h>
#include <stdlib.h>

struct vacina {
    char nome[40];
    unsigned long int cpf;
    char vacina[20];
    char data[8];
    int lote;
    int codigo;
};

int main() {
    struct vacina controle[5];
    unsigned long int buscacpf;
    int i, leitura, cadastro, cpfvalido;

    leitura = 0;
    while (leitura != 4) {
        printf("O que voce deseja fazer? \n");
        printf("1 - Cadastrar Vacina \n");
        printf("2 - Consultar Aplicacoes \n");
        printf("3 - Consultar por CPF \n");
        printf("4 - SAIR \n\n");
        scanf("%d", &leitura);

        getchar();

        if (leitura == 1) {
            system("cls");
            printf("Quantos cadastros deseja realizar?\n");
            scanf("%d", &cadastro);
            getchar();

            for (i = 0; i < cadastro; i++) {
                printf("Digite seu nome: \n");
                scanf("%s", controle[i].nome);

                printf("Digite seu CPF: \n");
                scanf("%lu", &controle[i].cpf);

                printf("Digite qual a vacina tomada: \n");
                scanf("%s", controle[i].vacina);

                printf("Digite a data que foi tomada a vacina (dd/mm/aaaa): \n");
                scanf("%s", controle[i].data);

                printf("Digite o numero do lote da vacina:\n");
                scanf("%d", &controle[i].lote);

                controle[i].codigo = i + 1;
            }
        } else if (leitura == 2) {
            system("cls"); 
            for (i = 0; i < cadastro; i++) {
                printf("Codigo da Vacina: %d \n", controle[i].codigo);
                printf("Nome: %s \n", controle[i].nome);
                printf("CPF: %lu \n", controle[i].cpf);
                printf("Vacina tomada: %s \n", controle[i].vacina);
                printf("Data de Vacinacao: %s \n", controle[i].data);
                printf("Lote da vacina: %d \n\n", controle[i].lote);
            }
        } else if (leitura == 3) {
            system("cls");
            printf("Consulta por CPF \n");
            scanf("%lu", &buscacpf);
            getchar();

            i = 0;
            cpfvalido = 0;
            while (i < cadastro && cpfvalido == 0) {
                if (controle[i].cpf == buscacpf) {
                    cpfvalido = 1;
                } else {
                    i++;
                }
            }
            if (cpfvalido == 1) {
                printf("Nome: %s \n", controle[i].nome);
                printf("Vacina: %s \n", controle[i].vacina);
                printf("Data da vacinacao: %s \n", controle[i].data);
                printf("Lote da vacina: %d \n", controle[i].lote);
                printf("Codigo da vacina: %d \n\n", controle[i].codigo);
            } else {
                printf("CPF nao encontrado \n");
            }
        }
    }
    return 0;
}
