#include <stdio.h> 
main() {
  int a;
  printf("정수를 입력하세요: ");
  scanf("%d", &a );

  if (a%2==0) {  //'='은 대입용 '=='이 같다라는 뜻
    printf ("짝수");
  }
  else 
    printf("홀수");
}