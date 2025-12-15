#include <stdio.h>
int main() {
    int i = 0;
    char *days[] = {
        "Sunday", "Monday", "Tuesday",
        "Wednesday", "Thursday", "Friday", "Saturday"
    };
    while(i < 7) {
        printf("%s\n", days[i]);
        i++;
    }
    return 0;
}











