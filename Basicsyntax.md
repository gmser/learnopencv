# 一些简单常用的github书写语法规则罗列在此
### 标题
```
# the largest heading
## the second largest heading
###### the smallest heading
```
# the largest heading
## the second largest heading
###### the smallest heading



### 字体样式
加粗 `** ** or __ __`

**this is bold text**

斜体 `* * or _ _`

*this text is italicized*


### 引用文本
`> text`
> pardon my French

### 引用代码
```
void dijkstra_heap(){
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> heap;
	for (int i = 1; i <= n; i++) dist[i] = INF;
	dist[1] = 0;
	heap.push(make_pair(dist[1], 1));
}
```

```
void dijkstra(){
	for (int i = 1; i <= n; i++) dist[i] = INF;
	dist[1] = 0;

	for (int i = 0; i < n; i++){
		int id, mind = INF;
		for (int j = 1;j <= n;j++)
			if (!st[j] && dist[j] < mind){
				mind = dist[j];
				id = j;
			}
		st[id] = 1;
		for (int j = 1; j <= n; j++) dist[j] = min(dist[j], dist[id] + g[id][j]);
	}	
}
```

### 链接
`[text](url)`

[GitHub Pages](https://pages.github.com)

### 列表
- George Washington
- John Adams
- Thomas Jefferson

1. James Madison
2. James Monore
3. John Quincy Adams

### 换行
中间空一行

one line

another line
