/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 21:59:56 by ncarob            #+#    #+#             */
/*   Updated: 2023/02/08 21:59:57 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algorithm.hpp"

int main(void) {
	vector<int> av(5);
	vector<int> bv(5);
	vector<int> cv(5);
	vector<int> dv(5);
	vector<int> ev(5);
	
	av[0] = 1;
	av[1] = 1;
	av[2] = 1;
	av[3] = -1;
	av[4] = -1;

	bv[0] = 1;
	bv[1] = 1;
	bv[2] = 1;
	bv[3] = -1;
	bv[4] = -1;

	cv[0] = -1;
	cv[1] = -1;
	cv[2] = -1;
	cv[3] = 1;
	cv[4] = 1;

	dv[0] = 1;
	dv[1] = 1;
	dv[2] = 1;
	dv[3] = 1;
	dv[4] = -1;

	ev[0] = -1;
	ev[1] = -1;
	ev[2] = -1;
	ev[3] = -1;
	ev[4] = -1;

	vector<vector<int> > grid(5);

	grid[0] = av;
	grid[1] = bv;
	grid[2] = cv;
	grid[3] = dv;
	grid[4] = ev;

	vector<int> result = findBall(grid);

	for (int i = 0; i < result.size(); ++i)
		std::cout << result[i] << " ";
	std::cout << std::endl;

	vector<vector<int> > gria(1);
	vector<int> inside(1, 1);
	gria[0] = inside;

	vector<int> result1 = findBall(gria);

	for (int i = 0; i < result1.size(); ++i)
		std::cout << result1[i] << " ";
	std::cout << std::endl;
}