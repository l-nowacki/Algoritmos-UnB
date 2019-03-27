#include <stdio.h>

int main()
{
  int initial_hour, initial_minute, final_hour, final_minute;

  scanf("%d %d %d %d", &initial_hour, &initial_minute, &final_hour, &final_minute);

  if (initial_hour == final_hour) {
    if (initial_minute == final_minute) {
      printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    } else if (initial_minute < final_minute) {
      printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n", final_minute - initial_minute);
    } else {
      printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n", 60 - initial_minute + final_minute); 
    }
  } else if (initial_hour < final_hour) {
    if (initial_minute == final_minute) {
      printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n", final_hour - initial_hour);
    } else if (initial_minute < final_minute) {
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",
	     final_hour - initial_hour, final_minute - initial_minute);
    } else {
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",
	     final_hour - initial_hour - 1, 60 - initial_minute + final_minute);
    }
  } else if (initial_hour > final_hour) {
    if (initial_minute == final_minute) {
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",
	     24 - initial_hour + final_hour, 0);
    } else if (initial_minute < final_minute) {
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",
	     24 - initial_hour + final_hour, final_minute - initial_minute);
    } else {
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",
	     24 - initial_hour + final_hour - 1, 60 - initial_minute + final_minute);
    }
  }

  return 0;
}
