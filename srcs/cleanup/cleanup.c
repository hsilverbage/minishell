/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleanup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:00:14 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/09/11 19:48:23 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	close_pipes_fds(t_cmd *cmds, t_cmd *cur)
{
	while (cmds)
	{
		if (cmds && cmds != cur)
		{
			if (cmds->pipes_fd[0] != -1)
				close(cmds->pipes_fd[0]);
			if (cmds->pipes_fd[1] != -1)
				close(cmds->pipes_fd[1]);
		}
		cmds = cmds->next;
	}
}

void	free_pipes(t_shell *g_shell)
{
	int	i;

	i = -1;
	if (g_shell->pipes_fd != NULL)
	{
		while (++i < g_shell->nb_pipes)
			ft_free_ptr(g_shell->pipes_fd[i]);
		g_shell->pipes_fd = ft_free_ptr(g_shell->pipes_fd);
	}
}

void	close_cmds_fds(t_cmd *c)
{
	t_cmd	*tmp;

	tmp = c;
	while (tmp)
	{
		if (tmp->fd_in != 0)
		{
			close(tmp->fd_in);
			tmp->fd_in = 0;
		}
		if (tmp->fd_out != 1)
		{
			close(tmp->fd_out);
			tmp->fd_out = 1;
		}
		close_pipes_fds(c, NULL);
		tmp = tmp->next;
	}
}

void	restore_io(t_cmd *cmds)
{
	if (cmds)
	{
		if (cmds->output_backup != -1)
		{
			dup2(cmds->output_backup, STDOUT_FILENO);
			close(cmds->output_backup);
			cmds->output_backup = -1;
		}
		if (cmds->input_backup != -1)
		{
			dup2(cmds->input_backup, STDIN_FILENO);
			close(cmds->input_backup);
			cmds->input_backup = -1;
		}
	}
}

void	close_fds(t_cmd *c)
{
	while (c)
	{
		if (c->fd_in != 0)
		{
			close(c->fd_in);
			c->fd_in = 0;
		}
		if (c->fd_out != 1)
		{
			close(c->fd_out);
			c->fd_out = 1;
		}
		c = c->next;
	}
}
