/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heredoc2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:02:26 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/09/14 12:19:19 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	**replace_tab_hd(char **tab, int i)
{
	int		y;
	int		z;
	int		tab_size;
	char	**new;

	tab_size = split_lenght(tab);
	new = ft_calloc(tab_size, sizeof(char *));
	if (!new)
		return (NULL);
	y = -1;
	z = 0;
	while (tab[++y])
	{
		if (y == i)
			continue ;
		new[z++] = ft_strdup(tab[y]);
	}
	new[z] = NULL;
	ft_free_split(tab);
	return (new);
}

int	count_words(char *input)
{
	char	*tmp;
	int		len;
	int		count;

	len = 0;
	count = 0;
	tmp = input;
	while (*tmp)
	{
		len = token_len(tmp);
		if (len)
			count++;
		tmp += len;
	}
	return (count);
}

void	fill_tab(char **input_tab, char *input)
{
	size_t	len;
	int		i;

	i = 0;
	while (*input)
	{
		len = token_len(input);
		if (len == 0)
			return ;
		input_tab[i] = ft_strndup(input, len);
		if (input_tab[i] == 0)
			return ;
		input += len;
		i++;
	}
	input_tab[i] = '\0';
}

char	*heredoc_cmd_parser(char *input, t_cmd *c)
{
	char	**input_tab;
	int		tab_size;
	char	*new_input;

	if (c->hd_delim_into_quotes)
		return (input);
	if (ft_strcmp(input, "") == 0)
		return (input);
	tab_size = count_words(input);
	input_tab = ft_calloc(tab_size + 1, sizeof(char *));
	if (input_tab == NULL)
		return (NULL);
	fill_tab(input_tab, input);
	input_tab = tab_expanded(input_tab, c);
	new_input = recompose_input(input_tab, 0, -1);
	new_input = handle_imbricated_cmd(new_input, c);
	input = ft_free_ptr(input);
	return (new_input);
}
