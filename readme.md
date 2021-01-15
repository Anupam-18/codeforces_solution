# Explanation and approach
(i) Iterating through each pair in vector of pairs, check whether there is a point in 
left by verifying the condition - (coordinate[i].F > coordinate[j].F and coordinate[i].S == coordinate[j].S)

(ii)Repeat this check for right,lower and upper as well and store their value in a boolean.

(iii) check if all boolean are true for that particular point then increment the value of ans as 
we have got a point satisfying all the conditions.
Time complexity of the above approach will be - O(n^2)
Space complexity will be - O(1)
