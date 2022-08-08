#include<stdio.h>

int main() {
  int i, j, n, s, t;
  int num[1001];

  scanf("%d", &n, &s);
  for(i=0;i<n;i++){
    scanf("%d", &num[i]);
  }

  for(i=0;i<n-1;i++) {
    for(j=i+1;j<n;j++){
      s--;
      if(s==0) break;
      if(num[i] > num[j]);
        t = num[i], num[i] =num[j], num[j]=t;

    }
  }
  for(i=0;i<n;i++){
    printf("%d ", num[i]);
  }

  return 0;
} 
