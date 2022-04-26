//
//  kimtest.hpp
//  cpp
//
//  Created by 銀色のやつ on 2021/11/15.
//

#ifndef kimtest_hpp
#define kimtest_hpp
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <memory.h>
using namespace std;
class Wood
{
    public:
        Wood();
        double length;   // 盒子的长度
        double breadth;  // 盒子的宽度
        double height;   // 盒子的高度
        string answer();
        virtual string getaname(string a);//如果没有virtual修饰，子类重写后，返回还是这个函数
    private:
        
};

class clone_Wood : public Wood
{
    public:
    clone_Wood(){};//可以这样写构造函数
        double length;   // 盒子的长度
        double breadth;  // 盒子的宽度
        double height;   // 盒子的高度
        string answer();
        string getaname(string a) override;
    private:
        
};


class box : public Wood
{
public:
    box(int a);
    int a ;
    double area();
    void test_this();
    string ReadfromFile(string path,int default_val);
    string getaname(string a,int index);//重写父类的getaname
};

class chest{
public:
    chest();
    int a ;
    string writeabyte();
private:
    std::shared_ptr<box> box_;
    
};

class Student{
public:
    Student();
    void setname(string name);
    void setage(int age);
    void setscore(int score);
    void show();
    string retname(){
        return this->name;
    }
    std::unique_ptr<Wood> Wod_;
private:
    string name;
    int age;
    int score;
    
    
};


#endif /* kimtest_hpp */
