#include <stdio.h>
#include <string.h>
void transferNumbertoString(int n, char s[]);
void reverseString(char s[]);
void inputData();

int main()
{
    inputData();
    return 0;
}
void transferNumbertoString(int n, char s[])
{   int i=0,sign=0;
    if ((sign = n) < 0)
        n = -n;
    i=0;
    do {
        s[i]= n % 10 + '0';
        i++;
    } while ((n /= 10) > 0);
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverseString(s);
}
void reverseString(char s[])
{
    int i, j;
    char tmp;
    j = strlen(s)-1;
    for (i = 0;i<j; i++, j--) {
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }
}
int test (){
    int n=-25;
    return n;
}
void inputData(){
    int n=test();
    //printf("input number\n");
    //scanf("%d",&n);
    char const size=20;
    char s[size];
    printf ("Numder:%d\n",n);
    transferNumbertoString(n,s);
    printf("String:%s\n",s);

}