#include "libft.h"

void del(void *content)
{
	free(content);
}

void deleteNode(t_list **head, int index)
{
	t_list *temp = *head;
	int i = 1;

	if (index == 1)
	{
		*head = temp->next;
		ft_lstdelone(temp, del);
		return;
	}
	while (temp && i < index - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL || temp->next == NULL)
		return;

	t_list *next_node = temp->next->next;
	ft_lstdelone(temp->next, del);
	temp->next = next_node;
}
void delete (t_list **head, int index)
{
	t_list *temp = *head;
	int i  = 1;
	if (index == 1)
	{
		*head = temp->next;
		ft_lstdelone(temp, del);
		return ;
	}
	while (temp && i < index - 1)
	{
		temp = temp->next;
		i++;
	}
	if (!temp || temp->next == NULL)
		return;
	t_list *n_node = temp->next->next;
	ft_lstdelone(temp->next, del);
	temp->next = n_node;
}
void print_list(t_list *lst)
{
	while(lst)
	{
		printf("%s\n", (char *)(lst->content));
		lst = lst->next;
	}
}

int main()
{
	int i = 0;
	char arr[10][10] = {"one", "two", "three", "four", "five"};
	t_list *list;
	t_list *node;

	list  = NULL;
	while(i < 6)
	{
		node = ft_lstnew(ft_strdup(arr[i]));
		ft_lstadd_back(&list, node);
		i++;
		node = node->next;
	}
	//node = NULL;
	delete(&list, 1);
	print_list (list);

}