# duff-s-Device
ㅇ 더프의 장치 분석 내용

더프의 장치는 Loop문의 반복 횟수를 줄이는 loop Unrolling 방법 중 하나다.
switch-case 문에서 break가 없으면 break가 나올 때 까지 코드가 실행되는 것을 활용한 코드이며 현재는 사용하지 않는 기법이다.

ㅇ switch-case문 해석

더프의 장치 입력 값으로 count가 9가 들어간다고 가정하자.
이 때 반복 값과 case 시작 값은 다음과 같다.
n = (9+7)/8 = 2
case = 9%8 = 1

따라서 switch문이 처음 시작될 때 case 1: 시점에서 시작한다.
while문의 끝에 도달했을 때 n이 1감소하여 n == 1,

그리고 루프 문의 끝에 도달했으니 처음부터 시작하지만 이때 case 1:에서 시작하는 것이 아닌
do가 있는 곳에서 시작하므로 실행 횟수는 총 1+8 번이 되며

따라서 실행 횟수는 총 9번으로 for루프 9번을 돌린 것과 같은 실행 횟수를 가진다.
