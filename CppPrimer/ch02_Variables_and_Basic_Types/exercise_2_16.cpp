/*
 * 练习2.16：考察下面的所有赋值然后回答：哪些赋值是不合法的？为什么？哪些赋值是合法的？它们执行了什么样的操作？
 *
 * int i = 0, &r1 = i;	double d = 0, &r2 = d;
 * (a) r2 = 3.14159;	(b) r2 = r1;
 * (c) i = r2;			(d) r1 = d;
 */

/*
 * (a)合法，将3.14159赋值给r2绑定到的对象d。
 * (b)合法，将r1绑定到的对象i的值赋值给r2绑定到的对象d。
 * (c)合法，将r2绑定到的对象d的值赋值给i。
 * (d)合法，将d的值赋值给r1绑定到的对象i。
 */

int main()
{
	int i = 0, &r1 = i;  double d = 0, &r2 = d;

	r2 = r1;

	return 0;
}
