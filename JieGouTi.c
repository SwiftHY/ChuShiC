#include <stdio.h>
typedef struct stu 
{
	char name[20];
	int age;
}Stu;
struct af
{
	int a;
	Stu s;
	char c[20];
};
int main()
{
	struct af a = { 1,{"heyi",10},180 };
	struct af* p = &a;
	printf("%d\n", a.a); //结构体a变量中的成员变量a
	printf("%d\n", (*p).a);
	printf("%d\n", p->a);
	printf("%s\n", a.s.name);
	printf("%s\n", p->s.name);
	printf("%s\n", (&(a.s))->name);
	printf("%s\n", (&((*p).s))->name);
	printf("%s\n", (&(p->s))->name);
	/*struct a t = { 1,{"da",18} };
	struct a* p = &t;
	printf("%d\n", t.s.age);
	printf("%d\n", (*p).s.age);
	printf("%d\n", p->s.age);*/
	return 0;
}