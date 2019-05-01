#include <stdio.h>

void menu_de_entrada();
void texto_inicial();

int escolher_disciplina();
int escolher_alinhamento(int disciplina);
int escolher_perfil();
int escolher_meta(int alinhamento);
int escolher_bar(int perfil);
int escolher_idade(int disciplina);
int escolha_invalida(int escolha);

struct personagem {
  int disciplina, alinhamento, perfil, meta, bar, idade;
  char historico[400];
};

struct personagem criar_personagem();

void iniciar_jogo(struct personagem p);
void display_personagem(struct personagem p);

int main()
{
  texto_inicial();
  menu_de_entrada();

  return 0;
}

void texto_inicial() {
  printf("\n\"Múltipla Escolha\"\n\n");

  printf("Você é um aluno da UnB.\n");
  printf("E está estudando a noite na faculdade para a prova do dia seguinte.\n");
  printf("Devido a uma inesperada sequência de eventos no semestre,\n");
  printf("você não estudou para essa prova até agora.\n");
  printf("E esta é a sua ultima chance de não repetir a matéria.\n\n");

  printf("De repente, um trovão faz você pular da cadeira.\n");
  printf("Uma chuva torrencial toma conta da UnB.\n");
}

void menu_de_entrada() {
  
  int escolha_menu, personagem_criado = 0, sair_do_menu = 0;
  struct personagem player;

  do
    {
      printf("\n1. Criar personagem\n");
      printf("2. Iniciar Jogo\n");
      printf("3. Sair\n");

      scanf("%d", &escolha_menu);
      
      if (escolha_menu == 1) {
	player = criar_personagem();
	personagem_criado = 1;
      } else if (escolha_menu == 2 && personagem_criado == 0) {
	printf("\nÉ preciso criar um personagem antes de iniciar o jogo\n");
      } else if (escolha_menu == 2 && personagem_criado == 1) {
	sair_do_menu = 1;
	iniciar_jogo(player);
      } else {
	sair_do_menu = 1;
      }
    } while (sair_do_menu == 0);

}

int escolha_invalida(int escolha) {
  if (escolha > 3 || escolha < 1) {
    return 1;
  } else {
    return 0;
  }
}


int escolher_disciplina() {
  int disciplina, flag = 1;
  
  do
    {
      printf("\nEscolha a sua disciplina\n");
      printf("1 - Ciências da Computação\n");
      printf("2 - Direito\n");
      printf("3 - Medicina\n");
      scanf("%d", &disciplina);
    
    } while (escolha_invalida(disciplina));

  return disciplina;
}

int escolher_alinhamento(int disciplina) {

  int alinhamento;

  do
    {

      printf("\nAlinhameto\n");
      printf("1 - Mal\n");
      printf("2 - Neutro\n");
      printf("3 - Bom\n");
      scanf("%d", &alinhamento);

      if (alinhamento == 3 && disciplina == 2 ) {
	printf("\nUm advogado do bem?? Nem em RPGs meu caro jogador.\n");
	alinhamento = 0;
      }
      
    } while (escolha_invalida(alinhamento));

  return alinhamento;
  
}

int escolher_perfil(){
  int perfil;

  do
    {
      printf("\nPerfil\n");
      printf("1 - Estudioso\n");
      printf("2 - Atlético\n");
      printf("3 - Festivo\n");
      scanf("%d", &perfil);
      
    } while (escolha_invalida(perfil));

  return perfil;
}

int escolher_meta(int alinhamento) {
  int meta;

  do
    {
      printf("\nMeta\n");
      printf("1 - Salvar a UnB\n");
      printf("2 - Escapar vivo e estudar em casa\n");
      printf("3 - Inundar a sala para que não haja prova\n");
      scanf("%d", &meta);

      if (alinhamento == 1 && meta == 1) {
	meta = 0;
	printf("\nSe você é do mal, por que salvar a UnB?\n");
      } else if (alinhamento == 3 && meta == 3) {
	meta = 0;
	printf("\nSe você é do bem, inundar a sala é errado.\n");
      }
      
    } while (escolha_invalida(meta));

  return meta;
}

int escolher_bar(int perfil) {
  int bar;

  do
    {
      printf("\nBar Preferido\n");
      printf("1 - Mendes\n");
      printf("2 - PDS\n");
      printf("3 - Vale da Lua\n");
      scanf("%d", &bar);

      if (perfil == 1 && bar == 1) {
	bar = 0;
      }
      
    } while (escolha_invalida(bar));

  return bar;
}

int escolher_idade(int disciplina) {
  int idade;

  do
    {
      printf("\nIdade\n");
      printf("1 - 20(s)\n");
      printf("2 - 30(s)\n");
      printf("3 - 40(s)\n");
      scanf("%d", &idade);

      if (disciplina == 3 && idade == 1) {
	printf("Você não pode fazer medicina e estar nos 20s. Porque você passou dez anos no cursinho.\n");
	idade = 0;
      }
    } while (escolha_invalida(idade));

  return idade;
}

struct personagem criar_personagem() {
  struct personagem p1;

  p1.disciplina = escolher_disciplina();

  p1.alinhamento = escolher_alinhamento(p1.disciplina);

  p1.perfil = escolher_perfil();

  p1.meta = escolher_meta(p1.alinhamento);

  p1.bar = escolher_bar(p1.perfil);

  p1.idade = escolher_idade(p1.disciplina);

  printf("\nEscreva a sua história prévia. Max de 400 characteres\n");
  scanf(" %[^\n]s", p1.historico);

  
    /**Restrições:
  1. Um aluno da disciplina de medicina não pode estar nos 20s
  porque ele passou mais de dez anos no cursinho
  2. Um personagem de alinhamento bom não pode ter como meta inundar
  a UnB
  3. Se o estudante escolher o perfil estudioso o bar preferido dele não pode
  ser o Mendes
  4. Se o alinhamento do personagem for mal, ele não pode ter como meta
  salvar a UnB
  5. Se o aluno escolher a disciplina de direito ele não pode escolher o
  alinhamento bom
    **/
  return p1;
}

void display_personagem(struct personagem p) {
  printf("\nA disciplina escolhida é: %d\n", p.disciplina);
  printf("O alinhamento escolhido é: %d\n", p.alinhamento);
  printf("O perfil escolhido é: %d\n", p.perfil);
  printf("A meta escolhida é: %d\n", p.meta);
  printf("O bar escolhido é o: %d\n", p.bar);
  printf("A idade escolhida é: %d\n", p.idade);
}

void iniciar_jogo(struct personagem p) {
  display_personagem(p);
}
