//
//  main.cpp
//  cpp
//
//  Created by 銀色のやつ on 2021/11/16.
//


#include <iostream>
#include "Header.h"
#include <algorithm>
#include <vector>

using namespace std;
void wool::test_pr(void){
    data_->printf_();
}
bool mycomp(int i) {
    return ((i % 2) == 1);
    
}

string Linear::func_1(){
    printf("Linear %s\n",__func__);
    return " ";
}
string Linear::func_2(){
    printf("Linear %s\n",__func__);
    return " ";
}
string Linear::func_3(){
    printf("Linear %s\n",__func__);
    return " ";
}
Linear& Linear::func_4(){
    printf("Linear %s\n",__func__);
    return *this;
}
Linear& Linear::func_5(){
    printf("Linear %s\n",__func__);
    return *this;
}

string child_test::func_1(){
    printf("child_test %s\n",__func__);
    return " ";
}

string child_test::func_2(){
    printf("child_test %s\n",__func__);
    return " ";
}
int main(int argc, const char * argv[]) {
    vector<int> myvector{ 4,2,3,1,5 };
    vector<int>::iterator it = find_if(myvector.begin(),myvector.end(),[](int &i){ return ((i % 2) == 1);});
    cout << "*it = " << *it <<endl;
    wool wool_;
    wool_.test_pr();
//    Linear f1;
//    Linear f2(2.5,10.0);
//    f1.func_1();
//    //在此处Linear类的对象 f1和f2利用重载的（）运算符以函数的方式实现了 y0 +slope*x 功能
//    //因此 f1和f2 可以成为函数对象（或函数符）
//    double y1 = f1(12.5);
//    double y2 = f2(0.4);
//
//    cout<<"y1: "<< y1 <<endl;
//    cout<<"y2: "<< y2 <<endl;
    

//    child_test child;
//    Linear *lin = &child;
//    child_test *child_ptr = &child;
//    lin->func_1();//如果父类指针指向子类，隐藏函数的功能失效
//    lin->func_2();//重写父类函数
//    lin->func_3();
//
//    child_ptr->func_1();
//    child_ptr->Linear::func_1();
//    child_ptr->func_2();
    
    Linear lin(3,4);
    lin.func_4().func_5();
    
    char str[] = "glad to test something";
    char *p = str;
    p++;
    int *p1 = reinterpret_cast<int *>(p);
    p1++;
    p = reinterpret_cast<char *>(p1);
    printf("result is %s\n", p);
    
   
    return 0;
}
