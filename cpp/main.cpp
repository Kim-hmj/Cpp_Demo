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
#define TR true
using namespace std;
int child_test::a_st = 4;
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
//    map<string, int>::iterator iter;
//    for(iter = IndexMap.begin();iter != IndexMap.end();iter++){
//        cout<< iter->first<<"  "<<iter->second <<endl;
//    }
    
    printf("child_test %s %d\n",__func__,a_st);
    return " ";
}
int func_3(int a ,int b, int c){
    printf(" %s %d %d %d \n",__func__ ,a, b, c);
    return 0;
}
bool child_test::func_8(){
//    map<string, int>::iterator iter;
//    for(iter = IndexMap.begin();iter != IndexMap.end();iter++){
//        cout<< iter->first<<"  "<<iter->second <<endl;
//    }
    printf("child_test %s\n",__func__);
    return TR;
}
template<typename... Args>//不定参数的模版
void child_test::func_10(string event, string mode, Args... args){
    const int get_args[] = {args...};//int或者string等等，决定传入的啥
    for (auto it = std::begin(get_args);
            it != std::end(get_args);
            it++) {
        cout << *it <<endl;
            }
    printf("child_test %s %d\n",__func__,a_st);
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
    

    child_test child;
    Linear *lin = &child;
    child_test *child_ptr = &child;
    lin->func_1();//如果父类指针指向子类，隐藏函数的功能失效
    lin->func_2();//重写父类函数
    lin->func_3();
    child.a = 4;

    child_test child2;
    child2.a = 5;
    cout<< child.a <<child2.a<<child2.a_st<<endl;

    child_ptr->func_1();
    child_ptr->Linear::func_1();
    child_ptr->func_2();
    child_ptr->func_10("here", " test", 123,3523, 32423);
    //map<string, int>::const_iterator iter2;//被const修饰的map 要用const_iterator 迭代器
    for(map<string, int>::const_iterator iter2 = child.IndexMap.begin();iter2 != child.IndexMap.end();iter2++){
        if(iter2->first.compare("bt") == 0 || iter2->first.compare("abc") == 0 || iter2->first.compare("abc") == 0){
            cout<<"YES!!!!"<<iter2->first<<endl;
            if(child.func_8())
                cout<<"TR!!!!"<<endl;
            continue;
        }
        cout<<"zjian!!!!"<<endl;
        if(iter2->first.compare("123") != 0)
            cout<<"NO!!!!"<<endl;
    }
    
    
//
//    Linear lin(3,4);
//    lin.func_4().func_5();
    
    char str[] = "glad to test something";
    char *p = str;
    p++;
    int *p1 = reinterpret_cast<int *>(p);
    printf("result is %d\n", *p1);
    p = reinterpret_cast<char *>(p1);
    printf("result is %s\n", p);
    unsigned char test_1 = 1;
    int test_2 = 1;
    if (test_1 == test_2) {
        cout<<"ok!"<<endl;
    }
    int mVolumeIndex[14] = {7,7,11,11,11,11,11,11,11,11,11,7,7,7};
    float a_per = -13.45;
    printf("size of %lu %f\n",sizeof(mVolumeIndex)/sizeof( mVolumeIndex[0]),a_per);
    double abc = (double)4/22;
    cout<< abc<<endl;
    while(1){
        for(int i = 0; i<= 10;i++){
            cout<< i <<endl;
            if(i == 3)
                break;//退出循环
        }
        cout<< abc<<endl;
        break;
    }
    
    
   
    return 0;
}


