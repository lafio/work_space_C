ofstream 类支持磁盘文件输出
如果在构造函数中制定一个文件名，当构造这个文件时该文件是自动打开的，
    ofstream myFile("filename");
可以在调用默认构造函数之后使用open成员函数打开文件
    ofstream myFile;
    myFile.open("filename");
在构造对象或用open打开文件时可以指定模式
    ofstream myFile("filename",ios_base::out | ios_base::binary);

文件输出流成员函数的三种类型
    与操纵符等价的成员函数
    执行非格式化写操作的成员函数
    其他修改流状态且不同于操纵符或插入运算符的成员函数

open函数
    把流与一个特定的磁盘文件关联起来
    需要指定打开模式
put函数
    把一个字符写到输出流中
write函数
    把内存中的一块内容写到一个文件输出流中
seekp和tellp函数
    操作文件流的内部指针
close函数
    关闭与一个文件输出流关联的磁盘文件

