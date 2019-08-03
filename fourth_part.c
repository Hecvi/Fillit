/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fourth_part.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 15:30:37 by klaurine          #+#    #+#             */
/*   Updated: 2019/08/03 15:32:02 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**create_area(int side)
{
	int		i;
	int		j;
	char	**area;

	i = 0;
	if (!(area = (char **)malloc(sizeof(char *) * (side + 1))))
		return (NULL);
	while (i < side)
	{
		j = 0;
		if (!(area[i] = (char *)malloc(sizeof(char) * (side + 1))))
			return (NULL);
		while (j < side)
		{
			area[i][j] = '.';
			j++;
		}
		area[i][j] = '\0';
		i++;
	}
	area[i] = NULL;
	return (area);
}

void	free_map(char ***map)
{
	int		i;
	char	**nemap;

	i = 0;
	nemap = *map;
	while (nemap[i])
	{
		free(nemap[i]);
		i++;
	}
	free(nemap[i]);
	free(nemap);
	nemap = NULL;
}

void	free_matrix(char ****matrix, int num_of_blocks)
{
	int		i;
	int		j;
	char	***nematrix;

	i = 0;
	nematrix = *matrix;
	while (i < num_of_blocks)
	{
		j = 0;
		while (nematrix[i][j])
		{
			free(nematrix[i][j]);
			j++;
		}
		free(nematrix[i][j]);
		i++;
	}
	free(nematrix[i]);
	free(nematrix);
	nematrix = NULL;
}
