//
//  Header.h
//  cpp
//
//  Created by 銀色のやつ on 2022/1/12.
//

#ifndef Header_h
#define Header_h
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct setting{
    string button;
    int a ;
};
class wool{
public:
    void test_pr();
private:
    class Private;//声明有一个类在下面，因为是嵌套关系，可以写到wool里面
    std::unique_ptr<Private> data_;

};

class wool::Private{
public:
    void printf_(){
        std::cout<<"here is wood::private"<<std::endl;
    }
    
};

class Linear{

private:
    double slope;
    double y0;
public:
    //构造函数
    Linear(double sl_ = 1,double y_ = 0):slope(sl_),y0(y_){
        cout<<" Linear construtor " <<endl;
    }
    //重载()运算符
    double operator()(double x)
    {
        return y0 +slope*x;
    }
    string func_1();
    virtual string func_2();
    virtual string func_3()final;
    Linear& func_4();
    Linear& func_5();
    static setting getdata();
};

class child_test : public Linear{
public:
    string func_1();//
    virtual string func_2();
};
#endif /* Header_h */
