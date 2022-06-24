/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redirection.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:18:27 by ktroude           #+#    #+#             */
/*   Updated: 2022/04/27 16:48:53 by ktroude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

void	dup_mannager(t_red *red, int save_out, char *cmd)
{
	int	j;

	j = 0;
	while (red->type[j] != -1)
	{
		if (red->type[j] == '>')
			red_man_cas_1(red, j);
		else if (red->type[j] == '>' * -1)
			red_man_cas_2(red, j);
		else if (red->type[j] == '<')
			red_man_cas_3(red, j, save_out);
		else if (red->type[j] == '<' * -1)
			red_man_cas_4(red, j, cmd);
		j++;
	}
}

void	red_man_cas_1(t_red *red, int j)
{
	int	fd;

	fd = open(red->file[j], O_TRUNC | O_CREAT | O_RDWR, 0644);
	dup2(fd, 1);
	close(fd);
}

void	red_man_cas_2(t_red *red, int j)
{
	int	fd;

	fd = open(red->file[j], O_APPEND | O_CREAT | O_RDWR, 0644);
	dup2(fd, 1);
	close(fd);
}

void	red_man_cas_3(t_red *red, int j, int save_out)
{
	int	fd;
	int	save;

	fd = open(red->file[j], O_RDONLY);
	if (fd < 0)
	{
		save = dup(1);
		close(1);
		dup2(save_out, 1);
		close (save_out);
		ft_putstr_fd(red->file[j], 2);
		ft_putstr_fd(" : No such file or directory\n", 2);
		dup2(save, 1);
		close(save);
		exit(0);
	}
	dup2(fd, 0);
	close(fd);
}
