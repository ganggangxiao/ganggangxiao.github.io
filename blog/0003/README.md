[主页](https://ganggangxiao.github.io/)
[文章](https://ganggangxiao.github.io/list/)
[关于](https://ganggangxiao.github.io/about/)
[托管地址](https://github.com/ganggangxiao/ganggangxiao.github.io/)
[评论](https://github.com/ganggangxiao/ganggangxiao.github.io/issues)  
创建时间 2022 03 25 | 修改时间 2022 06 02

# **0003 - html插入图片**
这篇文章主要记录如何在html中插入图片，本网页所有的照片都在image文件夹下，
诸位可以更改网址地址查看，ok，lets begin！
其实插入照片挺简单的，调用img标签就行了，像这样：
``` html
<img src="image/Callum.png" width="512px" height="512px" alt="Callum徽标"><br>
```
效果图：
<img src="image/Callum.png" width="512px" height="512px" alt="Callum徽标"><br>

src后面的引号填的是路径，可以是相对路径，也可以是在线或本地的绝对路径，比如我放一个百度的图标
``` html
<img src="https://www.baidu.com/img/flexible/logo/pc/result.png" alt="百度logo">
```
效果图：
<img src="https://www.baidu.com/img/flexible/logo/pc/result.png" alt="百度logo">

后面紧跟着alt=""里面加上描述，这样图片显示不出的时候也能知道是个啥。其中width=""和height=""是设置分辨率，也就是多少多少px
没有特殊要求用原本的分辨率就可以，比如我用一个四分之一大小的callum logo
``` html
<br><img src="image/Callum.png" width="256px" height="256px" alt="Callum徽标四分之一">
```
效果图：
<br><img src="image/Callum.png" width="256px" height="256px" alt="Callum徽标四分之一">

这样就能在原图片不改变的情况下更改显示的图片了</p>	


## **以上 - The End.**