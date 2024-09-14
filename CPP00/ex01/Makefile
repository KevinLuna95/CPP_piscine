NAME            = phonebook
CC              = c++
CFLAGS          = -Wall -Wextra -Werror -std=c++98
SOURCES         = main.cpp Contact.class.cpp PhoneBook.class.cpp
HEADER          = Contact.class.hpp PhoneBook.class.hpp
OBJS_PATH       = obj

# Crear una lista de archivos objeto en el directorio de objetos
OBJS            = $(addprefix $(OBJS_PATH)/, $(SOURCES:.cpp=.o))

all: $(NAME)

# Enlazar el ejecutable
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

# Compilar archivos fuente a archivos objeto
$(OBJS_PATH)/%.o: %.cpp $(HEADER) Makefile
	mkdir -p $(OBJS_PATH)
	$(CC) $(CFLAGS) -c $< -o $@

# Eliminar archivos objeto
clean:
	rm -rf $(OBJS_PATH)

# Eliminar archivos objeto y el ejecutable
fclean: clean
	rm -f $(NAME)

# Recompilar todo
re: fclean all
