// main.c
#include "ListaOrdenada.h"
#include "ListaOrdenada.c"

int main() {
  LISTA lista;
  REGISTRO reg;

  // Inicializar a lista
  inicializarLista(&lista);

  // Exibir lista vazia
  exibirLista(&lista);
  printf("\nExibir lista crua");
  printf("Numero de elementos na lista: %i.\n", tamanho(&lista));
  printf("Tamanho da lista (em bytes): %i.\n", tamanhoEmBytes(&lista));
  printf("========================================");


  // Inserir elementos na lista
  for(int i = 0; i < 49; i++){
    reg.chave = i;
    inserirElemListaOrd(&lista, reg);
  }

  // Exibir lista após inserções
  printf("\nExibir lista apos insercao");
  exibirLista(&lista);
  printf("Numero de elementos na lista: %i.\n", tamanho(&lista));
  printf("Tamanho da lista (em bytes): %i.\n", tamanhoEmBytes(&lista));
  printf("========================================");
 
  for(int i = 50; i < 99; i++){
    reg.chave = i;
    inserirElemListaOrd(&lista, reg);
  }

  // Exibir lista apos aumento
  printf("\nExibir lista apos aumento");
  exibirLista(&lista);
  printf("Numero de elementos na lista: %i.\n", tamanho(&lista));
  printf("Tamanho da lista (em bytes): %i.\n", tamanhoEmBytes(&lista));
  printf("========================================");

  for (int i = 20; i < 99; i++)
  excluirElemListaOrd(&lista, i);

 // Exibir lista apos reducao
  printf("\nExibir lista apos reducao");
  exibirLista(&lista);
  printf("Numero de elementos na lista: %i.\n", tamanho(&lista));
  printf("Tamanho da lista (em bytes): %i.\n", tamanhoEmBytes(&lista));
  printf("========================================");

  // Buscar um elemento na lista
  printf("\nExibir busca");
  int pos = buscaSequencial(&lista, 4);
  printf("Chave 4 encontrada na posicao: %i do arranjo A.\n", pos);
  pos = buscaBinaria(&lista, 4);
  printf("Chave 4 encontrada na posicao: %i do arranjo A.\n", pos);
  pos = buscaSentinela(&lista, 4);
  printf("Chave 4 encontrada na posicao: %i do arranjo A.\n", pos);
  printf("========================================");


  // Excluir alguns elementos da lista
  printf("\nExibir alguns elementos da lista");
  if (excluirElemLista(&lista, 0)) printf("Exclusao bem sucedida: 0.\n");
  if (excluirElemLista(&lista, 1)) printf("Exclusao bem sucedida: 1.\n");
  if (excluirElemLista(&lista, 2)) printf("Exclusao bem sucedida: 2.\n");
  if (excluirElemLista(&lista, 3)) printf("Exclusao bem sucedida: 3.\n");
  if (excluirElemLista(&lista, 4)) printf("Exclusao bem sucedida: 4.\n");
  if (excluirElemLista(&lista, 5)) printf("Exclusao bem sucedida: 5.\n");
  if (excluirElemLista(&lista, 6)) printf("Exclusao bem sucedida: 6.\n");
  if (excluirElemLista(&lista, 7)) printf("Exclusao bem sucedida: 7.\n");
  if (excluirElemLista(&lista, 8)) printf("Exclusao bem sucedida: 8.\n");
  printf("========================================");

  // Exibir lista após exclusões
  printf("\nExibir lista apos exclusoes");
  exibirLista(&lista);
  printf("Numero de elementos na lista: %i.\n", tamanho(&lista));
  printf("Tamanho da lista (em bytes): %i.\n", tamanhoEmBytes(&lista));
  printf("========================================");


  // Reinicializar a lista
  printf("\nExibir lista apos reinicializar");
  reinicializarLista(&lista);
  exibirLista(&lista);
  printf("Numero de elementos na lista: %i.\n", tamanho(&lista));
  printf("Tamanho da lista (em bytes): %i.\n", tamanhoEmBytes(&lista));
  printf("========================================");

  return 0;
}
