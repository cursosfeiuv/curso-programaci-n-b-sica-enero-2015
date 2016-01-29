#    Makefile - Curso de Programación Básica
#    all	- Compilar todo
#    clean	- Limpiar archivos compilados
#    server	- Compilar server
#    client	- Compilar cliente

BIN = ../bin
EXECUTABLES = main
# Agregar cabeceras .h
INCLUDES = Empleado.h 
#Empleado.h
#Usar gcc
GCC = g++ 
#Bibliotecas
LIBS = ""
#FLAGS =  -std=c99
CFLAGS = "".

#'make all' creará todos los ejecutables
all: 	$(EXECUTABLES)

#'make clean' eleminar archivos objetos
clean:
	rm -f $(BIN)/Herencia *.o

# Compilar los archivos .c
%.o:%.cpp $(INCLUDES) 
	$(GCC) $(FLAGS) $(CFLAGS) -c $<

# Generar ejecutables individuales
herencia: herencia.o
	$(GCC) $(FLAGS) $(CFLAGS) -o $(BIN)/Herencia herencia.o $(LIBS)