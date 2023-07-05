
  #include <stdio.h>
  int main() {
        int num, max = 0, rem = 0;
        printf("Enter your input value:");
        scanf("%d", &num);
        while (num > 0) {
                rem = num % 10;
                if (rem > max) {
                        max=rem;
                }
                num=num/10;
        }
        printf("max number is %d\n", max);
        return 0;
  }
