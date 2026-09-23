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
int main() {
    
    double distancia = 0;

    printf("---Simulador de Solicitacoes---\n");
    printf("Digite a distancia em KM: ");
    scanf("%lf", &distancia);

    if (distancia > 0){
            printf("Valor do frete: R$ %.2f\n", frete(distancia));
    }else{
        printf("Digite uma distancia valida!\n");
    }
   
    
    

    return 0;
}