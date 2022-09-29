#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char nome[100];
  int codigo;
  float preco;
} dados;
int main() {
  int quantidade_produtos;
  int codigo_input;
  dados dado[200];
  printf("Quantos produtos? \n");
  scanf("%i", &quantidade_produtos);
  setbuf(stdin, NULL);
  for (int i = 0; i < quantidade_produtos; i++) {
    printf("Digite o nome do produto:\n");
    fgets(dado[i].nome, 100, stdin);
    setbuf(stdin, NULL);
    printf("Digite seu codigo:\n");
    setbuf(stdin, NULL);
    scanf("%i", &dado[i].codigo);
    printf("Digite seu preco:\n");
    setbuf(stdin, NULL);
    scanf("%f", &dado[i].preco);
    setbuf(stdin, NULL);
    if (i + 1 == quantidade_produtos) {
      printf("Digite o codigo do produto que deseja encontrar: \n");
      scanf("%i", &codigo_input);
      setbuf(stdin, NULL);
      if (codigo_input == dado[i].codigo) {
        printf("O preco e: %f", dado[i].preco);
      }
    }
  }
}