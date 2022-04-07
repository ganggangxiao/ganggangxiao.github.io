// just a test
include<iostream>
// 输入输出流

using std::cout;
using std::cin;
using std::endl;
using std::string;
// 简化代码（然而在这么简短的文件中没什么卵用）

int main(){
  
  // main函数
  cout<<"Hello world"<<endl;// 输出"你好世界"
  cout<<"请回复任意并回车以退出"<endl;
  string endVal = "Und doch habe ich allein";// 声明并赋值一个名为结束值的string对象
  cin>>endVal;//获取结束值
  cout<<"结束值:"<<endlVal<<endl;//输出结束值
  
  return 0;
}
// 为什么GitHub中的缩进是两个空格？我还是更喜欢长度为4的tab
