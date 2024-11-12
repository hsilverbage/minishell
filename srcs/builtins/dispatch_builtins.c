/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatch_builtins.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:15:00 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/09/25 14:47:11 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	dispatcher_builtin(t_shell *g_shell, t_cmd *c)
{
	char	*tmp;

	tmp = get_env_value("PATH", g_shell);
	if (tmp == NULL && ft_strcmp("exit", c->cmd[0]) == 0)
		return (exit_cmd(c, g_shell, 1));
	if (tmp != NULL && c && c->cmd[0] != NULL)
	{
		if (ft_strcmp("export", c->cmd[0]) == 0)
			return (export_builtin(c, g_shell));
		else if (ft_strcmp("exit", c->cmd[0]) == 0)
			return (exit_cmd(c, g_shell, 1));
		else if (ft_strcmp("echo", c->cmd[0]) == 0)
			return (echo_builtin(c->cmd));
		else if (ft_strcmp("env", c->cmd[0]) == 0)
			return (env_builtin(c->cmd, g_shell));
		else if (ft_strcmp("cd", c->cmd[0]) == 0)
			return (cd_builtin(c, g_shell));
		else if (ft_strcmp("unset", c->cmd[0]) == 0)
			return (unset_builtin(c, g_shell));
		else if (ft_strcmp("pwd", c->cmd[0]) == 0)
			return (pwd_builtin(g_shell));
	}
	return (COMMAND_NOT_FOUND);
}
