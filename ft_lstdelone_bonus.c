/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:26:07 by mmondad           #+#    #+#             */
/*   Updated: 2023/11/16 15:58:33 by mmondad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list	*temp;

	if (!del || !lst)
		return ;
	if (lst)
	{
		temp = lst;
		del(lst->content);
		free(temp);
	}
}
/*
int main(void)
{
	int arr[] = {1, 2, 3, 4};
	t_list *list;
	t_list *node1 = ft_lstnew(arr);
	t_list *node2 = ft_lstnew(arr + 1);
	t_list *node3 = ft_lstnew(arr + 2);
	t_list *node4 = ft_lstnew(arr + 3);

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = NULL;
	list = node1;
	ft_lstdelone(node2, &del);
}
*/
