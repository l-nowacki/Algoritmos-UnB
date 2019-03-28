#include <stdio.h>
#include <string.h>

int main()
{
  char spine[15];
  char kingdom[15];
  char what_it_eats[15];

  scanf("%s", spine);
  scanf("%s", kingdom);
  scanf("%s", what_it_eats);

  if (strcmp(spine, "vertebrado") == 0) {
    if (strcmp(kingdom, "mamifero") == 0) {
      if (strcmp(what_it_eats, "onivoro") == 0) {
	printf("homem\n");
      } else if (strcmp(what_it_eats, "herbivoro") == 0) {
	printf("vaca\n");
      } 
    }
    else if (strcmp(kingdom, "ave") == 0) {
      if (strcmp(what_it_eats, "carnivoro") == 0) {
	printf("aguia\n");
      } else if (strcmp(what_it_eats, "onivoro") == 0) {
	printf("pomba\n");
      }
    } 
  } else if (strcmp(spine, "invertebrado") == 0) {
    if (strcmp(kingdom, "inseto") == 0) {
      if (strcmp(what_it_eats, "hematofago") == 0) {
	printf("pulga\n");
      } else if (strcmp(what_it_eats, "herbivoro") == 0) {
	printf("lagarta\n");
      }
    }
    else if (strcmp(kingdom, "anelideo") == 0) {
      if (strcmp(what_it_eats, "hematofago") == 0) {
	printf("sanguessuga\n");
      } else if (strcmp(what_it_eats, "onivoro") == 0) {
	printf("minhoca\n");
      }
    }
  }

  return 0;
}
