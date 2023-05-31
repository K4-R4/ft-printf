/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:33:00 by tkuramot          #+#    #+#             */
/*   Updated: 2023/05/31 18:33:13 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putstr_r(char *s)
{
	if (!s)
		return (ft_putstr_r("(null)"));
	return (write(STDOUT_FILENO, s, ft_strlen(s)));
}
