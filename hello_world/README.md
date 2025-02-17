# Hello World !

## 0-preprocessor

### Description

Ce script cree un fichier c qui est le resultat du preprocesseur C

### Usage
<code>
    $ export CFILE=main.c
    $ ./0-preprocessor 
    $ tail c
</code>


## 1-compiler

### Description

This script compiles a C file but does not link it.

### Usage
<code>
    $ cat main.c                # to see the content of the c file before
    $ export CFILE=main.c
    $ ./1-compiler              # to run the script
    $ cat -v main.o | head      # to check the result
</code>


## 2-assembler

### Description

This script generates the assembly code of a C code 

### Usage

<code>
    $ export CFILE=main.c
    $ ./2-assembler
    $ cat main.s    # to see the assembly code
</code>


## 3-name

### Description

This script compiles a C file and creates an executable 

### Usage

<code>
    export CFILE=main.c
    ./3-name
    cisfun      # the executable
</code>

## 4-puts.c

### Description

Affiche une chaine de caracteres avec la fonction puts()

### Usage

- La compilation

<code>
    $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c && ./a.out
</code>

## 5-printf.c

### Description

Affiche une chaine de caracteres avec la fonction printf()

- La compilation

<code>
    $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c
</code>

## 6-size.c

### Description 

Affiche la taille memoire des types de base

### Usage

- La compilation

<code>
    $ gcc 6-size.c -m32 -o size32 2> /tmp/32    # pour forcer le 32 bits
    $ gcc 6-size.c -m64 -o size64 2> /tmp/64    # pour forcer le 64 bits
</code>

## 100-intel

### Description

Affiche le code assembleur d'un code C

### Usage

<code>
    $ export CFILE=main.c
    $ cat main.c            # To see the C code
    $ ./100-intel           
    cat main.s              # To see the result (assembly code)
</code>
