/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:50:21 by ncarob            #+#    #+#             */
/*   Updated: 2023/02/11 21:11:48 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.hpp"

int main(void) {
	vector<int>	a;
	
	a.push_back(1);
	a.push_back(3);
	a.push_back(5);
	a.push_back(7);
	
	vector<int>	b;
	
	b.push_back(10);
	b.push_back(11);
	b.push_back(16);
	b.push_back(20);

	vector<int>	c;

	c.push_back(23);
	c.push_back(30);
	c.push_back(34);
	c.push_back(60);

	vector<vector<int> > test;

	test.push_back(a);
	test.push_back(b);
	test.push_back(c);

	cout << searchMatrix(test, 0) << endl;

	for (int i = 0; i < test.size(); ++i) {
		for (int j = 0; j < test[i].size(); ++j)
			cout << test[i][j] << " " << searchMatrix(test, test[i][j]) << endl;
	}
}