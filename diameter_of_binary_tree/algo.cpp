/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:13:36 by ncarob            #+#    #+#             */
/*   Updated: 2023/02/10 21:33:36 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.hpp"

int	BiggestDepth(TreeNode* root) {
	if (!root)
		return 0;

	short left = 0;
	if (root->left)
		left = BiggestDepth(root->left);

	short right = 0;
	if (root->right)
		right = BiggestDepth(root->right);

	return ((left > right ? left : right) + 1);
}

int diameterOfBinaryTree(TreeNode* root) {
	short diameter = 0;

	diameter = BiggestDepth(root->left) + BiggestDepth(root->right);
	
	short buf1 = 0;
	if (root->left)
		buf1 = diameterOfBinaryTree(root->left);
	
	short buf2 = 0;
	if (root->right)
		buf2 = diameterOfBinaryTree(root->right);
	
	if (buf1 > buf2 && buf1 > diameter)
		return buf1;
	if (buf2 > buf1 && buf2 > diameter)
		return buf2;
	return diameter;
}