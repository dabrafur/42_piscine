/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   full.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deabraha <deabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:25:54 by deabraha          #+#    #+#             */
/*   Updated: 2024/08/31 15:29:44 by deabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

//estrutura para armazenar pares número-palavra
typedef struct s_dict_entry
{
    char    *number;
    char    *word;
}
t_dict_entry;

// Função para ler o dicionário e armazenar os valores em uma estrutura
t_dict_entry    *load_dictionary(int *entry_count)
{
int fd;
char buffer[1024];
int bytes_read;
int i;
int j;
t_dict_entry *dictionary;

i = 0;
// abrir o arquivo usando open()
fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error\n", 6);
		return (NULL);
	}
    // ler o conteúdo com read()
    // armazenar em uma estrutura de dados
}

// Função para converter um número em palavras
char *convert_number_to_words(char *number, /* parâmetros */) {
    // lógica para converter cada parte do número em palavras
    // usando o dicionário previamente carregado
    return /* string final */;
}

int main(int argc, char **argv) {
    if (argc != 2) {
        write(1, "Error\n", 6);
        return 1;
    }

    // Carregar o dicionário
    load_dictionary(/* parâmetros */);

    // Converter o número passado como argumento
    char *words = convert_number_to_words(argv[1], /* parâmetros */);

    // Exibir o resultado
    write(1, words, /* comprimento da string */);
    write(1, "\n", 1);

    // Liberar memória alocada
    free(words);
    
    return 0;
}
