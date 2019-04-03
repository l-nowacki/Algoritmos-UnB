#include <stdio.h>

int main()
{
  int time_in_seconds;
  int hours, minutes, seconds;
  
  scanf("%d", &time_in_seconds);

  hours = 0;
  minutes = 0;
  seconds = 0;

  while (time_in_seconds > 0) {
    if (time_in_seconds >= 3600) {
      time_in_seconds -= 3600;
      hours += 1;
    } else if (time_in_seconds >= 60) {
      time_in_seconds -= 60;
      minutes += 1;
    } else {
      seconds = time_in_seconds;
      break;
    }
  }

  printf("%d:%d:%d\n", hours, minutes, seconds);
  
  return 0;
}
