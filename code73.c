#include <stdio.h>

int main() {
    int totalDays, completedDays;
    float progress;

    printf("Enter total project duration (days): ");
    scanf("%d", &totalDays);

    printf("Enter completed days: ");
    scanf("%d", &completedDays);

    progress = ((float)completedDays / totalDays) * 100;

    printf("Project progress: %.2f%%\n", progress);

    return 0;
}
