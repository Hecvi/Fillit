/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umoff <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 15:15:28 by umoff             #+#    #+#             */
/*   Updated: 2019/08/03 17:33:33 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <unistd.h>
# include "./libft/libft.h"

int		check_block(int fd, char *buffer);
int		touch_test(char *buffer);
int		first_part(int fd, int *number);
char	***create_matrix(int num_of_blocks);
void	filling_one_matrix(int fd, char **matrix, int number, int b);
void	cut_row(char **matrix);
int		cut_column(char **matrix, int i, int j, int counter);
void	second_part(int fd, int num_of_blocks, char ***matrix);
int		check_insert_figure(char **matrix, char **map, int row, int column);
void	insert_figure(char **matrix, char **map, int row, int column);
void	clean_figure(char **matrix, char **map, int row, int column);
int		cycle(char ***matrix, char **map, int block);
void	third_part(char ***matrix, int num_of_blocks);
char	**create_area(int side);
void	free_map(char ***map);
void	free_matrix(char ****matrix);

#endif
