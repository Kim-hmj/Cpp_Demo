//
//  kimtest.cpp
//  cpp
//
//  Created by 銀色のやつ on 2021/11/15.
//

#include "kimtest.hpp"
using namespace std;

Wood::Wood(): length(12.2),breadth(13.2){
    
    cout << "init the wood" << endl;
    
}
string Wood::getaname(string a){
    
    cout <<__func__<<" Wood::getanameu " << a <<"\n";
    return  a;
}

string Wood::answer(){
    
    return getaname("my boy");
}
//===================================================================
//clone_Wood::clone_Wood(){
//    cout<< " init clone_Wood " << endl;
//}

string clone_Wood::getaname(string a){
    cout <<  __func__  <<"  clone_Wood  " << a <<"\n";
    return  a;
}

//===================================================================
box::box(int a ):a(2){
    cout << "init the box" << endl;
}


void box::test_this(){
    cout <<" test _ this  " <<this->area()<<endl;
    cout <<" _test _ this  " <<this->answer()<<endl;
}


string box::getaname(string a ,int index){
    index = 1;
    cout <<__func__<<" _box::getaname " << a << index<<"\n";
    return a;
}


double box::area(){
    
    double ak = 0;
    ak = length * breadth;
    return ak;
}
//====================================================================



chest::chest(): box_(new box(1)){ //该指向类的指针可以不需要被构造函数初始化的？
                                  //:不在构造函数里面初始化则不会执行 box的构造函数
    cout<<"init a chest"<<endl;
    
}
string chest::writeabyte(){
    box_->getaname("chest",1);
    box_->getaname("haha",1);

    
    return "";
}

string box::ReadfromFile(std::string path, int default_val) {
     string tmp;
     ifstream fromFile;
     fromFile.open(path.c_str(), std::ios::in);
     if(fromFile.fail()){
        printf("[LOG_VIEW(%s)] File isn't exist, Return default value\n", __func__);
         return tmp = "Nothing";
    }else{
    fromFile >> tmp; //这个写法只能拿到第一行
    fromFile.close();
    return tmp;
    }
}
//=========================================================================
Student::Student(): Wod_(nullptr){
    
}
void Student::setname(string name){
    this->name = name;
}
void Student::setage(int age){
    this->age = age;
}
void Student::setscore(int score){
    this->score = score;
}
void Student::show(){
    
    Wod_ = make_unique<clone_Wood>();//clone_Wood 一定要写他的构造函数，不然会报错
    Wod_->getaname(" student show() ");
    cout<<this->name<<", age is: "<<this->age<<"，Mark is: "<<this->score<<endl;
}
