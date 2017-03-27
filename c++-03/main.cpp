//
//  main.cpp
//  c++ -03
//
//  Created by orion_mac1 on 17/3/23.
//  Copyright © 2017年 yx. All rights reserved.
//

#include <iostream>
using namespace std;
#include <string>
#include "Teacher.hpp"

class Coordinate{
    
public:
    int x;
    int y;
    void printX()
    {
        cout << y << endl;
    }
    void printY()
    {
        cout << x << endl;
    }
    
    
};


/********************************************************************/

/*
 1 姓名 name
 2 性别 gender
 3 学分（只读）score
 4 学习 study
 */

class Student
{
public:
    void setName(string _name)
    {
        m_strName = _name;
    }
    string getName()
    {
        return m_strName;
    }
    void setGender(string _gender)
    {
        m_strgGender = _gender;
    }
    string getGender()
    {
        return m_strgGender;
    }
    void initScore()
    {
        m_iScore = 0;
    }
    int getScoore()
    {
        return m_iScore;
    }
    void study(int _score)
    {
        m_iScore += _score;
    }
    
private:
    string  m_strName;
    string m_strgGender;
    int m_iScore;
};


/*
 初始化列表编码
 **** Teacher类
 自定义有参数的默认构造函数
 使用初始化列表初始化的数据
 ***** 数据
 名字
 年龄
 *****  成员函数
 数据成员的封装函数
 *****  拓展
 定义可以带最多学生的个数 此为常量        ，
 rong15258818804
 */





/********************************************************************/
/*
 
 
 // 同文件类的定义
 
 定义一个teacher的类，要求分别采用文件类外定义和份文件类外定义的方式完成
 数据成员：
 名字
 年龄
 性别
 成员函数
 数据成员的封装函数
 授课teach
 
 */
//
//
//class Teacher
//{
//public:
//    void setName(string _name);
//    string getName();
//    void setGender(string _gender);
//    string getGender();
//    void setAge(int _age);
//    int getAge();
//    void teach();
//private:
//    string m_strName;
//    string m_strGender;
//    int m_iAge;
//};
//
//void Teacher::setName(string _name)
//{
//    m_strName = _name;
//}
//
//string Teacher::getName()
//{
//    return m_strName;
//}
//
//void Teacher::setGender(string _gender)
//{
//    m_strGender = _gender;
//}
//
//string Teacher::getGender()
//{
//    return m_strGender;
//}
//
//void Teacher::setAge(int _age)
//{
//    m_iAge = _age;
//}
//int Teacher::getAge()
//{
//    return m_iAge;
//}
//
//void Teacher::teach()
//{
//    cout << "现在正在上课..." << endl;
//}
//
//
//
void text(Teacher t)
{
    
}

int main(int argc, const char * argv[]) {
    
    
    //    Coordinate coor;
    //    coor.x = 1;
    //    coor.y = 2;
    //    coor.printX();
    //    coor.printY();
    //
    //
    //    Coordinate *p = new Coordinate();
    //    if (NULL == p) {
    //        return 0;
    //    }
    //    p->x = 33;
    //    p->y = 100;
    //    p->printY();
    //    p->printX();
    //
    //    delete p;
    //    p = NULL;
    
    
    
    /********************************************************************/
    
    
    /*
     题目描述
     1 提示用户输入名字
     2 接收用户的输入
     3 然后向用户问好，hello xxx
     4 告诉用户名字的长度
     5 告诉用户名字首字母是什么
     6 如果用户直接输入回车，那么告诉用户的输入为空
     7 如果用户输入的是imooc ，南无告诉用户的角色是一个管理员
     
     */
    
    //    string name;
    //    cout <<  "请输入您的名字" << endl;
    //    getline(cin, name);
    //    if (name.empty()) {
    //        cout << "输入为空" << endl;
    //        return 0;
    //    }
    //    if (name == "imooc") {
    //        cout << "您是一个管理员" << endl;
    //    }
    //    cout << "hello" + name << endl;
    //    cout << "名字长度是" <<  name.size()<< endl;
    //    cout <<  "名字的首字母是" << name[0] << endl;
    //
    //    如果定义如下：
    //A *p则使用：p->play(); 左边是结构指针。
    //A p 则使用：p.paly(); 左边是结构变量。
    //总结：
    // 箭头（->）：左边必须为指针；
    // 点号（.）：左边必须为实体。
    
    
    //
    //    Student stu;
    //    stu.initScore();
    //    stu.setName("zhangsan");
    //
    //    stu.setGender("女");
    //    stu.study(2);
    //    stu.study(3);
    //    stu.study(4);
    //    cout <<  stu.getName() << stu.getGender() <<  stu.getScoore() << endl;
    //
    
    // 同文件类的定义   类内定义的函数优先选择编译为内联函数
    //    Teacher t;
    //    t.setName("孔子");
    //    t.setGender("男");
    //    t.setAge(30444);
    //    cout << t.getName() << " " << t.getAge() << " " << t.getGender()  << endl;
    //    t.teach();
    
    
    //    Teacher t1;
    //    Teacher t2("marry",15);
    //
    //    cout << t1.getName() << " " << t1.getAge() << endl;
    //    cout << t2.getName() << " " << t2.getAge() << endl;
    //
    
    //初始化列表编码
    //    Teacher t1("maee",12);
    //    cout << t1.getName() << " " << t1.getAge()<< " " << t1.getMAx() << endl;
    //
    
    // 拷贝构造函数    拷贝构造函数的参数是确定的，不能重载
    //      Teacher t1;
    ////    Teacher t2 = t1;
    ////    Teacher t3(t1);
    //      text(t1);
    
    // https://github.com/yuxinuser/encapsulation-.git
    
    
    
    
    
    // 栈实例化
    Teacher t1;
    //    //堆中实例化
    //    Teacher *p = new Teacher();
    //    delete p;
    
    Teacher t2(t1);
    
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
