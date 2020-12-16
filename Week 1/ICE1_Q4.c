//Solutions by Jayden

#include <stdio.h>

int main(void) {
    int seconds;
    printf("Enter time in seconds:");
    scanf("%d", &seconds);

    int hh = seconds / (60 * 60);
    int remainder = seconds - (60 * 60 * hh);
    int mm = remainder / 60;
    remainder %= (60 * mm);
    int ss = remainder;

    printf("%d seconds is %.2d:%.2d:%.2d (HH:MM:SS)\n", seconds, hh, mm, ss);
}
