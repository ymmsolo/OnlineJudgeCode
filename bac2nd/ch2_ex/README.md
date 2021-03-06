## 习题2-1　水仙花数（daffodil）

输出100～999中的所有水仙花数。若3位数ABC满足ABC＝A^3＋B^3＋C^3，则称其为水仙花数。例如153＝1^3＋5^3＋3^3，所以153是水仙花数。

## 习题2-2　韩信点兵（hanxin）

相传韩信才智过人，从不直接清点自己军队的人数，只要让士兵先后以三人一排、五人一排、七人一排地变换队形，而他每次只掠一眼队伍的排尾就知道总人数了。输入包含多组数据，每组数据包含3个非负整数a，b，c，表示每种队形排尾的人数（a＜3，b＜5，c＜7），输出总人数的最小值（或报告无解）。已知总人数不小于10，不超过100。输入到文件结束为止。

样例输入：
```
2 1 6 
2 1 3
```
样例输出：
```
Case 1: 41
Case 2: No answer
```

【分析】
> 三人同行七十稀，<br>
五树梅花甘一枝，<br>
七子团圆正半月，<br>
除百零五便得知。<br>

这四句口诀暗示的意思是：

当除数分别是3、5、7时,

用70乘以用3除的余数<br>
用21乘以用5除的余数<br>
用15乘以用7除的余数<br>
然后把这三个乘积相加<br>
加得的结果如果比105大,就除以105,所得的余数就是满足题目要求的最小正整数解。


## 习题2-3　倒三角形（triangle）

输入正整数n≤20，输出一个n层的倒三角形。例如，n＝5时输出如下：
```
#########
 #######
  #####
   ###
    #
```

## 习题2-4　子序列的和（subsequence）

输入两个正整数n＜m＜10^6，输出1/n^2 + 1/(n+1)^2 + … + 1/m^2，保留5位小数。输入包含多组数据，结束标记为n＝m＝0。提示：本题有陷阱。

样例输入：
```
2 4
65536 655360
0 0
```
样例输出：
```
Case 1: 0.42361
Case 2: 0.00001
```

【分析】 使用1/n/n代替1/(n*n)避免溢出

## 习题2-5　分数化小数（decimal）

输入正整数a，b，c，输出a/b的小数形式，精确到小数点后c位。a，b≤106，c≤100。输入包含多组数据，结束标记为a＝b＝c＝0。

样例输入：
```
1 6 4
0 0 0
```
样例输出：
```
Case 1: 0.1667
```

## 习题2-6　排列（permutation）

用1，2，3，…，9组成3个三位数abc，def和ghi，每个数字恰好使用一次，要求abc：def：ghi＝1：2：3。按照“abc def ghi”的格式输出所有解，每行一个解。提示：不必太动脑筋。
