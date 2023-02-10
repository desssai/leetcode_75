/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:54:05 by ncarob            #+#    #+#             */
/*   Updated: 2023/02/10 16:02:06 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.hpp"

TreeNode* invertTree(TreeNode* root) {
	if (!root)
		return nullptr;

	TreeNode* right1 = invertTree(root->right);
    TreeNode* left1 = invertTree(root->left);

	root->left = right1;
	root->right = left1;
	return root;
}