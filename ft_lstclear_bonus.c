/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:50:38 by mmondad           #+#    #+#             */
/*   Updated: 2023/11/16 17:49:55 by mmondad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!del || !lst)
		return ;
	while (*lst)
	{
		temp = *lst;
		del((*lst)->content);
		*lst = (*lst)->next;
		free(temp);
	}
	temp = NULL;
}
/*
int main(void)
{
	int arr[] = {1, 2, 3, 4};
	t_list	*list;
	t_list *node1 = ft_lstnew(arr);
	t_list *node2 = ft_lstnew(arr + 1);
	t_list *node3 = ft_lstnew(arr + 2);
	t_list *node4 = ft_lstnew(arr + 3);

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = NULL;
	
	list = node1;
	ft_lstclear(&list, &del);
	//print_list(list);
}
*/
