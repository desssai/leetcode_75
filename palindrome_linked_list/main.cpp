/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:53:29 by ncarob            #+#    #+#             */
/*   Updated: 2023/02/09 15:53:29 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.hpp"

int main(void) {
	// ListNode	list7(1);
	// ListNode	list6(2, &list7);
	// ListNode	list5(3, &list6);
	// ListNode	list41(41, &list5);
	ListNode	list4(4);
	ListNode	list3(3, &list4);
	ListNode	list2(2, &list3);
	ListNode	list1(1, &list2);

	isPalindrome(&list1);
}