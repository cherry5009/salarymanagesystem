//
//  sms.h
//  salarymanagesystem
//
//  Created by 章小萌 on 14-6-7.
//  Copyright (c) 2014年 章小萌. All rights reserved.
//
#ifndef CompanyManage_SMS_h
#define CompanyManage_SMS_h
#include <string>

class CStaff
{
private:
    int m_nStaffId;					//工号
    string m_strName;			//姓名
    enum GENDER{m,f};			//枚举类型 性别
    int m_nSeniority;				//工龄
    int m_nDepartId;				//部门号
protected:
    int m_nSalary;					//月薪
public:
    CStaff();
    virtual ~CStaff();
    friend class CDepartment;
    virtual int CalSalary() = 0;	//计算月薪，是纯虚函数，必须在每个派生类中定义
    virtual void AddStuff();				//添加职员信息
    virtual void DelStuff();					//删除职员信息
    virtual void ModStuff();				//修改职员信息
    virtual void QueStuff();				//查询职员信息
};

class CManager :public CStaff
{
private:
    int m_nSub;						//下属数量
public:
    CManager();
    virtual ~CManager();
    inline int CalSalary();
    virtual void AddStuff();				//添加职员信息
    virtual void DelStuff();					//删除职员信息
    virtual void ModStuff();				//修改职员信息
    virtual void QueStuff();				//查询职员信息

};

class CTechnician :public CStaff{
private:
    int m_nWage;					//时薪
    int m_nHours;					//工时
public:
    CTechnician();
    virtual ~CTechnician();
    inline int CalSalary();
    virtual void AddStuff();				//添加职员信息
    virtual void DelStuff();					//删除职员信息
    virtual void ModStuff();				//修改职员信息
    virtual void QueStuff();				//查询职员信息
};

class CWorker :public CStaff{
public:
    CWorker();
    virtual ~CWorker();
    inline int CalSalary();
    virtual void AddStuff();				//添加职员信息
    virtual void DelStuff();					//删除职员信息
    virtual void ModStuff();				//修改职员信息
    virtual void QueStuff();				//查询职员信息
};

class CSeller :public CStaff{
private:
    int m_nSales;					//销售额
public:
    CSeller();
    virtual ~CSeller();
    inline int CalSalary();
    virtual void AddStuff();				//添加职员信息
    virtual void DelStuff();					//删除职员信息
    virtual void ModStuff();				//修改职员信息
    virtual void QueStuff();				//查询职员信息
};




#endif
