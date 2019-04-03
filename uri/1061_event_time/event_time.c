#include <stdio.h>

int main()
{

  int initial_day, initial_hour, initial_minute, initial_second;
  int final_day, final_hour, final_minute, final_second;
  int total_days, total_hours, total_minutes, total_seconds;
  
  scanf("Dia %d %d : %d : %d Dia %d %d : %d : %d", &initial_day, &initial_hour, &initial_minute, &initial_second, &final_day, &final_hour, &final_minute, &final_second );

  total_days = final_day - initial_day;
  total_hours = final_hour - initial_hour;
  total_minutes = final_minute - initial_minute;
  total_seconds = final_second - initial_second;

  if (final_hour < initial_hour) {
    total_days -= 1;
    total_hours = 24 - initial_hour + final_hour; 
  }
  if (final_minute < initial_minute) {
    total_hours -= 1;
    total_minutes = 60 - initial_minute + final_minute;
  }
  if (final_second < initial_second) {
    total_minutes -= 1;
    total_seconds = 60 - initial_second + final_second;
  }
  

  printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", total_days, total_hours, total_minutes, total_seconds);

  


  return 0;
}
