/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:57:56 by mmondad           #+#    #+#             */
/*   Updated: 2023/11/16 13:56:15 by mmondad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	node = ft_lstlast(*lst);
	if (*lst)
		node->next = new;
	else
		*lst = new;
}
/*
int main(void)
{
	int arr[] ={1, 2, 3, 4, 5};
	t_list	*list;
	t_list *node1 = ft_lstnew(arr);
	t_list *node2 = ft_lstnew(arr + 1);
	t_list *node3 = ft_lstnew(arr + 2);
	t_list *node4 = ft_lstnew(arr + 3);

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	list = node1;
	
	printf("len_befor = %d\n", ft_lstsize(list));
	
	t_list *new = ft_lstnew(arr + 5);
	ft_lstadd_back(&list, new);

	printf("len_after = %d\n", ft_lstsize(list));
	
}
*/
