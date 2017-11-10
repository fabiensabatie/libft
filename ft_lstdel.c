/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsabatie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:44:55 by fsabatie          #+#    #+#             */
/*   Updated: 2017/11/10 11:44:57 by fsabatie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

/*
** Prend en paramètre l’adresse d’un pointeur sur un maillon et libère
** la mémoire de ce maillon et celle de tous ses successeurs l’un
** après l’autre avec del et free(3). Pour terminer, le pointeur sur
** le premier maillon maintenant libéré doit être mis à NULL (de manière
** similaire à la fonction ft_memdel de la partie obligatoire).
*/

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	**current;
	t_list	**origins;

	origins = alst;
	if (alst && del)
	{
		while ((**alst).next)
		{
			current = alst;
			del((*alst)->content, (*alst)->content_size);
			alst = &((*alst)->next);
			free(*current);
		}
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*origins = NULL;
	}
}
