#include <unistd.h>

int _atoi(char *s) {
	// Code de la fonction _atoi
	// Convertit la chaîne de caractères s en un entier
	int sign = 1;
	int result = 0;

	if (*s == '-') {
		sign = -1;
		s++;
	}

	while (*s != '\0') {
		result = result * 10 + (*s - '0');
		s++;
	}

	return sign * result;
}
