#include <stdio.h>
#include <time.h>
int main(int argc, char *argv[]) {
    FILE *a = fopen(argv[1], "w");
    time_t Time = time(NULL);
    char time[80];
    char *format = "%d.%m.%Y";
    for (int i = 0; i < 10; i++) {
        struct tm *dateTime = localtime(&Time);
        strftime(time, 80, format, dateTime);
        fprintf(a, "%s\n", time);
        Time += 60 * 60 * 24;
    }
}
