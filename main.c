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


double AdicionalPeso(double peso, double adicional){
        if(peso <= 2){
            adicional = adicional*0;
        }else if (peso > 2 && peso <= 5){
            adicional = adicional*0.05;
        }else if (peso > 5 && peso <= 10){
                    adicional = adicional*0.1;        
        }else if (peso > 10){
                    adicional = adicional*0.2;  
        }
            
        
        
    return adicional;    
}

double ModalidadeFrete(int tipo, double valorInicial){

    switch (tipo){
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



int main() {
    
    double distancia = 0, peso = 0, totfrete = 0, totpeso = 0, totmodalidade = 0, totTotal = 0, totseguro = 0;
    int opcao = 0, seguro = 0;

    printf("---Simulador de Solicitacoes---\n");
    printf("Digite a distancia em KM: ");
    scanf("%lf", &distancia);

    if (distancia > 0){
            printf("Valor do frete: R$ %.2f\n", frete(distancia));
            totfrete = frete(distancia);
    }else{
        printf("Digite uma distancia valida!\n");
        return 0;
    }

    printf("Digite o peso do produto: KG ");
    scanf("%lf", &peso);
    
    if(peso > 0){
        printf("Valor do adicional de peso: R$ %.2f\n", AdicionalPeso(peso,totfrete));
        totpeso = AdicionalPeso(peso,totfrete);
    }else{
        printf("Digite um peso valido!");
        return 0;
    }
    
    do {
        printf("\nEscolha a modalidade:\n1 - Economica\n2 - Expressa\n3 - Prioritaria\nOpcao: ");
        scanf("%d", &opcao); 

        if (opcao < 1 || opcao > 3) {
            printf("\nOpcao invalida! Digite apenas 1, 2 ou 3.\n");
        }
    } while (opcao < 1 || opcao > 3); 

    totmodalidade = ModalidadeFrete(opcao, totfrete);
    printf("Valor do adicional de modalidade: R$ %.2f\n", totmodalidade);

    do
    {
        printf("Deseja contratar servico adicional de protecao no valor de R$ 7.50? \n 1 - contratar \n 2 - nao contratar \n");
        scanf("%d", &seguro);
        if (seguro == 1){
            printf("Seguro contratado no valor de R$ 7.50\n");
            totseguro = 7.50;
        }else if (seguro == 2){
            printf("Seguro nao contratado!\n");
            totseguro = 0;
        }else{
            printf("Digite um numero valido!!\n");
        }
        
        
    } while (seguro < 1 || seguro > 2);
    
        
    


    return 0;
}