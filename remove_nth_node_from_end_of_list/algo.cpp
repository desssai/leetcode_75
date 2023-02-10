/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:53:27 by ncarob            #+#    #+#             */
/*   Updated: 2023/02/09 16:11:58 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.hpp"

ListNode* removeNthFromEnd(ListNode* head, int n) {
    if (n < 1 || !head)
		return head;
	
	ListNode*	copy = head;
	int			size = 0;

	while (copy) {
		size++;
		copy = copy->next;
	}

	if (n > size)
		return head;

	copy = head;
	for (int i = size; i - n - 1 > 0; --i) {
		copy = copy->next;
	}

	if (head == copy && size == n)
		return head->next;

	ListNode* prev = copy;
	ListNode* curr = copy->next;
	ListNode* next = nullptr;

	if (curr)
		next = curr->next;
	
	prev->next = next;
	return head;
}