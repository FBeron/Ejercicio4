#include <stdio.h>
#include <stdlib.h>

int paso(){
  float step = drand48();
  if (step >= 0.5){
    return -1;
  } else{
    return 1;
  }
}

int caminata(){
  int pos = 0;
  int i;
  for (i=0;i < 501;i++){
      pos = pos + paso();
    }
  return pos;
}

int main(){
  int i;
  for(i=0; i <= 100000; i++){
    int end = caminata();
    printf("%d \n", end);
  }

  return 0;
}
