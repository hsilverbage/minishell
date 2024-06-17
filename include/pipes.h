/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipes.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:13:38 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/09/11 19:06:03 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPES_H
# define PIPES_H
# include "typedef.h"

//srcs/exec/pipes.c
int		cmd_handler(t_shell *g_shell);
void	redir_io(t_cmd *cmds);

int		wait_children(t_shell *g_shell);

#endif
