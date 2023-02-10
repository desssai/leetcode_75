/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:53:35 by ncarob            #+#    #+#             */
/*   Updated: 2023/02/09 15:53:35 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.hpp"

bool isPalindrome(ListNode* head) {
	if (!head->next)
		return true;
	
	ListNode* copy = head;
	int size = 0;

	while (copy) {
		copy = copy->next;
		size++;
	}

	copy = head;
	
	for (int i = 0; i < size / 2 + size % 2; ++i) {
		if ((!(size % 2) && i == size / 2 - 1) || (size % 2 && i == size / 2 - 1)) {
			ListNode* end = copy;
			copy = copy->next;
			end->next = nullptr;	
		}
		else
			copy = copy->next;
	}

	ListNode* prev = copy;
	ListNode* curr = copy->next;
	ListNode* next;
	while (curr) {
		next = curr->next;
		prev->next = next;
		curr->next = copy;
		copy = curr;
		curr = prev->next;
	}

	while (copy) {
		if (copy->val != head->val)
			return false;
		copy = copy->next;
		head = head->next;
	}
	return true;
}