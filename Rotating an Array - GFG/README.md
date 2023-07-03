# Rotating an Array
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array&nbsp;of size&nbsp;<strong>N</strong>. The task is to rotate array by <strong>D</strong> elements where <strong>D&nbsp;</strong></span><span style="font-size: 18px;">≤</span><span style="font-size: 18px;">&nbsp;<strong>N</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 7
Arr[] = {1, 2, 3, 4, 5, 6, 7}
D = 2
<strong>Output:</strong> 3 4 5 6 7 1 2
<strong>Explanation:</strong> 
Rotate by 1: [2, 3, 4, 5, 6, 7, 1]
Rotate by 2: [3, 4, 5, 6, 7, 1, 2]</span>
</pre>
<p><br><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 4
Arr[] = {1, 3, 4, 2}
D = 3
<strong>Output:</strong> 2 1 3 4

</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>leftRotate()</strong>&nbsp;which takes the array of integers&nbsp;<strong>arr[], </strong>its size&nbsp;<strong>n</strong>&nbsp;and&nbsp;<strong>d&nbsp;</strong>as input parameters and rotates&nbsp;arr[] in-place without using any extra memory.</span></p>
<p><br><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>
<p><br><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ N ≤ 10<sup>5</sup><br>1 ≤ Arr[i] ≤ 1000<br>0 ≤ D ≤ N</span></p>
<p>&nbsp;</p></div>