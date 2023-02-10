/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 22:35:41 by ncarob            #+#    #+#             */
/*   Updated: 2023/02/10 00:55:45 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.hpp"

void initArray(vector<vector<int> >& array) {
	for (int i = 0; i < 26; ++i) {
		array[i] = vector<int>(26);
	}
}

int longestPalindrome(vector<string>& words) {
	int						size = words.size();
	int						result = 0;
	vector<vector<int> >	array(26);

	if (!size)
		return 0;
	
	initArray(array);

	for (int i = 0; i < size; ++i)
		array[words[i][0] - 97][words[i][1] - 97]++;

	for (int i = 0; i < 26; ++i) {
		for (int j = 0; j < i; ++j) {
			if (array[i][j] && array[j][i])
				result += (array[i][j] >= array[j][i] ? array[j][i] : array[i][j]) * 4;
		}
	}

	int odd = 0;
	int even = 0;
	for (int i = 0; i < 26; ++i) {
		even += array[i][i] / 2;
		odd += array[i][i] % 2;
	}

	result += even * 4;
	if (odd)
		result += 2;

	return result;
}