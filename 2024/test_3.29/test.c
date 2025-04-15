#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout<<\"Hello world!\"<<endl;\n");
//
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0, e = 0;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	e = (a > b) ? a : b;
//	e = (e > c) ? e : c;
//	e = (e > d) ? e : d;
//	printf("%d\n", e);
//
//	return 0;
//}

//#define PI 3.1415926

//int main()
//{
//	double r = 0.0f, v = 0.0f;
//	scanf("%lf", &r);
//	v = 4 / 3.0 * PI * r * r * r;
//	printf("%.3lf\n", v);
//
//	return 0;
//}

int main()
{
	float BMI = 0, weight = 0, height = 0.0;
	scanf("%f %f", &weight, &height);
	BMI = weight / (height / 100.0) / (height / 100.0);
	printf("%.2f\n", BMI);

	return 0;
}