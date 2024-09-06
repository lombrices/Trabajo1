# Ruta a los archivos fuente y a los archivos de cabecera
SRC_DIR = src
INC_DIR = include

# Archivos fuente
SRCS = $(SRC_DIR)/main.cpp $(SRC_DIR)/interfaz.cpp $(SRC_DIR)/envReader.cpp $(SRC_DIR)/verificaLogin.cpp $(SRC_DIR)/funciones.cpp

# Nombre del ejecutable
EXEC = programa

# Regla para compilar el ejecutable
$(EXEC): $(SRCS)
	g++ -I$(INC_DIR) $(SRCS) -o $(EXEC) -lncurses

# Regla para limpiar archivos generados
clean:
	rm -f $(EXEC)

# Phony targets para evitar conflictos con archivos que puedan llamarse igual
.PHONY: clean
