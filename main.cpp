#include <iostream>

int main()
{
    int NrSeconds, Years, Months, Weeks, Days, Hours, Minutes, Seconds;
    printf("Enter the amount of seconds:");
    scanf("%d",&NrSeconds);
    Weeks = NrSeconds / 604800;
    NrSeconds = NrSeconds % 604800;
    Days = NrSeconds / 86400;
    NrSeconds = NrSeconds % 86400;
    Hours = NrSeconds / 3600;
    NrSeconds = NrSeconds % 3600;
    Minutes = NrSeconds / 60;
    Seconds = NrSeconds % 60;
    printf("\nWeeks: %d", Weeks);
    printf("\nDays: %d", Days);
    printf("\nHours: %d", Hours);
    printf("\nMinutes: %d", Minutes);
    printf("\nSeconds: %d", Seconds);
    return 0;
}
