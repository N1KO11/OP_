#include <stdio.h>
union {
    struct {
        int play : 1;
        int pause : 1;
        int record : 1;
    };
    char tags;
}sost;
int main() {
    scanf("%x", &sost.tags);
    if (sost.play)
        printf("Music is playing\n");
    else
        printf("Music isnt playing\n");
    if (sost.pause & !sost.play)
        printf("Music is on pause\n");
    else
        printf("Music isnt on pause\n");
    if (sost.record)
        printf("Recording...\n");
    else
        printf("Not recording\n");
    return 0;
}
