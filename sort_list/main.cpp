/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:24:25 by ncarob            #+#    #+#             */
/*   Updated: 2023/02/09 20:03:08 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.hpp"

int main(void) {
	ListNode	list7(-123487);
	ListNode	list6(0, &list7);
	ListNode	list5(675, &list6);
	ListNode	list4(-123, &list5);
	ListNode	list3(235, &list4);
	ListNode	list2(1234, &list3);
	ListNode	list1(-1, &list2);

	ListNode	nlist8(-12);
	ListNode	nlist7(99, &nlist8);
	ListNode	nlist6(0, &nlist7);
	ListNode	nlist5(6, &nlist6);
	ListNode	nlist4(-1, &nlist5);
	ListNode	nlist3(3, &nlist4);
	ListNode	nlist2(-128376, &nlist3);
	ListNode	nlist1(12, &nlist2);

	ListNode* ptr;

	ptr = sortList(&list1);
	while (ptr) {
		cout << ptr->val << " ";
		ptr = ptr->next;
	}
	cout << endl;

	// ptr = sortList(&nlist1);
	// while (ptr) {
	// 	cout << ptr->val << " ";
	// 	ptr = ptr->next;
	// }
	// cout << endl;
}