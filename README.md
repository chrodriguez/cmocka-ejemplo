# Ejemplo cmocka

Un ejemplo que muestra como testear un `.c` que calcula factorial y escribimos
los tests usando cmocka

## Requerimientos

```
sudo apt install libcmocka-dev
```

Con esto ya tendremos instalado cmocka.h y la librería necesaria para compilar

## Compilar usando

Para compilar los tests:

```
gcc test_factorial.c factorial.c -o tests -lcmocka -Wall
```

Esto creará el archivo `./tests` que nos permitirá ejecutar los tests que
verificarán funciona de forma adecuada nuestro .c motivo de testeo


