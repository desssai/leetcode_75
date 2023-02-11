/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:09:09 by ncarob            #+#    #+#             */
/*   Updated: 2023/02/11 16:36:54 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.hpp"

void	findSmallerSum(TreeNode* root, int targetSum, int& pathNum, long long sum) {
	if (!root)
		return ;

	findSmallerSum(root->left, targetSum, pathNum, sum + root->val);
	findSmallerSum(root->right, targetSum, pathNum, sum + root->val);

	if (targetSum == root->val + sum)
		pathNum++;
}

void	findTargetSum(TreeNode* root, int& targetSum, int& pathNum) {
	if (!root)
		return ;
	
	findSmallerSum(root->left, targetSum - root->val, pathNum, 0);
	findTargetSum(root->left, targetSum, pathNum);

	findSmallerSum(root->right, targetSum - root->val, pathNum, 0);
	findTargetSum(root->right, targetSum, pathNum);

	if (targetSum == root->val)
		pathNum++;
}

int pathSum(TreeNode* root, int targetSum) {
	int pathNum = 0;

	findTargetSum(root, targetSum, pathNum);
	return pathNum;
}