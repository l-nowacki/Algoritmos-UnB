#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// Esta função mostra o texto inicial que situa o jogador
void texto_inicial();
// Esta função mostra o menu de entrada. Invocando as funções
// de seleção de personagem e iniciar_jogo().
void menu_de_entrada();
// Esta função tem como argumentos os atributos do personagem. Ela
// Invoca os eventos do jogo. E mostra os elementos da história.
void iniciar_jogo(int disciplina, int alinhamento, int perfil, int meta, int bar, int idade);


// Esta função retorna verdadeiro se o argumento for um número
// fora do espaço de [1, 3].
// É usada para simplificar a escolha dos atributos do personagem.
int escolha_invalida(int escolha);


// Estas funções são usadas para selecionar os atributos do personagem
// Os paramêtros delas são relacionados as restrições
int escolher_disciplina();
// Esta função seleciona o alinhamento do personagem.
int escolher_alinhamento();
// Esta função seleciona o perfil do personagem.
int escolher_perfil();
// Um personagem de alinhamento bom não pode ter como meta inundar a UnB.
// Se o alinhamento do personagem for mal, ele não pode ter como meta
// salvar a UnB.
int escolher_meta(int alinhamento);
// Se o estudante escolher o perfil estudioso o bar preferido dele não pode
// ser o Mendes
int escolher_bar(int perfil);
// Um aluno da disciplina de medicina não pode estar nos 20s
// porque ele passou mais de dez anos no cursinho
int escolher_idade(int disciplina);


// Esta função atua como o primeiro evento/escolha do jogo.
int evento_1();
// Esta função atua como o segundo evento/escolha do jogo.
// E têm uma possibilidade eliminada pelo alinhamento bom.
int evento_2(int alinhamento);
// Este evento só ocorre se o jogador escolher a primeira opção
// do evento_2(). Ele age como uma espécie de Easter Egg.
int evento_2_1();
// Esta função atua como terceiro evento/escolha do jogo.
// Uma opção fará o jogador voltar ao evento_1(), e outra irá
// se basear no PERFIL do personagem.
int evento_3(int perfil);
// Esta função será o quarto evento do jogo, em que o jogador
// precisa ganhar uma partida de jokenpo para poder acessar
// o último evento. Se o jogador perder ele volta para o evento_1().
// Se ele ganhar ele atingiu a meta dele. 
int evento_4();
// Este é o último evento do jogo. O jogador faz a prova.
// Ele depende de vários atributos do jogador. Como a disciplina, meta, e
// perfil do jogador. Dicas serão apresentadas conforme os atributos.
int evento_5(int disciplina, int perfil, int meta);


// Esta função implementa uma rodada de jokênpo.
// Ela retorna positivo se o jogador ganhar. Negativo se o
// jogador perder. E nulo se for empate.
int jokenpo();
// Esta função implementa uma partida de jokênpo com 3 rodadas.
// Ela retorna positivo se o jogador ganhar. Negativo se o
// jogador perder. E nulo se for empate.
int melhor_de_3();
// Esta função mostra o resultado da função melhor_de_3().
// Retorna 0 se o jogador perder. E 1 se o jogador ganhar.
// E caso seja empate, invoca a função novamente.
int resultado_partida();


