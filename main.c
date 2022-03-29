#include <stdio.h>

int mdc(int m, int n);

int main(){
  int m;
  int n;
  printf("Digite o valor de m: ");
  scanf("%d", &m);
  printf("Digite o valor de n: ");
  scanf("%d", &n);
  mdc(m, n);
}

int mdc(int m, int n){
  int div;
  int res;
  if(n<=0){
    res = m;
  }
  else if(m<=0){
    res = n;
  }
  else if(m>=n){
    for(div=m-1;div>0;div--){
      if((m%div==0)&&(n%div==0)){
        res = div;
        break;
      }
    }
  }
  else{
    for(div=n-1;div>0;div--){
      if((m%div==0)&&(n%div==0)){
        res = div;
        break;
      }
    }
  }
  return(printf("%d", res));
}