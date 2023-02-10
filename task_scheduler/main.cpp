/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:48:45 by ncarob            #+#    #+#             */
/*   Updated: 2023/02/10 13:36:04 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.hpp"

int main(void) {
	char tasks1[6] = {'A','A','A','B','B','B'};
	char tasks2[12] = {'A','A','A','A','A','A','B','C','D','E','F','G'};

	vector<char> test1(6);
	vector<char> test2(6);
	vector<char> test3(12);

	for (int i = 0; i < 6; ++i) {
		test1[i] = tasks1[i];
		test2[i] = tasks1[i];
		test3[i] = tasks2[i];
	}
	for (int i = 6; i < 12; ++i) {
		test3[i] = tasks2[i];
	}

	cout << "CASE 1:\t" << leastInterval(test1, 2) << endl;
	cout << "CASE 2:\t" << leastInterval(test2, 0) << endl;
	cout << "CASE 3:\t" << leastInterval(test3, 2) << endl;

}