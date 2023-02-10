/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 18:29:44 by ncarob            #+#    #+#             */
/*   Updated: 2023/02/10 21:00:16 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.hpp"

int Balanced(TreeNode* node) {
	if (!node)
		return 0;

	short left = Balanced(node->left);
	if (left == -1)
		return -1;

	short right = Balanced(node->right);
	if (right == -1)
		return -1;

	if ((left > right ? left : right) - (left < right ? left : right) > 1)
		return -1;
	else
		return ((left > right ? left : right) + 1);
}

bool isBalanced(TreeNode* root) {
	if (Balanced(root) < 0)
		return false;
	return true;
}