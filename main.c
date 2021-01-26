#include <stdio.h>

struct Person{
    char a;
    int b;
    char c;
    int d;
};
void test02(){
    struct Person p= {'a', 100, 'b', 200};
    printf("%d\n",&p);
    printf("%d\n",&(p.a));
    printf("%d\n",&(p.b));
    printf("%d\n",&(p.c));
    printf("%d\n",&(p.d));
    printf("%d\n",sizeof(p));
    printf("%d\n",sizeof(struct Person));
    p.d = 1000;
    //printf("%d",*(int *)((char *)&p + 12));
}
int main() {
    test02();
    return 0;
}
