/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobso <jjacobso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 14:39:04 by jjacobso          #+#    #+#             */
/*   Updated: 2019/01/19 14:39:55 by jjacobso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			ft_toupper(char c)
{
	if ((c >= 'a' && c <= 'z'))
		c -= 'a' - 'A';
	return (c);
}