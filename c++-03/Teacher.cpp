//
//  Teacher.cpp
//  c++ -03
//
//  Created by orion_mac1 on 17/3/24.
//  Copyright © 2017年 yx. All rights reserved.
//

#include "Teacher.hpp"
#include <string>
#include <iostream>

using namespace std;

//Teacher::Teacher()
//{
//    m_strName = "jim";
//    m_iAge = 5;
//    cout << "Teacher()" << endl;
//}

Teacher::Teacher(const Teacher &tea)// 拷贝构造函数
{
    cout << "Teacher(const Teacher &tea)" << endl;
}
//  const 修饰的数据成员在初始化时候一定要写在初始化列表中 不然就会报错的

//Teacher::Teacher(string name,int age,int m):m_strName(name),m_iAge(age),m_iMax(m)
Teacher::Teacher(string name,int age,int m):m_strName(name),m_iAge(age)
{
//    m_strName = name;
//    m_iAge = age;
    cout << "Teacher(string name,int age)" << endl;
}

Teacher::~Teacher()
{
    cout << "~Teacher()" << endl;
}


//int Teacher::getMAx()
//{
//    return m_iMax;
//}
void Teacher::setName(string _name)
{
    m_strName = _name;
}

string Teacher::getName()
{
    return m_strName;
}

void Teacher::setGender(string _gender)
{
    m_strGender = _gender;
}

string Teacher::getGender()
{
    return m_strGender;
}

void Teacher::setAge(int _age)
{
    m_iAge = _age;
}
int Teacher::getAge()
{
    return m_iAge;
}

void Teacher::teach()
{
    cout << "现在正在上课..." << endl;
}
