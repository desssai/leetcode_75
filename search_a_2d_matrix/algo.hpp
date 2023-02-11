/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:49:57 by ncarob            #+#    #+#             */
/*   Updated: 2023/02/11 18:01:02 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGORITHM_H
# define ALGORITHM_H

# include <iostream>
# include <vector>

using std::vector;
using std::cout;
using std::endl;

bool searchMatrix(vector<vector<int> >& matrix, int target);

#endif /* ALGORITHM_H */