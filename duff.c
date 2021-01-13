#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define log(a, b, c) printf("(%d, %d) count : %d \n", a, b, c);


int duffs_device(char *from, char *to, int count)
{
  {
    int n = (count + 7) / 8;

    switch (count % 8) {
      case 0:
        do {
          *to++ = *from++;
          case 7:
          *to++ = *from++;
          case 6:
          *to++ = *from++;
          case 5:
          *to++ = *from++;
          case 4:
          *to++ = *from++;
          case 3:
          *to++ = *from++;
          case 2:
          *to++ = *from++;
          case 1:
          *to++ = *from++;
        } while (--n > 0);
    }
  }

  return count;
}

int main()
{  
  char from[10] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i' };
  char to[10] = { '0', '1', '2' };

  printf("장치 실행 전 [from]: %s, [to]: %s\n", from, to);
  duffs_device(from, to, 9);
  printf("장치 실행 후 [from]: %s, [to]: %s\n", from, to);
  memset(from, '1', 9);
  printf("from 변경 후 [from]: %s, [to]: %s\n", from, to);

}