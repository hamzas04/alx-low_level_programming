#include <unistd.h>

int _islower(int c) {
	// Code de la fonction _islower
	// Retourne 1 si c est une minuscule, 0 sinon
	return (c >= 'a' && c <= 'z');
}
