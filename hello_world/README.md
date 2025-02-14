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

