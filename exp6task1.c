#include<stdio.h>
void counter() {
    //int counter = 0;
    static int count = 0;
    count++;
    printf("Counter Function Called : %d\n",count);
}
int main() {
printf("\t\t\t *** Storage Class ***\n\n");
 for (int i=1; i<=51;i++)

{
    counter();
}
  return 0;
}
/**** Storage Class ***

Counter Function Called : 1
Counter Function Called : 2
Counter Function Called : 3
Counter Function Called : 4
Counter Function Called : 5
Counter Function Called : 6
Counter Function Called : 7
Counter Function Called : 8
Counter Function Called : 9
Counter Function Called : 10
Counter Function Called : 11
Counter Function Called : 12
Counter Function Called : 13
Counter Function Called : 14
Counter Function Called : 15
Counter Function Called : 16
Counter Function Called : 17
Counter Function Called : 18
Counter Function Called : 19
Counter Function Called : 20
Counter Function Called : 21
Counter Function Called : 22
Counter Function Called : 23
Counter Function Called : 24
Counter Function Called : 25
Counter Function Called : 26
Counter Function Called : 27
Counter Function Called : 28
Counter Function Called : 29
Counter Function Called : 30
Counter Function Called : 31
Counter Function Called : 32
Counter Function Called : 33
Counter Function Called : 34
Counter Function Called : 35
Counter Function Called : 36
Counter Function Called : 37
Counter Function Called : 38
Counter Function Called : 39
Counter Function Called : 40
Counter Function Called : 41
Counter Function Called : 42
Counter Function Called : 43
Counter Function Called : 44
Counter Function Called : 45
Counter Function Called : 46
Counter Function Called : 47
Counter Function Called : 48
Counter Function Called : 49
Counter Function Called : 50
Counter Function Called : 51
*/

