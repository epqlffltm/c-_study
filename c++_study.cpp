
/*#include<iostream>

using namespace std;

int num(void);

int main(void)
{
	int i = 0;

	i = num();

	cout << i;

	return 0;
}

int num(void)
{
	int num=0;

	cout << "양수입력" << endl;

	cin >> num;

	return num;
}*/


/*#include<iostream>

using namespace std;

int sum(int x, int y);

int main(void)
{
	int a = 10, b = 20;
	int result;

	result = sum(a, b);
	cout << result;

	return 0;
}

int sum(int x, int y)
{
	int temp;

	temp = x + y;

	return temp;
}*/


/*#include<iostream>

using namespace std;

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j;
		}
		cout << endl;
	}
}*/


/*#include<iostream>
using namespace std;

int main(void)
{
	for (int i = 1; i < 11; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}*/


/*#include<iostream>

using namespace std;

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		cout << "$" << endl;
	}

	return 0;
}*/


/*#include<iostream>

using namespace std;

int main(void)
{
	int a = 0;
	a = 10;

	do
	{
		a = a * 2;
		cout << a << endl;
	} while (a < 10);

	cout << "a:" << a << endl;

	return 0;
}*/


/*#include<stdio.h>

int main(void)
{
	int a = 1;

	do
	{
		a = a * 2;
		printf("%d\n", a);
	} while (a < 10);
	printf("a:%d\n", a);

	return 0;
}*/


/*#include<iostream>

using namespace std;

int main(void)
{
	char s, cap = 'G';

	if ((cap >= 'A') && (cap <= 'z'))
	{
		s = cap + ('a' - 'A');
	}
	printf("%c %d", cap, '\n');
	printf("%c", s);

	return 0;
}*/



/*void input(double* pa, int size);
double find(double* pa, int size);

int main(void)
{
	double ary[5];
	double max;

	int size = sizeof(ary) / sizeof(ary[0]);
	input(ary,size);
	max = find(ary, size);
	printf("%1lf\n", max);

	return 0;
}

void input(double* pa, int size)
{
	int i;

	printf("%d의 실수값: ", size);
	for (i = 0; i < size; i++)
	{
		scanf_s("%lf", pa + i);
	}
}

double find(double* pa, int size)
{
	double max;
	int i;

	max = pa[0];
	for (i = 1; i < size; i++)
	{
		if (pa[i] > max)max = pa[i];
	}
	return max;
}*/


/*#include<iostream>

using namespace std;

void print_ary(int* pa, int size);

int main(void)
{
	int ary1[5] = { 10,20,30,40,50 };
	int ary2[7] = { 15,25,35,45,55,65,75 };

	print_ary(ary1, 5);
	cout << endl;
	print_ary(ary2, 7);

	return 0;
}

void print_ary(int* pa, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << pa[i] << "\t";
	}
}*/

/*#include<iostream>

using namespace std;

void print_ary(int* pa);

int main()
{
	int ary[5] = { 10,20,30,40,50 };
	print_ary(ary);

	return 0;
}

void print_ary(int* pa)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		cout << pa[i] << endl;
	}
}
*/

/*#include<iostream>

using namespace std;

int main(void)
{
	int ary[5] = { 10,20,30,40,50 };
	int* pa = ary;
	int* pb = pa + 3;

	printf("pa: %u\n", *pa);
	printf("pb: %u\n", *pb);

	pa++;
	printf("pb-pa:%u\n", pb - pa);

	if (pa < pb)
		printf("%d\n", *pa);
	else
		printf("%d\n", *pa);

	return 0;
}*/

/*#include<iostream>

using namespace std;

int main()
{
	int ary[3] = { 10,20,30 };
	int* pa = ary;
	int i;

	printf("배열의 값");
	for (i = 0; i < 3; i++)
	{
		printf("%5d", *pa);
		pa++;
	}
	return 0;
}*/

/*#include<iostream>

using namespace std;

int main(void)
{
	int ary[3];
	int* pa = ary;
	int i;

	*pa = 10;
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1];

	for (i = 0; i < 3; i++)
	{
		printf("%5d", pa[i]);
	}

	return 0;
}*/


/*#include<iostream>

using namespace std;

int main()
{
	int ary[3];
	int i=0;

	*(ary + 0) = 10;
	*(ary + 1) = *(ary + 0) + 10;

	cout << "세번째 배열 요소 입력" << endl;
	scanf_s("%d", ary + 2);

	for (i = 0; i < 3; i++)
	{
		printf("%5d", *(ary + i));
	}

	return 0;
}*/

// c++_study.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

/*#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}
*/
// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
