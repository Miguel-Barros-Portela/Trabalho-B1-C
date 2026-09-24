#include <stdio.h>

double frete(double km) {
    double ValorFrete = 0;

    if (km <= 5) {
        ValorFrete = km * 1.2 + 8;
    } else if (km > 5 && km <= 15) {
        ValorFrete = km * 1.2 + 12;
    } else if (km > 15 && km <= 30) {
        ValorFrete = km * 1.2 + 18;
    } else {
        ValorFrete = km * 1.2 + 25;
    }
    return ValorFrete;
}

double AdicionalPeso(double peso, double adicional) {
    if (peso <= 2) {
        adicional = adicional * 0;
    } else if (peso > 2 && peso <= 5) {
        adicional = adicional * 0.05;
    } else if (peso > 5 && peso <= 10) {
        adicional = adicional * 0.1;
    } else if (peso > 10) {
        adicional = adicional * 0.2;
    }
    return adicional;
}

double ModalidadeFrete(int tipo, double valorInicial) {
    switch (tipo) {
        case 1:
            valorInicial = valorInicial * 0;
            break;
        case 2:
            valorInicial = valorInicial * 0.15;
            break;
        case 3:
            valorInicial = valorInicial * 0.30;
            break;
        default:
            break;
    }
    return valorInicial;
}

int ValidaSeguro(int s){
    double valseg;
        if (s == 1) {
                printf("Seguro contratado no valor de R$ 7.50\n");
                valseg = 7.50;
            } else if (s == 2) {
                printf("Seguro nao contratado!\n");
                valseg = 0;
            } else {
                printf("Digite um numero valido!!\n");
            }

    return 0;
}

int main() {
    double distancia = 0, peso = 0, totfrete = 0, totpeso = 0, totmodalidade = 0;
    double totTotal = 0, totseguro = 0, totextra = 0, maiorValor = 0, menorValor = 0;
    double valorEntregaAtual = 0;
    int opcao = 0, seguro = 0, numentrega = 0, verifica = 1;
    int contSimulador = 0, contEco = 0, contExp = 0, contPri = 0;

    while (verifica != 0) {
        printf("\n--- Simulador de Solicitacoes ---\n");
        
        printf("Digite a distancia em KM: ");
        scanf("%lf", &distancia);

        if (distancia > 0) {
            totfrete = frete(distancia);
            printf("Valor do frete base: R$ %.2f\n", totfrete);
        } else {
            printf("Digite uma distancia valida!\n");
            continue;
        }

        printf("Digite o peso do produto (KG): ");
        scanf("%lf", &peso);
        
        if (peso > 0) {
            totpeso = AdicionalPeso(peso, totfrete);
            printf("Valor do adicional de peso: R$ %.2f\n", totpeso);
        } else {
            printf("Digite um peso valido!\n");
            continue;
        }
        
        do {
            printf("\nEscolha a modalidade:\n1 - Economica\n2 - Expressa\n3 - Prioritaria\nOpcao: ");
            scanf("%d", &opcao); 

            if (opcao < 1 || opcao > 3) {
                printf("\nOpcao invalida! Digite apenas 1, 2 ou 3.\n");
            }
        } while (opcao < 1 || opcao > 3); 

        if (opcao == 1) contEco++;
        else if (opcao == 2) contExp++;
        else if (opcao == 3) contPri++;

        totmodalidade = ModalidadeFrete(opcao, totfrete);
        printf("Valor do adicional de modalidade: R$ %.2f\n", totmodalidade);
        
        do {
            printf("\nDeseja contratar servico adicional de protecao no valor de R$ 7.50?\n1 - Contratar\n2 - Nao contratar\nOpcao: ");
            scanf("%d", &seguro);
            totseguro = ValidaSeguro(seguro);
        } while (seguro < 1 || seguro > 2);

        printf("\nDigite o numero de tentativas de entregas adicionais que deseja (0 se nao deseja): ");
        scanf("%d", &numentrega);
        if (numentrega > 0) {
            totextra = numentrega * 4;
            printf("O numero de entregas extras contratado: %d\n", numentrega);
            printf("O valor das entregas extras: R$ %.2f\n", totextra);
        } else {
            totextra = 0;
            printf("Sem tentativas extras de entrega!\n");
        }

        valorEntregaAtual = totfrete + totpeso + totmodalidade + totseguro + totextra;
        printf("\nO valor final desta entrega: R$ %.2f\n", valorEntregaAtual);

        totTotal += valorEntregaAtual;
        contSimulador++;

        if (contSimulador == 1) {
            maiorValor = valorEntregaAtual;
            menorValor = valorEntregaAtual;
        } else {
            if (valorEntregaAtual > maiorValor){ 
                maiorValor = valorEntregaAtual;
            }
            if (valorEntregaAtual < menorValor){
                 menorValor = valorEntregaAtual;
            }
        }

        printf("\n------------------------------------------------\n");
        printf("Digite 0 para PARAR e exibir o resumo, ou qualquer outro número para CONTINUAR: ");
        scanf("%d", &verifica);
    } 

    printf("\n------------------------------------------------\n");
    printf("Quantidade total de entregas processadas: %d\n", contSimulador);
    printf("Valor total calculated na sessao: R$ %.2f\n", totTotal);

    if (contSimulador > 0) {
        printf("Valor médio das entregas: R$ %.2f\n", totTotal / contSimulador);
        printf("Maior valor de entrega encontrado: R$ %.2f\n", maiorValor);
        printf("Menor valor de entrega encontrado: R$ %.2f\n", menorValor);
    } else {
        printf("Nenhuma entrega foi processada com sucesso.\n");
    } 

    printf("Quantidade de entregas Econômicas: %d\n", contEco);
    printf("Quantidade de entregas Expressas: %d\n", contExp);
    printf("Quantidade de entregas Prioritárias: %d\n", contPri);


    return 0;
}