int main()
{
  //texto_inicial();
  //menu_de_entrada();
  //evento_1();
  iniciar_jogo(1, 2, 3, 1, 1, 1);
  //printf("%d\n", resultado_partida());

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
  int disciplina, alinhamento, perfil, meta, bar, idade;
  char historico[400];

  do
    {
      printf("\n1. Criar personagem\n");
      printf("2. Iniciar Jogo\n");
      printf("3. Sair\n");

      scanf("%d", &escolha_menu);
      
      if (escolha_menu == 1) {
	
	disciplina = escolher_disciplina();
	alinhamento = escolher_alinhamento();
	perfil = escolher_perfil();
	meta = escolher_meta(alinhamento);
	bar = escolher_bar(perfil);
	idade = escolher_idade(disciplina);

	printf("\nEscreva a sua história prévia. Max de 400 characteres\n");
	scanf(" %[^\n]s", historico);
	
	personagem_criado = 1;
	
      } else if (escolha_menu == 2 && personagem_criado == 0) {
	printf("\nÉ preciso criar um personagem antes de iniciar o jogo\n");
      } else if (escolha_menu == 2 && personagem_criado == 1) {
	sair_do_menu = 1;
	iniciar_jogo(disciplina, alinhamento, perfil, meta, bar, idade);
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


int escolher_alinhamento() {

  int alinhamento;

  do
    {

      printf("\nAlinhameto\n");
      printf("1 - Mal\n");
      printf("2 - Neutro\n");
      printf("3 - Bom\n");
      scanf("%d", &alinhamento);

      
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


void iniciar_jogo(int disciplina, int alinhamento, int perfil, int meta, int bar, int idade) {

  int escolha_1, escolha_2, escolha_3;

  escolha_1 = evento_1();
  printf("\nA chuva fica ainda mais forte. A UnB começa a alagar.\n"
	 "Você está no ICC sul. Um raio. Um trovão. Baques contra o chão.\n"
	 "Árvores caem na saída do ICC sul.\n"
	 "Devido ao horário, todas as saídas laterais estão trancadas.\n");

  do
    {
      escolha_2 = evento_2(alinhamento);
      escolha_3 = evento_3(perfil);
    } while (escolha_3 == 1);


}

int evento_1() {

  int choice;
  
  printf("\nA chuva continua forte.\n");
  printf("Você decide:\n");

  do
    {
      printf("\n1 - Esperar a chuva passar\n");
      printf("2 - Sair correndo da sala\n");
      printf("3 - Ligar para um amigo e pedir ajuda\n");

      scanf("%d", &choice);

    } while (escolha_invalida(choice));

  if (choice == 1) {
    printf("\nA chuva não passa. Um raio te faz cair da cadeira. Você sai da sala. \n");
  } else if (choice == 2) {
    printf("\nVocê sai correndo da sala.\n");
  } else if (choice == 3) {
    printf("\nVocê tenta ligar para o seu amigo. Mas você lembra que não pagou a conta telefônica nesse mês. Então você sai correndo da sala.\n");
  }

  return choice;
  
}

int evento_2(int alinhamento) {

  int choice;
  
  printf("\nSua única saída é pelo ICC norte. Como você chegará lá?\n");

  do
    {
      printf("\n1 - Pegando o Transminhocão\n");
      printf("2 - Batendo o chinelo\n");

      if (alinhamento != 1) {
	printf("3 - Roubando uma bike que está dando mole\n");
      }
      
      scanf("%d", &choice);

      if (choice == 1) {
	evento_2_1();
      }

      if (alinhamento == 1 && choice == 3) {
	choice = 0;
      }
      
    } while (escolha_invalida(choice));

  if (choice == 3) {
    printf("\nVocê anda de bike. Apesar do pneu estar um pouco mole. Mas você escuta passos fortes"
	   " correndo atrás de você.\n"
	   "\nSão de um estudante de 2 metros de altura. Ele grita para você parar a bike.\n");
  } else if (choice == 2) {
    printf("\nVocê sai correndo pela UnB. A chuva continua forte. Um raio acerta a UnB.\n"
	   "\nFelizmente, você está usando chinelos. Eles te salvam.\n"
	   "\nNo entanto, você vê um estudante de 2 metros de altura atordoado no chão.\n"
	   "\nEle se levanta e olha para você. Depois olha para a mão dele. E para você de novo\n");
  }

  return choice;
  
}


int evento_2_1() {
  
  char cansado[100];
  
  printf("\nVocê desce para o subsolo. E espera pelo Transminhocão enquanto a UnB se alaga.\n"
	 "Você espera trinta minutos.\n");
  scanf("%s", cansado);

  printf("\nDesapontado, porque você é um noob e o Transminhocão não existe.\n"
	 "Você repara num pedaço de madeira boiando no rio que virou a vala do subsolo.\n"
	 "Estranhamente, um remo aparece na sua mão\n"
	 "\nVocê navega pelo subsolo da UnB.\n"
	 "\nEventualmente você encontra uma barreira e é obrigado a descer da canoa improvisada.\n"
	 "Você decide levar o remo. \n"
	 "\nVocê então encontra um estudante de 2 metros de altura. Ele está bravo. E olha para você.\n"
	 "\n\"Como você roubou o meu remo!?\"\n");

  return 1;

}



int evento_3(int perfil) {

  int choice;

  printf("\nO gigante vem em sua direção. E ele não está simpático.\n"
	 "\nO que você decide fazer?\n");

  do
    {
      printf("\n1 - Chutar o saco dele e sair correndo\n"
	     "2 - Perguntar como esta o clima ai em cima\n");
      
      if (perfil == 1) {
	printf("3 - Lembrar ele que você uma vez o ajudou numa prova \n");
      } else if (perfil == 2) {
	printf("3 - Sair correndo. E pular para o outro lado do minhocão\n");
      } else if (perfil == 3) {
	printf("3 - Pegar o seu celular e mostrar fotos dele numa festa\n");
      }

      scanf("%d", &choice);

    } while (escolha_invalida(choice));


  if (choice == 1) {
    printf("\nVocê tenta chutar o saco dele. Mas ele revida com um soco.\n"
	   "Você fica inconsciente.\n"
	   "\nVocê acorda inconsciente no final do ICC sul.\n"
	   "O gigante te colocou numa canoa de plástico. E você boiou até onde"
	   " estava anteriormente\n");
    
  } else if (choice == 2) {
    printf("\nEle sorri. E cospe na sua cara.\n"
	   "\n\"Está chovendo. hahahahah\"\n"
	   "\nO gigante sai andando rindo da sua cara.\n");
  } else if (choice == 3) {
    
    if (perfil == 1) {
      printf("\nO gigante lembra de como você livrou ele da recuperação.\n"
	     "Ele sorri. E faz um joinha para você enquanto ele caminha para o seu"
	     " destino\n");
    } else if (perfil == 2) {
      printf("\nVocê pega velocidade.\n"
	     "\nO gigante corre atrás de você. E estende a mão.\n"
	     "Você sente a mão dele roçar na sua camisa.\n"
	     "\nMas no último segundo, você consegue pular de um lado para o outro"
	     " do minhocão. O gigante também pula. Mas seu peso massivo faz com que ele"
	     " caia.\n");
    } else if (perfil == 3) {
      printf("\nO gigante fica envergonhado. E diz que irá te deixar livre se você\n"
	     " apagar as fotos. Você fica desconfiado. Mas depois de um juramento "
	     "de mindinho. Você apaga as fotos. E ele te deixa livre.\n");
    }
    
  }
  
  return choice;
}

int jokenpo() {

  int jgr, maq;

  printf("\nEscolha:\n");
  printf("1 - pedra\n");
  printf("2 - papel\n");
  printf("3 - tesoura\n");

  scanf("%d", &jgr);

  srand( time(NULL) );
  maq = 1 + (rand() % 3);

  if (maq == 1) {
    printf("\nMaquina escolheu pedra\n");
  } else if (maq == 2) {
    printf("\nMaquina escolheu papel\n");
  } else if (maq == 3) {
    printf("\nMaquina escolheu tesoura\n");
  }

  if (jgr == maq) {
    printf("\nEmpate\n");
    return 0;
  } else if (jgr == 1 && maq == 3 || jgr == 2 && maq == 1 || jgr == 3 && maq == 2) {
    printf("\nJogador Ganhou\n");
    return 1;
  } else {
    printf("\nMáquina ganhou\n");
    return -1;
  }

}


int melhor_de_3() {
  int total = 0, flag = 1, partidas = 0;

  while (flag) {
    total += jokenpo();
    partidas++;

    if (abs(total) == 2) {
      flag = 0;
    } else if (partidas == 3) {
      flag = 0;
    }
  }

  return total;

}


int resultado_partida() {
  
  int resultado;
  
  do
    {
      resultado = melhor_de_3();

      if (resultado > 0) {
	printf("\nJogador ganhou a melhor de três\n");
	return 1;
      } else if (resultado < 0) {
	printf("\nMaquina ganhou a melhor de três\n");
	return 0;
      } else {
	printf("\nEmpate na melhor de três\n");
      }	
    } while (resultado == 0);

  return resultado;
    
}
