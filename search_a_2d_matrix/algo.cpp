/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:50:45 by ncarob            #+#    #+#             */
/*   Updated: 2023/02/11 21:10:43 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.hpp"

bool searchMatrix(vector<vector<int> >& matrix, int target) {
	short	i_high = matrix.size();
	short	j_high = matrix[0].size();
	
	short	mid;
	short	low = 0;
	short	high = i_high * j_high - 1;
	
	while (low <= high) {
		mid = (low + high) >> 1;
		if (matrix[mid / j_high][mid % j_high] < target)
			low = mid + 1;
		else if (matrix[mid / j_high][mid % j_high] > target)
			high = mid - 1;
		else
			return true;
	}
	return false;
}