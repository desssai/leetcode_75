/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 21:59:52 by ncarob            #+#    #+#             */
/*   Updated: 2023/02/09 01:54:53 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.hpp"

string multiply(string num1, string num2) {
	if (num1 == "0" || num2 == "0")
		return "0";

	string result;
	vector<string>	sums;
	
	short size1 = num1.size();
	short size2 = num2.size();
	short multiplication = 0;
	short zeroes = 0;

	for (short i = size1 - 1; i >= 0; --i) {
		for (short j = size2 - 1; j >= 0; --j) {
			multiplication += (num1[i] - 48) * (num2[j] - 48);
			result.insert(0, 1, multiplication % 10 + 48);
			multiplication /= 10;
		}
		if (multiplication) {
			result.insert(0, 1, multiplication + 48);
			multiplication = 0;
		}
		result.insert(result.size(), zeroes, '0');
		sums.push_back(result);
		result = "";
		zeroes++;
	}

	short vect_size = sums.size();
	short max_length = 0;
	short curr_length = 0;
	
	for (short i = 0; i < vect_size; ++i) {
		curr_length = sums[i].size();
		if (max_length < curr_length)
			max_length = curr_length;
	}

	for (short i = 0; i < vect_size; ++i) {
		curr_length = sums[i].size();
		if (curr_length < max_length)
			sums[i].insert(0, max_length - curr_length, '0');
	}

	result = "";
	short digits = 0;
	for (short j = max_length - 1; j > -1; --j) {
		for (short i = 0; i < vect_size; ++i)
			digits += sums[i][j] - 48;
		result.insert(0, 1, digits % 10 + 48);
		digits /= 10;
	}
	if (digits)
		result.insert(0, 1, digits + 48);

	return result;
}