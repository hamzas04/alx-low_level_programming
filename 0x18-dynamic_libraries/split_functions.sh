#!/bin/bash

# Déclaration des noms de fichiers
files=(
    "_putchar.c"
    "_islower.c"
    "_isalpha.c"
    "_abs.c"
    "_isupper.c"
    "_isdigit.c"
    "_strlen.c"
    "_puts.c"
    "_strcpy.c"
    "_atoi.c"
    "_strcat.c"
    "_strncat.c"
    "_strncpy.c"
    "_strcmp.c"
    "_memset.c"
    "_memcpy.c"
    "_strchr.c"
    "_strspn.c"
    "_strpbrk.c"
    "_strstr.c"
)

# Boucle pour enregistrer chaque fonction dans un fichier séparé
for file in "${files[@]}"; do
    function_name="${file%.*}"
    output_file="${function_name}.c"

    echo "#include <unistd.h>" > "$output_file"
    echo "" >> "$output_file"
    echo "$(sed -n "/^int $function_name(/,/^}/p" main.c)" >> "$output_file"
done

echo "Les fonctions ont été enregistrées dans des fichiers séparés."
