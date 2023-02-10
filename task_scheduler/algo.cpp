/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:48:28 by ncarob            #+#    #+#             */
/*   Updated: 2023/02/10 15:10:20 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.hpp"

int leastInterval(vector<char>& tasks, int n) {
	if (!n)
		return tasks.size();

	short			size = tasks.size();
	vector<short>	array(26, 0);
	int				result = 0;
	
	
	for (short i = 0; i < size; ++i)
		array[tasks[i] - 65]++;

	for (short i = 25; i > 0; --i) {
		for (short j = 0; j < i; ++j) {
			if (array[j] < array[j + 1]) {
				result = array[j + 1];
				array[j + 1] = array[j];
				array[j] = result;
			}
		}
	}

	result = 0;
	while (result <= 25 && array[result] == array[0])
		result++;
	result = (size > (array[0] - 1) * (n + 1) + result) ? size : (array[0] - 1) * (n + 1) + result;
	return result;
}