#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
  srand(time(NULL));

    int portaPremiada = rand() %3 + 1;
    int portaEscolhida;
    int portaVazia;
    char opcao;


  printf("Seja muito bem vindo ao nosso jogo Monty Hall\n");
  printf("Escolha uma porta 1, 2 ou 3\n");
  fflush(stdout);
  scanf("%d", &portaEscolhida);
  printf("a porta escolhida foi %d\n", portaEscolhida);
  printf("a porta premiada e %d\n", portaPremiada);

  do{
    portaVazia = rand() %3 + 1;
  }
    while(portaVazia == portaPremiada || portaVazia == portaEscolhida);
  printf("A porta vazia foi aberta\n",portaVazia);
  printf("Deseja trocar de porta? s ou n\n");
  fflush(stdout);
  scanf("%c", &opcao);
if(opcao == 's' && portaEscolhida != portaPremiada);{
  printf("infelizmente voce perdeu o premio\n");
}if(opcao == 's' && portaEscolhida == portaPremiada);{
  printf("voce acertou e ganhou o premio\n");
}if (opcao == 'n' &&portaPremiada != portaEscolhida){
  printf("voce ganhou o premio\n");
}
  return 0;
  }
