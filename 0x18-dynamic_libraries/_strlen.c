#include <unistd.h>

int _strlen(char *s) {
	// Code de la fonction _strlen
	// Calcule la longueur de la chaîne de caractères s
	int length = 0;
	while (*s != '\0') {
		length++;
		s++;
	}
	return length;
}
