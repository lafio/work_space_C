#ifndef NODE_H
#define NODE_H

template <class T>
class Node{
private:
    Node<T> *next;  //指向后继节点的指针
public:
    T data; //数据域
    Node(const T& item,Node<T> *next=0);//构造函数
    void insertAfter(Node<T> *p);//本节点后插入同类节点
    Node<T> *deleteAfter();//删除本节点的后继节点，返回其地址
    Node<T> *nextNode();//获取后继节点的地址
    const Node<T> *nextNode()const;//获取后继节点的地址
};
//类的实现部分
//构造函数，初始化数据和指针成员
template <class T>
Node<T>::Node(const T& data,Node<T> *next=0){
    this->data=data;
    this->next=next;
}
//返回后继节点的指针
template<class T>
Node<T> *Node<T>::nextNode(){
    return next;
}
//返回后继节点的指针
template <class T>
const Node<T> *Node<T>::nextNode()const{
    return next;
}
//在当前节点之后插入一个节点p
template <class T>
void Node<T>::insertAfter(Node<T> *p){
    p->next=next;//p节点指针域指向当前节点的后继节点
    next=p;//当前节点的指针域指向p
}
//删除当前节点的后继节点，并返回其地址
template <class T> Node<T> *Node<T>::deleteAfter(){
    Node<T> *tempPtr=next;//将欲删除的节点地址存储到tempPtr中
    if(next==0) //如果当前节点没有后继节点，则返回空指针
        return 0;
    next=tempPtr->next;//使当前节点的指针域指向tempPtr的后继节点
    return tempPtr;//返回被删除的节点的地址
}
#endif
