/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_greet.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsabatie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 12:07:58 by fsabatie          #+#    #+#             */
/*   Updated: 2017/11/11 12:08:00 by fsabatie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_greet(char *name)
{
	char heart[3];

	heart[0] = 0xE2;
	heart[1] = 0x99;
	heart[2] = 0xA5;
	ft_putstr("Hey ");
	ft_putstr(name);
	ft_putstr(", nice to see you ! You look awesome today ;) ! ");
	write(1, heart, 3);
	ft_putchar('\n');
}
