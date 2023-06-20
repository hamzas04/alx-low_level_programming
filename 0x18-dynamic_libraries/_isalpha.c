#include <unistd.h>

int _isalpha(int c) {
	// Code de la fonction _isalpha
	// Retourne 1 si c est une lettre, 0 sinon
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
