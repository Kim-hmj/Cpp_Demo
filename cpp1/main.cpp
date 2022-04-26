#include<iostream>
#include "kimtest.hpp"
#include <vector>
using namespace std;

struct BoxInfo
 {
     int label;
     float score;
 };
  
 int bbox_init(std::vector<BoxInfo> &bboxs)//传入容器，容器内是一个个结构体
 {
     BoxInfo u_temp;
     for(int i = 0; i < 10; i++)
     {
         u_temp.score = 0.8f +0.1f*i;
         u_temp.label = i;
 
         bboxs.push_back(u_temp);
     }
 
     return 0;
 }

int main()
{
    Wood wood_;
    wood_.answer();
    
    box box_(2);//实例化子类，父类和子类的构造函数都会执行
    box_.answer();
    box_.test_this();
    cout << box_.ReadfromFile("/Users/kimhe/WorkFile/openfile.txt", 1)<<endl;
    
//    std::shared_ptr<box> box_= make_shared<box>(2);//指针的形式去实例化子类，父类也会进行实例化
//    box_->test_this();

    
    chest chect_;
    chect_.writeabyte();
    
    Student Student_;
    Student_.setname("K");
    Student_.setage(16);
    Student_.setscore(96);
    Student_.show();
//    cout << "area = "<<box_.area()<<"_"<<wood_.length<<" ___ "<<Student_.retname()<<endl;
    
    
    printf("begin \r\n");
     std::vector<BoxInfo> bboxs;

     bbox_init(bboxs);

     printf("mid \r\n");

     for(int i = 0; i < 10; i++)
     {
         printf("bboxs[%d].score = %f \r\n",i,bboxs[i].score);
         printf("bboxs[%d].label = %d \r\n",i,bboxs[i].label);
     }
     printf("bboxs.size() = %lu \r\n",bboxs.size());

    shared_ptr<string> p1 = make_shared<string>(10, '9');
    shared_ptr<string> p2 = make_shared<string>("hello");
    shared_ptr<string> p3 = make_shared<string>();
    
    cout << p2->data() <<endl;

    cout << p1->data()<<endl;
    
    cout << p3->data()<<endl;
    
    std::string str_second_1("_1");
    
    cout << str_second_1 << endl;
    return 0;
}

