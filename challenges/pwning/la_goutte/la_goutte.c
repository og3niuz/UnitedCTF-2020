#include <stdio.h>

#ifdef SERVER
#define flag "FLAG-Buff3r_0verflow3d_nh6qAgs0Yw4"
#else
#define flag "FLAG-XXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
#endif


void degoutte() {
	volatile int pourquoi = 5;
	volatile int quoi = -1;
	volatile int comment = 2;
	volatile float ou = 33.5;
	volatile int quand = 4;
	char qui[16];

	puts("Quel est ton nom jeune apprenti?");
	gets(qui);
	if (pourquoi == 0xcafecafe) {
		printf("%s\nTu n'a pas besoin d'être mon apprenti, le savoir est déjà en toi.\n", flag);
	} else {
		printf("Bienvenue %s, le chemin sera long.\n", qui);
	}
}

int main(int argc, char* argv[]) {
	setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	degoutte();
	return 0;
}
