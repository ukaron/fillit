/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 22:05:10 by lrorscha          #+#    #+#             */
/*   Updated: 2019/08/31 15:33:13 by ukaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# define BUFF_SIZE 1

typedef struct	s_enter
{
	int	i;
	int j;
}		f_enter;

typedef struct	s_map
{
	char map[10][10];
	int size;
	struct s_map *next;
}		t_map;

int		get_next_line(const int fd, char **line);
void	ft_getcube(char *line, char *res);
void	ft_move(char **cube);
int		ft_valid(char **cube, f_enter ff);
int		ft_check_hor(char **cube, int max, int i);
int		ft_check_ver(char **cube, int max, int i);
void	ft_save(char **cube, int c);
void	ft_feel(char *cube[50][5]);
t_map	*ft_new_map(int s);
void	ft_print_map(t_map *map);
int	ft_read_cube(char *res[50][5], char *argv, int *s);
void	ft_cube_abc(char **cube, int c);
t_map	*ft_feel_it(t_map *map, char **cube);
#endif
