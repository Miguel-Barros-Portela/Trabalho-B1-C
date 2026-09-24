 # Simulador de Solicitações

## Funcionalidade
 - Cálculo do valor de frete baseado em faixas de quilometragem.

 - Cálculo do valor do adicional de peso do produto.

 - Cálcular o valor da modalidade do frete.

 - Contratar serviço adicional de proteção.

 - Contratar tentativas extras de entrega.

 ## Variaveis
 - "distancia" usada como parametro para a função frete.
 - "peso" usada como parametro para função AdicionarPeso.
 - "totfrete" usada para extrair o valor do resultado da função frete e salvar.
 - "totpeso" usada para extrair o valor do resultado da função AdicionalPeso e salvar.
 - "totmodalidade" usada para extrair o valor do resultado da função ModalidadeFrete e salvar.
 - "totTotal" usada para armazenar o valor da soma de dotas as simulações rodadas.
 - "totseguro" usada para extrair o valor do resultado da função ValidaSeguro e salvar.
 - "totextra" guarda o valor das tentativas de entraga extra.
 - "maiorValor" compara os valores e guarda o maior.
 - "menorValor" compara os valores e guarda o menor.
 - "valorEntregaAtual" guarda o valor da entrega da rodada atual.
 - "opcao" guarda o valor que define o tipo de entrega (Econômicas,  Expressas, Prioritárias).
 - "seguro" guarda o valor que define a escolha de contratar ou não o seguro.
 - "numentrega" guarda o valor definido pelo cliente de vezes de tentativas extras de entrega.
 - "verifica" guarda o parametro usado para parar ou continuar o codigo.
 - "contSimulador" conta quantas vezes o simulador foi rodado.
 - "contEco" conta quantas vezes foi escolida a entrega economica.
 - "contExp" conta quantas vezes foi escolida a entrega Expressa.
 - "contPri" conta quantas vezes foi escolida a entrega Prioritária.