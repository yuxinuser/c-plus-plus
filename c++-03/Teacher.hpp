//
//  Teacher.hpp
//  c++ -03
//
//  Created by orion_mac1 on 17/3/24.
//  Copyright © 2017年 yx. All rights reserved.
//

#ifndef Teacher_hpp
#define Teacher_hpp

#include <string>
#include <stdio.h>
using namespace std;

// 通常把用类创建对象的过程叫做实例化. 构造函数在对象实例化时被调用

class Teacher
{
public:
   // Teacher();
    Teacher(string name = "jim",int age = 1,int m = 100); // 构造函数
    Teacher(const Teacher &tea); // 拷贝构造函数
    ~Teacher();
    void setName(string _name);
    string getName();
    void setGender(string _gender);
    string getGender();
    void setAge(int _age);
    int getAge();
    void teach();
    int getMAx();
private:
    string m_strName;
    string m_strGender;
    int m_iAge;
    //const int m_iMax;
};


#endif /* Teacher_hpp */
