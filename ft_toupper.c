/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:57:38 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/01 23:26:20 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* If c is a lowercase letter, toupper() returns its uppercase equivalent, if an
* uppercase representation exists in the current locale. Otherwise, it returns
* c. If c is a lowercase it works the other was around.
* If c is neither an unsigned char value nor EOF, the behavior of this
* function is undefined.
* RETURN VALUE: The value returned is that of the converted letter, or c if the
* conversion was not possible.
*/
int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - CASE_CONVERT);
	return (c);
}
