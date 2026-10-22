<h2><a href="https://www.geeksforgeeks.org/problems/least-prime-factor5216/1">Least Prime Factor</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 14pt;">Given an integer <strong>n</strong>, find the least prime factor (LPF) of every integer from 1 to n.</span></p>
<p><span style="font-size: 14pt;">The least prime factor of an integer x is the smallest prime number that divides x.</span></p>
<p><span style="font-size: 14pt;">Return an array of size n+1, using 1-based indexing, where the ith element stores the least prime factor of the (i + 1)th integer.</span></p>
<p><span style="font-size: 14pt;">For i = 1, the least prime factor is defined as 1.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input</strong>: n = 6
<strong>Output:</strong> [1, 2, 3, 2, 5, 2]&nbsp;
<strong>Explanation</strong>: least prime factor of 1 = 1,
least prime factor of 2 = 2,
least prime factor of 3 = 3,
least prime factor of 4 = 2,
least prime factor of 5 = 5,
least prime factor of 6 = 2.
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>n = 4
<strong>Output:&nbsp;</strong>[1, 2, 3, 2]
<strong>Explanation</strong>: least prime factor of 1 = 1,
least prime factor of 2 = 2,
least prime factor of 3 = 3,
least prime factor of 4 = 2.</span></pre></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Mathematics</code>&nbsp;<code>Prime Number</code>&nbsp;<code>sieve</code>&nbsp;