#include <stdio.h>

//이 프로그램은  예제 파일입니다.

/*
오늘은 26년도 11월 11일 입니다.
오늘은 빼빼로 데이입니다.
야호~~~
*/

int main(){
	int a;
	double b;
	a = 10;
	b = 3;
	printf("a : %d \n", a);
	printf("a는 %d 진수로 %o \n", 8, a);
	printf("a는 %d 진수로 %d \n", 10, a);
	printf("a는 %d 진수로 %x \n", 16, a);
	
	printf("b : %f \n", b);
	printf("a / b = %f \n", (a/b));
	printf("b / a = %f \n", (b/a));
	

	printf("----------------------------------------------------");
	int a1 = 0xAF; //10101111
	int b1 = 0xB5; //10110101
	
	printf("%x \n", a1&b1);
	printf("%x \n", a1|b1);
	printf("%x \n", a1^b1);
	printf("%x \n", ~a1);
	printf("%d \n", a1);
	/* 
	>> (쉬프트연산자) : 2배 하는것과 같음
	>> : 2로 나누는 것과 같음
	*/ 
	printf("%x \n", a1<<2); //(10) 10111100 -> (2) bc
	printf("%d \n", a1<<2);
	printf("%x \n", b1>>3);

	
	// C 언어에서 입력 받기
	double celsius;
	printf("----------------------------------------------------");
	printf("섭씨 온도를 화씨 온도로 바꿔주는 프로그램 입니다. \n");
	printf("Please input celsius : ");
	scanf("%lf", &celsius);
	printf("섭씨 %f 도는 화씨로 %f 도 입니다 \n", celsius, 9 * celsius / 5 + 32);
	
	
	// if문
	printf("----------------------------------------------------");
	printf("안녕\n");
	printf("내 이름은 Psi 야 \n");
	printf("너의 이름은 뭐니?\n");

	int i;
	printf("입력하고 싶은 숫자를 입력하세요! : ");
	scanf("%d", &i);
	if (i == 7) {
		printf("당신은 행운의 숫자 7 을 입력했습니다");
	}
	else {
		printf("잘했어요~");
	}

	printf("당신은 행운의 숫자 7 을 입력했습니다");

	
	// 동전 갯수 구하기
	printf("----------------------------------------------------");
	#include <stdio.h>

	int total;
	int count500 = 0;
  	int count100 = 0;
	int count50 = 0;
  	int count10 = 0;
	
	printf("금액을 입력해보세용 : ");
    	scanf("%d", &total);

    	count500 = total / 500;
    	total = total % 500;

    	count100 = total / 100;
    	total = total % 100;

    	count50 = total / 50;
    	total = total % 50;

    	count10 = total / 10;
    	total = total % 10;

    	printf("남은 금액 : %d, 500원 : %d, 100원 : %d, 50원 : %d, 10원 : %d\n",
			total, count500, count100, count50, count10);

	
	// if문
	printf("----------------------------------------------------");
	int num;
	printf("아무 숫자나 입력해 보세요 : ");
	scanf("%d", &num);
	if (num == 7) {
		printf("행운의 숫자 7 이군요!\n");
	} else {
		printf("그냥 보통 숫자인 %d 를 입력했군요\n", num);
	}

	
	// 평균구하기
	printf("----------------------------------------------------");

	int i1;
	int subject, score;
	double sum_score = 0;
	printf("몇 개의 과목 점수를 입력 받을 것인가요?");
	scanf("%d", &subject);
	printf("\n 각 과목의 점수를 입력해 주세요 \n");
	for (i1 = 1; i1 <= subject; i1++) {
		printf("과목 %d : ", i1);
		scanf("%d", &score);
		sum_score = sum_score + score;
	}
	printf("전체 과목의 평균은 : %.2f \n", sum_score / subject);
	

	// 구구단
	printf("----------------------------------------------------");
	int num1;
	int i2;
	printf("숫자를 입력헤주세요 : ");
	scanf("%d", &num1);
	printf("구구단 %d단", num1);
	for(i2 = 1; i2 <= 9; i2++){
		printf("%d X %d = %d", num1, i2, (num1*i2));
		printf("      ");
	}
	

	// 소수판별
	printf("----------------------------------------------------");
	int isprime;
	int i3;
	printf("숫자를 입력해주세요 : ");
	scanf("%d", &isprime);
	if(isprime == 1){
		printf("소수가 아닙니다");
		
	}else if(isprime == 2){
		printf("소수입니다");
	}
	else{
		for(i3 = 2; i3 < isprime; i++ ){
                	if (isprime % i3 == 0){
                        	printf("소수가 아닙니다");
                        	break;
                	} else{
				printf("소수입니다");
				break;
			}
		}
	}
	

	// Switch문
	printf("----------------------------------------------------");	

	int input;
	printf("마이펫 업그레이드\n");
	printf("무엇을 하실 것인지 입력하세요 \n");
	printf("1. 밥주기 \n");
	printf("2. 씻기기 \n");
	printf("3. 재우기 \n");
	scanf("%d", &input);
	switch (input) {
		case 1:
			printf("아이 맛있어 \n");
			break;
		case 2:
			printf("아이 시원해 \n");
			break;
		case 3:
			printf("zzz \n");
			break;
		default:
			printf("무슨 명령인지 못 알아 듣겠어. 왈왈 \n");
			break;
	}
	
	// 배열
	printf("----------------------------------------------------");
	int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
	int i5;
	for(i5=0; i5<10; i5++){
		printf("%d", arr1[i5]);
		printf(" ");
	}


	// 다차원 배열
	printf("----------------------------------------------------");
	int arr2[3][2] = {1,2,3,4,5,6}; //2개씩 묶어서 3개로 [[1,2],[3,4],[5,6]]
	printf("%d", arr2[1][0]);
	printf("%d", arr2[2][1]);
	
	// 포인터 변수
	int *p;
	int a2;
	printf("%p \n", p); // null 출력
	a2 = 5;
	p = &a;
	printf("%p \n", p); // a의 주소 출력
	printf("%d \n", *p); // a의 값 출력

	// 포인터 변수 응용
        int *p1;
        int a3;
	int arr3[10] = {3, 2, 1, 4, 5, 8, 7, 6, 10, 9};
        printf("%p \n", p1); // null 출력
        a3 = 5;
        p = arr3;
        printf("%p \n", p1); // 배열의 주소 출력
        printf("%d \n", *p1); // 배열의 첫번째 값 출력
	printf("%d \n", *(p1+1)); // 배열의 두번째 값 출력


	return 0;

}
