/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:53:35 by mmondad           #+#    #+#             */
/*   Updated: 2023/11/16 14:38:50 by mmondad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
int main(void)
{
	int arr[] ={1, 2, 3, 4};
	t_list	*list;
	t_list *node1 = ft_lstnew(arr);
	t_list *node2 = ft_lstnew(arr + 1);
	t_list *node3 = ft_lstnew(arr + 2);
	t_list *node4 = ft_lstnew(arr + 3);

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	list = node1;
	t_list *thelast  = ft_lstlast(list);
	printf ("the content is = %d\n", *(int *)(node4->content));
	//printf("node4=%p\nafter=%p", node4, thelast);
}

*/
