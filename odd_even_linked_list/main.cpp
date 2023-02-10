/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:19:15 by ncarob            #+#    #+#             */
/*   Updated: 2023/02/09 16:43:49 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.hpp"

int main(void) {
	ListNode	list7(7);
	ListNode	list6(6, &list7);
	ListNode	list5(5, &list6);
	ListNode	list4(4, &list5);
	ListNode	list3(3, &list4);
	ListNode	list2(2, &list3);
	ListNode	list1(1, &list2);

	ListNode* ptr;

	ptr = oddEvenList(&list1);
	while (ptr) {
		cout << ptr->val << " ";
		ptr = ptr->next;
	}
	cout << endl;
}