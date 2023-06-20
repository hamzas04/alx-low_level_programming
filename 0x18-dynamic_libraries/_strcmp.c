#include <unistd.h>

int _strcmp(char *s1, char *s2) {
	// Code de la fonction _strcmp
	// Compare les chaînes de caractères s1 et s2
	while (*s1 != '\0' && *s2 != '\0') {
		if (*s1 < *s2)
			return -1;
		else if (*s1 > *s2)
			return 1;
		s1++;
		s2++;
	}

	if (*s1 == '\0' && *s2 == '\0')
		return 0;
	else if (*s1 == '\0')
		return -1;
	else
		return 1;
}
