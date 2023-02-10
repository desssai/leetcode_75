/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 22:36:55 by ncarob            #+#    #+#             */
/*   Updated: 2023/02/10 00:55:26 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.hpp"

int main(void) {
	/* CASE 1 */
	{

	string a = "lc";
	string b = "cl";
	string c = "gg";
	
	vector<string> v(3);
	v[0] = a;
	v[1] = b;
	v[2] = c;
	
	cout << "CASE 1:\t" << longestPalindrome(v) << endl;

	}
	/* CASE 2 */
	{

	string a = "ab";
	string b = "ty";
	string c = "yt";
	string d = "lc";
	string e = "cl";
	string f = "ab";
	
	vector<string> v(6);
	v[0] = a;
	v[1] = b;
	v[2] = c;
	v[3] = d;
	v[4] = e;
	v[5] = f;

	cout << "CASE 2:\t" << longestPalindrome(v) << endl;

	}
	/* CASE 3 */
	{

	string a = "cc";
	string b = "ll";
	string c = "xx";
	
	vector<string> v(3);
	v[0] = a;
	v[1] = b;
	v[2] = c;

	cout << "CASE 3:\t" << longestPalindrome(v) << endl;
	}
	/* CASE 4 */
	{

	string a = "em";
	string b = "pe";
	string c = "mp";
	string d = "ee";
	string e = "pp";
	string f = "me";
	string g = "ep";
	string h = "em";
	string i = "em";
	string j = "me";
	
	vector<string> v(10);
	v[0] = a;
	v[1] = b;
	v[2] = c;
	v[3] = d;
	v[4] = e;
	v[5] = f;
	v[6] = g;
	v[7] = h;
	v[8] = i;
	v[9] = j;

	cout << "CASE 4:\t" << longestPalindrome(v) << endl;
	}
	/* CASE 5 */
	{

	string testt[] = {"jj","jj","jz","zz","zz","jr","rj","rr","zj","jj","rj","zj","rz","rj","zz","jr","zz","jj","rj","jr","rj","rr","jj","rr","zz","zj","rz","rr","rj","jz","zj","rr","jz","zz","jr","zz","zz","rr","zz","zr","rr","jj","jj","jj","jz","zz","rr","jj","rj","rz","zz"};
	vector<string> test;
	
	for (int i = 0; i < 51; ++i) {
		test.push_back(testt[i]);
	}
	
	cout << "CASE 5:\t" << longestPalindrome(test) << endl;
	
	}
}
