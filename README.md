# Simulador de Solicitações

## Funcionalidades
- Cálculo do valor de frete baseado em faixas de quilometragem.
- Cálculo do valor do adicional de peso do produto.
- Cálculo do valor da modalidade do frete.
- Contratação de serviço adicional de proteção.
- Contratação de tentativas extras de entrega.

## Variáveis
- `distancia`: usada como parâmetro para a função `frete`.
- `peso`: usada como parâmetro para a função `AdicionalPeso`.
- `totfrete`: armazena o valor retornado pela função `frete`.
- `totpeso`: armazena o valor retornado pela função `AdicionalPeso`.
- `totmodalidade`: armazena o valor retornado pela função `ModalidadeFrete`.
- `totTotal`: armazena o valor acumulado da soma de todas as simulações executadas.
- `totseguro`: armazena o valor referente ao serviço de proteção.
- `totextra`: guarda o valor total das tentativas de entrega extras.
- `maiorValor`: compara os valores calculados e guarda o maior.
- `menorValor`: compara os valores calculados e guarda o menor.
- `valorEntregaAtual`: guarda o valor total da entrega da simulação corrente.
- `opcao`: guarda a escolha do tipo de entrega (Econômica, Expressa ou Prioritária).
- `seguro`: guarda a escolha do usuário sobre contratar ou não o seguro.
- `numentrega`: guarda a quantidade de tentativas extras de entrega solicitadas pelo cliente.
- `verifica`: guarda a condição de parada ou continuidade do laço principal do código.
- `contSimulador`: conta quantas simulações foram executadas na sessão.
- `contEco`: conta quantas vezes a modalidade Econômica foi escolhida.
- `contExp`: conta quantas vezes a modalidade Expressa foi escolhida.
- `contPri`: conta quantas vezes a modalidade Prioritária foi escolhida.

## Descrição
O projeto consiste no desenvolvimento de um sistema para cotar o valor de entregas, facilitando a elaboração e o envio de orçamentos para os clientes. Como o preço final é impactado por diversos parâmetros variáveis — como distância, peso do produto, modalidade de transporte e serviços opcionais —, a automação desse processo por meio de um sistema torna-se essencial.

## Solução
A solução foi construída de forma modular. Inicialmente, implementou-se o cálculo do frete base com base na distância. Em seguida, foram adicionados os cálculos dos adicionais de peso, modalidades e serviços extras. Ao dividir o problema em partes menores, cada regra de negócio pôde ser desenvolvida, testada e integrada na estrutura principal, resultando na resolução completa do problema.

## Declaração do Uso de Inteligência Artificial
Foram utilizadas ferramentas de Inteligência Artificial como auxílio no aprendizado prático e no passo a passo da ferramenta GitHub, incluindo comandos de terminal, criação, edição e envio de *commits*, além da vinculação de repositórios. Um exemplo de prompt utilizado foi: *"como conectar o codigo em c no vs code a um diretorio no git hub?"*

## Disciplina
Lógica de Programação