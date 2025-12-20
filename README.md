# 算法竞赛学习记录

用于个人日常学习记录，主要维护模板和做题笔记

<!-- TEMPLATE_START -->
## Template

<details open>
<summary><strong>一些杂碎</strong></summary>

- [01 - main.txt](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/Template/一些杂碎/01%20-%20main.txt)
- [02 - 一些小trick.txt](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/Template/一些杂碎/02%20-%20一些小trick.txt)
- [03 - 进制转换.txt](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/Template/一些杂碎/03%20-%20进制转换.txt)
- [04 - int128 输出流自定义.txt](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/Template/一些杂碎/04%20-%20int128%20输出流自定义.txt)

</details>

<details open>
<summary><strong>字符串</strong></summary>

- [01 - kmp.txt](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/Template/字符串/01%20-%20kmp.txt)

</details>

<details open>
<summary><strong>数学</strong></summary>

- [01 - 快速幂.txt](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/Template/数学/01%20-%20快速幂.txt)
- [02 - 组合计数.txt](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/Template/数学/02%20-%20组合计数.txt)
- [03 - 线性筛.txt](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/Template/数学/03%20-%20线性筛.txt)
- [04 - 计算几何.txt](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/Template/数学/04%20-%20计算几何.txt)
- [05 - 多项式乘法（NTT）.txt](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/Template/数学/05%20-%20多项式乘法（NTT）.txt)
- [06 - 米勒-罗宾素数检验（Miller–Rabin）.txt](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/Template/数学/06%20-%20米勒-罗宾素数检验（Miller–Rabin）.txt)

</details>

<details open>
<summary><strong>数据结构</strong></summary>

- [01 - 并查集（DSU）.txt](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/Template/数据结构/01%20-%20并查集（DSU）.txt)
- [02 - 普通莫队.txt](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/Template/数据结构/02%20-%20普通莫队.txt)
- [03 - 树状数组（FenwickTree）.txt](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/Template/数据结构/03%20-%20树状数组（FenwickTree）.txt)
- [04 - ST表（SparseTable）.txt](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/Template/数据结构/04%20-%20ST表（SparseTable）.txt)
- [05 - 线段树（区间合并，不带修）.txt](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/Template/数据结构/05%20-%20线段树（区间合并，不带修）.txt)
- [06A - 懒标记线段树（基础区间操作）.txt](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/Template/数据结构/06A%20-%20懒标记线段树（基础区间操作）.txt)
- [06B - 懒标记线段树（双重区间操作）.txt](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/Template/数据结构/06B%20-%20懒标记线段树（双重区间操作）.txt)
- [06C - 懒标记线段树（动态开点+区间操作）.txt](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/Template/数据结构/06C%20-%20懒标记线段树（动态开点+区间操作）.txt)
- [07A - 吉如一线段树（区间求和）.txt](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/Template/数据结构/07A%20-%20吉如一线段树（区间求和）.txt)
- [07B - 吉如一线段树（区间求和+区间历史最值）.txt](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/Template/数据结构/07B%20-%20吉如一线段树（区间求和+区间历史最值）.txt)

</details>

<!-- TEMPLATE_END -->

<!--

https://github.com/Aeyone/aeyone-algorithm-note/blob/main/

-->

## Problemset

#### 基础算法

