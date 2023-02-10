/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 21:59:59 by ncarob            #+#    #+#             */
/*   Updated: 2023/02/08 21:59:59 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algorithm.hpp"

/* Check first and last column */
/* Check for V shapes */
/* Keep track of the balls */

vector<int> findBall(vector<vector<int> >& grid) {
    int n = grid.size();
    int m = grid[0].size();
    vector<int> array;

    for (int i = 0; i < m; ++i)
        array.push_back(i);

	cout << -1 << ": ";
	for (int i = 0; i < m; ++i)
		cout << array[i] << " ";
	cout << endl;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
            
			if (!array[j] && grid[i][0] == -1)
				array[j] = -1;
            
			else if (array[j] == m - 1 && grid[i][m - 1] == 1)
				array[j] = -1;
            
			else if (array[j] != -1) {
				if (array[j] && grid[i][array[j]] == -1 && grid[i][array[j] - 1] == 1)
					array[j] = -1;
				else if (array[j] != m - 1 && grid[i][array[j]] == 1 && grid[i][array[j] + 1] == -1)
					array[j] = -1;
				else {
					if (grid[i][array[j]] == 1)
						array[j]++;
					else
						array[j]--;
				}
			}
	    }

		cout << i << ": ";
		for (int i = 0; i < m; ++i)
			cout << array[i] << " ";
		cout << endl;
    }
    return array;
}