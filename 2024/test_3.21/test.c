#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int a = 0;
//	int* p = &a;
//	//printf("%p\n", &a);
//	*p = 20;
//	printf("%d\n", a);
//
//	return 0;
//}

//struct STU
//{
//	char name[20];
//	char sex[10];
//	int age;
//	char tele[20];
//};
//
//void print(struct STU* p)
//{
//	printf("%s %s %d %s\n", (*p).name, (*p).sex, (*p).age, (*p).tele);
//	printf("%s %s %d %s\n", p->name, p->sex, p->age, p->tele);
//
//}
//
//int main()
//{
//	struct STU s = { "zhangsan","male",20,"18712312138" };
//	printf("%s %s %d %s\n", s.name, s.sex, s.age, s.tele);
//
//	print(&s);
//
//	return 0;
//}

//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	//printf("%d %d", a / b, a % b);
//	if (a > 0 && b < 10000 && b!=0)
//	{
//		printf("%d %d", a / b, a % b);
//	}
//
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//
//	if (age < 18)
//		printf("青少年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 40)
//		printf("壮年\n");
//	else
//		printf("老年\n");
//
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 2;
//	scanf("%d", &a);
//	if (0 == a % b)
//		printf("不是奇数。\n");
//	else
//		printf("是奇数。\n");
//
//	return 0;
//}

//int main()
//{
//	int i;
//	for (i = 1; i <= 100; i++)
//		if (i % 2 == 1)
//			printf("%d ", i);
//
//	return 0;
//}

//int main()
//{
//	double pi = 3.1415926;
//	double r = 0.0;
//	scanf("%lf", &r);
//	double v = (4.0 / 3) * pi * (r * r * r);
//	printf("%3f\n", v);
//
//	return 0;
//}

int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:;
	case 2:;
	case 3:;
	case 4:;
	case 5:
		printf("weekday\n");
		break;
	case 6:;
	case 7:
		printf("weekend\n");
	}

	return 0;
}

