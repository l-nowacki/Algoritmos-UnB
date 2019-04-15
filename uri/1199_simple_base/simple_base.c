#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int dec_val_of(char thing);
int from_dec_to_hex(int number);
int from_hex_to_dec(char array[]);


int main()
{

  int number, i;
  
  char str[100];

  int flag = 1;


  while (flag) {

    //scan each input line
      scanf("%s", str);

      //if the input is negative. End repl.
      if (str[0] == '-') {
	flag = 0;
      }
      // if the number is in decimal form. Print
      // it in hexadecimal form
      else if (str[1] != 'x') {
	number = atoi(str);
	from_dec_to_hex(number);
      }
      // Else the number is in hexadecimal form.
      // Print it in decimal form
      else {        
	from_hex_to_dec(str);
      }
  }

  return 0;
}

// takes a char in hexademical and
// returns the value of this char in
// decimal
int dec_val_of(char thing) {
  int num;
  if (thing == 'F' || thing == 'f') {
    return 15;
  } else if (thing == 'E' || thing == 'e') {
    return 14;
  } else if (thing == 'D' || thing == 'd') {
    return 13;
  } else if (thing == 'C' || thing == 'c') {
    return 12;
  } else if (thing == 'B' || thing == 'b') {
    return 11;
  } else if (thing == 'A' || thing == 'a') {
    return 10;
  } else if (thing == '1') {
    return 1;
  } else if (thing == '2') {
    return 2;
  } else if (thing == '3') {
    return 3;
  } else if (thing == '4') {
    return 4;
  } else if (thing == '5') {
    return 5;
  } else if (thing == '6') {
    return 6;
  } else if (thing == '7') {
    return 7;
  } else if (thing == '8') {
    return 8;
  } else if (thing == '9') {
    return 9;
  } else if (thing == '0') {
    return 0;
  }
}


//takes a decimal number. Prints a hex number
int from_dec_to_hex(int number) {

  int resto, dividend, i = 0, j;
  char array[100];
 
  while (number > 0) {
    resto = number % 16;
    dividend = floor(number / 16);
    array[i] = resto;
    i++;
    number = dividend;
  }
  
  printf("0x");
	
  for (j = i - 1; j >= 0; j--) {
    if (array[j] == 'y') {
      continue;
    } else if (array[j] == 15) {
      printf("F");
    } else if (array[j] == 14) {
      printf("E");
    } else if (array[j] == 13) {
      printf("D");
    } else if (array[j] == 12 ) {
      printf("C");
    } else if (array[j] == 11 ) {
      printf("B");
    } else if (array[j] == 10) {
      printf("A");
    } else {
      printf("%d", array[j]);  
    }
  }
  
  printf("\n");

  return 0;
}

int from_hex_to_dec(char str[]) {
  
  int  i, j;
  long long total = 0;
  char array[100];
  

  j = strlen(str) - 3;

  for (i = 2; i < strlen(str); ++i) {
    total += pow(16, j) * dec_val_of(str[i]);
    j--; 
  }

  printf("%lld\n", total);

  return 0;
}
