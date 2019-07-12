/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_commandname.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajon-hol <ajon-hol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 18:17:13 by ajon-hol          #+#    #+#             */
/*   Updated: 2019/07/04 22:18:38 by ajon-hol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	get_commandname(char *rd, int *i, t_list **lst)
{
	t_token	*token;
	int		j;

	j = *I;
	token = inittoken((*i)++, COMMAND_NAME);
	if (!(islabelchar(rd[*I])))
		l_error(*i - 1);
	while (islabelchar(rd[*I]))
		(*i)++;
	token->token = ft_strsub(rd, j, (*I - j));
	ld_push_back(lst, token);
}
