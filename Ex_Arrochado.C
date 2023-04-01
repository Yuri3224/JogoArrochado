#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main(void){
  //definindo o número aleatório de 0 a 100 e as demais variáveis
  srand(time(NULL));
  int numAleatorio = rand()%101, chuteAtual=0, chance = 3;
  int maiorChute = 0, menorChute = 100;
  int i;

  //menu linkado com swtichcase
 
  //while pra caso o usuário queira trolar  usando outros números no swtich
  
  while (chance !=1 && chance != 2 && chance != 0)
  {
  printf("\n---Duvido tu acertar um numero de 0 a 100 >:D---\n");
  printf("\nvai querer com ou sem limite de chance?");
  printf("\n [1]- Com limite de 7 chances \n [2]- Sem limite de chances\n [0]- Para sair \n");
  getchar();
  scanf("%d", &chance);
  system("cls");
    switch (chance){
      case 0:
      printf("Ate a proxima ;D");
      break;
      case 1:
        system("cls");
        printf("--VOCE TEM 7 CHANCES PARA ACERTAR--");
        /*for rodando 7 vezes para limitar as tentativas*/
        for (i = 0; i < 7; i++){
              printf("\n\nTentativa numero: %d.", i+1);
              printf("\nDigite um numero para tentar acertar:");
              scanf("%d", &chuteAtual);
            if(chuteAtual>maiorChute){
              maiorChute = chuteAtual;
            }
            if (chuteAtual < menorChute) {
              menorChute = chuteAtual;
            }
            printf("\nO maior chute foi: %d", maiorChute);
            printf("\nO menor chute foi: %d", menorChute);

          
        
              if (chuteAtual>numAleatorio){
                printf("\nErroou!\nO numero eh MENOR do que %d", chuteAtual);
                }
              if (chuteAtual<numAleatorio){
                printf("\nErroou!\nO numero eh MAIOR do que %d", chuteAtual);
                }
              if (chuteAtual== numAleatorio) {
                printf("\n\nACERTOU MISERAVI!\n");
                printf("\aO numero era %d", numAleatorio);
                return 0;
            }
          }
        printf("\n\nVOCE PERDEU!");
        printf("\a\nO numero era %d", numAleatorio);
        break;

        /*Modo livre utilizando do-while, enquanto o abençoado não
        acertar, o programa fica rodando.*/
      case 2:
        system("cls");
        printf("--SEM LIMITES DE CHANCES--");
        do{
          printf("\n\nDigite um numero para tentar acertar: ");
          if(chuteAtual<menorChute && chuteAtual> maiorChute){
            printf("Digite outro numero");
          }
          scanf("%d", &chuteAtual);

          if(chuteAtual>maiorChute){
              maiorChute = chuteAtual;
            }
            if (chuteAtual < menorChute) {
              menorChute = chuteAtual;
            }
            printf("\nO maior chute foi: %d", maiorChute);
            printf("\nO menor chute foi: %d", menorChute);
          
            if (chuteAtual>numAleatorio){
              printf("\nErroou!\n O numero eh MENOR do que %d", chuteAtual); 
            }
            if (chuteAtual<numAleatorio){
             printf("\nErroou!\nO numero eh MAIOR do que %d", chuteAtual);
            }
        } while (chuteAtual!=numAleatorio);
          printf("\n\nAcertou miseravi!\n");
          printf("\aO numero era %d\n", numAleatorio);
          break;
          return 0;
        
      //o famoso pensando no erro do usuário
      default:
      printf("Serio que tu digitou %d?!, Meu fi eh 1 ou 2, voce sabe ler nao?\n", chance);

        break;
  }
  }
   


  return 0;
}