|Difficulty| Problem | Note | Code |
|----------| -------- | ---- | ---- |
|cf*1600|[Balanced Stone Heaps](https://codeforces.com/contest/1623/problem/C)|二分+一点DP思想|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/09.22/c.cpp)|
|cf*1600|[Binary String](https://codeforces.com/contest/1680/problem/C)|二分 n*n优化至nlogn|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/09.23/b.cpp)|
|cf*1700|[Constant Palindrome Sum](https://codeforces.com/contest/1343/problem/D)|枚举+二分 需要动点脑子|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/10.22-10.24/1343D.cpp)|
||
|cf*1700|[Prefix Flip (Hard Version)](https://codeforces.com/contest/1381/problem/A2)|双指针|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/10.27/1381A2.cpp)|
|cf*1800|[Slime Escape](https://codeforces.com/contest/1734/problem/D)|高难度双指针|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/10.29/1734d.cpp)|
|cf*1800|[Fixing a Binary String](https://codeforces.com/contest/1979/problem/D)|双指针+贪心，循环位移经典Trick|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/12.17/a.cpp)|
|cf*1800|[Imbalanced Arrays](https://codeforces.com/contest/1852/problem/B)|双指针 细节要考虑清楚 洛谷评蓝 确实有点难度|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/12.19/a.cpp)|
||
|cf*1800|[Buying gifts](https://codeforces.com/contest/1801/problem/B)|有趣贪心|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/12.17/d.cpp)|


#### 动态规划

|Difficulty| Problem | Note | Code |
|----------| --------| ---- | ---- |
|cf*1800|[Money Buys Happiness](https://codeforces.com/contest/1974/problem/E)|很朴素的背包DP|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/12.11/a.cpp)|
|atc*719|[Robot Customize](https://atcoder.jp/contests/abc431/tasks/abc431_d)|简单背包DP，带一点条件的转移|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/11.28/a.cpp)|
|cf*1700|[Sleeping Schedule](https://codeforces.com/contest/1324/problem/E)|DP练手题，背包计数|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/10.22-10.24/1324E.cpp)|
|cf*1700|[Road Optimization](https://codeforces.com/problemset/problem/1625/C)|很典，详解看Code|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/10.12/a.cpp)|
|cf*1600|[Good Triples](https://codeforces.com/contest/1907/problem/E)|数学+背包DP|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/12.03/a.cpp)|
|cf*1800|[Attribute Checks](https://codeforces.com/contest/2025/problem/D)|本质背包DP，也是通过不同选择线性递推|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/08.03/a.cpp)|
|cf*1600|[Good Key, Bad Key](https://codeforces.com/contest/1703/problem/G)|考虑势能分析，最多除2除30下，在此基础上进行DP|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/09.22/e.cpp)|
|atc*1694|[Shortest One Formula](https://atcoder.jp/contests/abc403/tasks/abc403_f)|难点在于想到使用DP解决这个问题，状态转移本身不难|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/12.12/f.cpp)|
|cf*1600|[Array Walk](https://codeforces.com/contest/1389/problem/B)|线性DP，细节处理要仔细分析|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/11.29/c.cpp)|
|cf*1700|[Minimizing the Sum](https://codeforces.com/contest/1969/problem/C)|很有难度的一道DP，状态转移非常关键|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/11.29/d.cpp)|
|atc*1990|[Eat and Ride](https://atcoder.jp/contests/abc422/tasks/abc422_f)|难点在于状态设计，算是一种套路，由于这题每个节点出去的权值会变，松弛操作不正确，不适合跑最短路|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/12.04/f.cpp)|
|unknown|[Base Station Construction](https://codeforces.com/gym/104369/problem/B)|单调队列优化DP（2023广东省赛）|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/XCPC/2023%20广东省大学生程序设计竞赛/b.cpp)|
||
|cf*1600|[Mukhammadali and the Smooth Array](https://codeforces.com/contest/2167/problem/G)|经典LIS问题板子题|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Codeforces/2167(div4)/g.cpp)|
|cf*1700|[Consecutive Subsequence](https://codeforces.com/contest/977/problem/F)|构造+经典LIS问题变形|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/10.27/977F.cpp)|
|atc*1063|[Forbidden Difference](https://atcoder.jp/contests/abc403/tasks/abc403_d)|DP处理连续序列问题的小Trick|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/12.12/b.cpp)|
||
|cf*1800|[The Sports Festival](https://codeforces.com/contest/1509/problem/C)|很普通的区间DP|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/11.11/1509C.cpp)|
||
|cf*1600|[Parsa's Humongous Tree](https://codeforces.com/contest/1528/problem/A)|树形DP+贪心（只考虑上界和下界）|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/11.27/a.cpp)|
|cf*1700|[Substring](https://codeforces.com/contest/919/problem/D)|有向图上DP，很典|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/10.30/919D.cpp)|
|easy|[AVL tree](https://ac.nowcoder.com/acm/contest/108306/A)|树形DP+AVL树的性质（2025牛客暑期多校训练营9）|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/NowCoder/2025牛客暑期多校训练营9/a.cpp)|
||
|easy|[Not a subset sum](https://qoj.ac/contest/2645/problem/15317)|状压DP，想到转移就很好做了（2025ICPC上海区域赛D）|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/XCPC/The%202025%20ICPC%20Asia%20Shanghai%20Regional%20Contest/d.cpp)|
|atc*1752|[Inserting Process](https://atcoder.jp/contests/abc425/tasks/abc425_f)|状压DP，和上题类似，难点在于处理相邻位置相同时的条件转移|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/12.02/c.cpp)|
|atc*1229|[2x2 Erasing 2](https://atcoder.jp/contests/abc424/tasks/abc424_d)|简单状压DP|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/12.02/d.cpp)|
|unknown|[Light Up the Grid](https://codeforces.com/gym/105578/problem/E)|Floyd+状压DP（2024ICPC沈阳区域赛）|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/XCPC/The%202024%20ICPC%20Asia%20Shenyang%20Regional%20Contest/e.cpp)|
||
|cf*1800|[Colored Balls](https://codeforces.com/contest/1954/problem/D)|计数题，转换为维护方案数的dp+贪心|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/12.17/b.cpp)|
|cf*unknown|[Fibonacci Paths](https://codeforces.com/contest/2176/problem/D)|计数题，经典斐波那契+贪心，详解看Code|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Codeforces/2176(div2)/d.cpp)|
|cf*1700|[Sum of XOR Functions](https://codeforces.com/contest/1879/problem/D)|计数题，XOR|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/10.03/d.cpp:)|
|cf*1700|[Magic Triples (Easy Version)](https://codeforces.com/contest/1822/problem/G1)|计数题，经典按照数据访问枚举技巧|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/10.04/d.cpp)|
|cf*1700|[Eugene and an array](https://codeforces.com/contest/1333/problem/C)|计数题，前缀和Trick|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/10.27/1333C.cpp)|
|cf*1600|[Sequence Pair Weight](https://codeforces.com/contest/1527/problem/C)|计数题，经典贡献法|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/11.27/c.cpp)|
|cf*1800|[Increasing Subsequences](https://codeforces.com/contest/1922/problem/E)|计数题，拆位+构造，经典trick|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/12.15/a.cpp)|
|atc*1199|[Count Sequences 2](https://atcoder.jp/contests/abc425/tasks/abc425_e)|计数题，基础组合数学，n^2预处理|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/12.02/b.cpp)|
|cf*1700|[Close Tuples (hard version)](https://codeforces.com/contest/1462/problem/E2)|计数题，排列组合+双指针|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/11.27/e.cpp)|
|atc*1347|[Popcount Sum 3](https://atcoder.jp/contests/abc406/tasks/abc406_e)|计数题，拆位+组合数学，难点在于保证计数不重不漏|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/12.12/c.cpp)|
|cf*1800|[Shohag Loves XOR (Hard Version) ](https://codeforces.com/contest/2039/problem/C2)|计数题，XOR+数学知识（整除一定至少为2倍）|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/12.19/c.cpp)|

#### 数据结构

|Difficulty| Problem | Note | Code |
|----------| -------- | ---- | ---- |
|atc*100|[Nearest Taller](https://atcoder.jp/contests/abc433/tasks/abc433_b)|最基本的单调栈用法|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/AtCoder/abc433/b.cpp)|
|cf*1800|[Rating System](https://codeforces.com/contest/1845/problem/D)|单调栈好题 有点挑战性|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/12.15/c.cpp)|
||[]()||[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/)|

#### 数学

|Difficulty| Problem | Note | Code |
|----------| -------- | ---- | ---- |
|atc*1271|[Count A%B=C](https://atcoder.jp/contests/abc414/tasks/abc414_e)|数论分块模板|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/)|
|cf*1600|[Maximum Set](https://codeforces.com/contest/1796/problem/C)|数学|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/09.23/a.cpp)|
|cf*1700|[Xenia and Colorful Gems](https://codeforces.com/contest/1336/problem/B)|数学|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/10.28/1336B.cpp)|
|atc*1213|[Sum of Subarrays](https://atcoder.jp/contests/abc423/tasks/abc423_e)|推公式题，推的很顺，好玩|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/12.04/b.cpp)|
||[]()||[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/)|


#### 图论

|Difficulty| Problem | Note | Code |
|----------| -------- | ---- | ---- |
||[]()||[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/)|

#### 字符串

/home/aeyone/code/aeyone-algorithm-note/

|Difficulty| Problem | Note | Code |
|----------| -------- | ---- | ---- |
|atc*1124|[Shift String](https://atcoder.jp/contests/abc430/tasks/abc430_e)|KMP板子+循环位移Trick|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/src/Training/11.28/e.cpp)|
|unknown|[幻想乡的裁判长](https://qoj.ac/contest/2575/problem/14823)|（Todo）Manacher变形（2025CCPC哈尔滨）|[Code](https://github.com/Aeyone/aeyone-algorithm-note/blob/main/)|