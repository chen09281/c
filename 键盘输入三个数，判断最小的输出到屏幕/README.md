键盘输入三个数判断最小的输出到屏幕
#include <stdio.h> //头文件
int main() {
	int a, b, c, min; //定义a,b,c.min
	scanf("%d %d %d", &a,&b,&c); //输入a.b.c的数据
	min = a; //min的数值=a数值
	if (min>b) //如果min大于b
	{
		if (min > c) //如果min大于c
			min = c; //那么min等于c
		else //否则
			min = b;
	}
	else if (a > c)
	{
		min = c;
	}
	else
	{
		min = a;
	}
	printf("%d",min);
	return 0;
}
