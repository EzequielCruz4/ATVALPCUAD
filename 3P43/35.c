/* Dados três números distintos, exiba-os em ordem crescente. */
/* Esse eu sinto que consigo facilmente */

#include <stdio.h>

int main(void){
  int v1, v2, v3;

  printf("Digite os tres valores: \n");
  scanf("%d %d %d",&v1,&v2,&v3);

  /* tá, não vai ser tão facilmente quanto eu achei */
  /* eu preciso identificar os valores né, então vamo lá */

  if ( v1 < v2 && v1 < v3 ){
    if ( v2 < v3)
      printf("A ordem e %d %d %d", v1,v2,v3);
    }
      if ( v2 < v1 && v2 < v3 ){
        if ( v3 < v1)
        printf("A ordem e %d %d %d", v2,v3,v1);
      }
        if ( v3 < v1 && v3 < v2 ){
          if ( v1 < v2)
          printf("A ordem e %d %d %d", v3,v1,v2);
        }

/* aqui embaixo eu dei ctrl v no de cima e só mudei os valores */

  if ( v1 < v2 && v1 < v3 ){
    if ( v3 < v2)
      printf("A ordem e %d %d %d", v1,v3,v2);
  }
  if ( v2 < v1 && v2 < v3 ){
    if ( v1 < v3)
      printf("A ordem e %d %d %d", v2,v1,v3);
  }
  if ( v3 < v1 && v3 < v2 ){
    if ( v2 < v1)
    printf("A ordem e %d %d %d", v3,v2,v1);
  }

  /* que codigo feio do satanas mas eu me orgulho de ter conseguido fazer */

  return 0;}
