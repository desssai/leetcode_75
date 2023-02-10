/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:19:40 by ncarob            #+#    #+#             */
/*   Updated: 2023/02/09 16:44:47 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.hpp"

ListNode* oddEvenList(ListNode* head) {
	if (!head || !head->next || !head->next->next)
		return head;
	
	int			turn = 0;
	ListNode*	prev = head;
	ListNode*	curr = head->next;
	ListNode*	last_odd = head;
	ListNode*	first_even = head->next;
	ListNode*	next;

	while (curr) {
		next = curr->next;
		if (turn % 2) {
			curr->next = first_even;
			prev->next = next;
			last_odd->next = curr;
			last_odd = curr;
		}
		prev = curr;
		curr = next;
		turn++;
	}
	return head;
}