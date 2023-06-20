#include <unistd.h>

int _isdigit(int c) {
	// Code de la fonction _isdigit
	// Retourne 1 si c est un chiffre, 0 sinon
	return (c >= '0' && c <= '9');
}
