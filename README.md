# DS-hw3-BST
Data Structure BST exercise

## Task:
Given an input number n and serial integers, please build a binary search tree and show the preorder,
inorder and postorder traversals. While building the Binary Search Tree, the root is the first integer of the
serial integers. If the upcoming integer equalsto an existing node, put it on itsleft (left-child). For other cases,
put the smaller ones on left (left-child), bigger ones on right (right-child).  

## Input Format:  
 The first line represents the amount of the input series. (a variable n)  
 Starting from the second line, each line represents a serial input to build a binary search tree.  
 All inputs end with a new line “\n”.  
 The numbers in a serial input are integers (−2^31 < number < 2^31 − 1), and they are separated by a
comma (“,”).

## Output Format:  
 For each serial input, show its preorder, inorder and postorder traversals, respectively.  
 Take notice of the upper and lower cases of “Preorder”, “Inorder” and “Postorder”.  
 There’s no white space before the colon (“:”), but one white space after it.  
 One white space between the output numbers, and no white space but a new line “\n” at the end.  

## Example:  
Input:  
3  
9,5,6,7,1,8,3  
22,86,-5,8,66,9  
45,3,5,3,8,6,-8,-9  
Output:  
Preorder: 9 5 1 3 6 7 8  
Inorder: 1 3 5 6 7 8 9  
Postorder: 3 1 8 7 6 5 9  
Preorder: 22 -5 8 9 86 66  
Inorder: -5 8 9 22 66 86  
Postorder: 9 8 -5 66 86 22  
Preorder: 45 3 3 -8 -9 5 8 6  
Inorder: -9 -8 3 3 5 6 8 45  
Postorder: -9 -8 3 6 8 5 3 45
"""
