/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:24:07 by ncarob            #+#    #+#             */
/*   Updated: 2023/02/09 22:03:54 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.hpp"

ListNode* getCuttedMiddle(ListNode* head) {
	ListNode* slow = head;
	ListNode* fast = head;

	if (!fast)
		return nullptr;

	while (fast->next && fast->next->next) {
		slow = slow->next;
		fast = fast->next->next;
	}

	if (slow->next) {
		fast = slow->next;
		slow->next = nullptr;
	}
	return fast;
}

ListNode* mergeLists(ListNode* head1, ListNode* head2) {
	if (!head1)
		return head2;
	if (!head2)
		return head1;

	ListNode* new_head_start = nullptr;
	ListNode* new_head = nullptr;

	if (head1->val < head2->val) {
		new_head_start = head1;
		head1 = head1->next;
	}
	else {
		new_head_start = head2;
		head2 = head2->next;
	}

	new_head = new_head_start;
	while (head1 && head2) {
		if (head1->val < head2->val) {
			new_head->next = head1;
			new_head = new_head->next;
			head1 = head1->next;
		}
		else {
			new_head->next = head2;
			new_head = new_head->next;
			head2 = head2->next;
		}
	}

	while (head1) {
		new_head->next = head1;
		head1 = head1->next;
		new_head = new_head->next;
	}
	while (head2) {
		new_head->next = head2;
		head2 = head2->next;
		new_head = new_head->next;
	}
	return new_head_start;
}

ListNode* sortList(ListNode* head) {
	if (!head || !head->next)
		return head;

	ListNode* middle = getCuttedMiddle(head);

	if (head && head->next)
		head = sortList(head);
	if (middle && middle->next)
		middle = sortList(middle);

	head = mergeLists(head, middle);

	return head;
}