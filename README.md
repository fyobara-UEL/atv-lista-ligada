
# Atividade Lista Sequencial

O código disponibilizado pelo professor implementa uma demonstração de operação de uma **lista sequencial ordenada** com alocação de memória estática, desse modo foi requisitado aos discentes que implementassem dispositivos necessários para alocar memória de maneira dinâmica como componente avaliativo referente a disciplina de Estruturas de Dados I.

Quanto ao código, o programa foi compilado em 3 arquivos, "ListaOrdenada.h", "ListaOrdenada.c" e "ClienteOrdenada.c". O primeiro arquivo trata-se de um cabeçalho (header) que inclui a definição de algumas constantes, importação de de bibliotecas e declaração de estruturas (struct) e funções  utilizadas nos outros 2 arquivos. O segundo reúne a parte lógica das funções de manipulação e consulta da lista. Enquanto a terceira apenas as invoca as funções por meio de interface com o usuário.

Partindo para as funções disponíveis, temos basicamente inserção, busca e exclusão de elementos. Incluindo funcionalidades como busca sequencial, busca binária, e busca com sentinela, todas adaptadas para listas ordenadas.

Agora as mudanças, primeiramente nota-se mal funcionamento do programa pois no arquivo "ClienteOrdenada.c" não foi incluso o arquivo "ListaOrdenada.c". Além disso é nítido uma erro de logica na função "int  tamanhoEmBytes(LISTA*  l)" pois temos um retorno estático no valor de 16 Bytes referente ao tamanho ocupado pelo ponteiro, indicado por " return sizeof(LISTA);", para solucionarmos o problema foi substituído para "return  l->capacidade  *  sizeof(REGISTRO) +  sizeof(LISTA);".

Dadas as considerações, partimos para o principal, a lista é inicialmente alocada com uma capacidade fixa `MAX` como no original, porém com a implementação da função `resize` que é invocada tanto para **aumentar** a capacidade quando a lista fica cheia quanto para **diminuí-la** quando a quantidade de elementos cai abaixo de 25% da capacidade, garantindo um uso mais eficiente da memória. Essas decisões visam equilibrar o custo de realocação com a necessidade de manter o uso eficiente de memória, evitando tanto o desperdício de espaço quanto o custo de frequentes realocações.

Para testar, basta baixar os arquivos e executar em ambiente com interface de terminal, no arquivo cliente temos o utilização de algumas funções para demonstração da alocação de memória dinâmica, fique a vontade para realizar maiores testes😃.
