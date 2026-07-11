<h2><a href="https://www.geeksforgeeks.org/problems/c-generic-sort/1?page=1&category=CPP&difficulty=Medium&sortBy=submissions">C++ Generic sort</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 18px;">Given an array <strong>arr[]</strong>, whose elements can be of type <strong>integer</strong>, <strong>string</strong>, or <strong>float</strong>, sort the array in ascending order using C++ templates.</span></p>
<p><span style="font-size: 18px;">The driver code uses a variable <strong>q</strong> to determine the data type of the array:</span></p>
<ul>
<li><span style="font-size: 18px;">q = 1 : arr contains integers</span></li>
<li><span style="font-size: 18px;">q = 2 : arr contains strings</span></li>
<li><span style="font-size: 18px;">q = 3 : arr contains floating-point numbers</span></li>
</ul>
<p><span style="font-size: 18px;"><strong>Examples :</strong> <strong> </strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> q = 3, arr[] = [34.23, -4.35, 3.4]
<strong>Output: </strong>[-4.35, 3.4, 34.23]&nbsp;
<strong>Explanation:</strong>The array is of floating type. After sorting, the elements of array are as such: -4.35 3.4 34.23
</span></pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong> q = 1, arr[] = 123 -2311 837 0 
<strong>Output: </strong>[-2311, 0, 123, 837]<br></span><strong style="font-size: 18px; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">Explanation: </strong><span style="font-size: 18px; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">The array is of Integer type. After sorting,  the elements of array are as such:<span style="font-size: 14pt;"> </span></span><span style="font-size: 14pt;">-2311 0 123 837 </span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ |arr| ≤ 10<sup>4</sup><br>1 ≤ q ≤ 3<br>1 ≤ integer ≤ 10<sup>5</sup><br>1.0 ≤ floating number ≤ 100000.0<br>1 ≤ string.size() ≤ 10<sup>2</sup><br>String consists of only lowercase English alphabets</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Sorting</code>&nbsp;<code>Misc</code>&nbsp;<code>CPP</code>&nbsp;<code>Algorithms</code>&nbsp;