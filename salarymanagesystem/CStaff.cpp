//
//  CStaff.cpp
//  salarymanagesystem
//
//  Created by 章小萌 on 14-6-7.
//  Copyright (c) 2014年 章小萌. All rights reserved.
//

#include "CStaff.h"
#include <iostream>
using namespace std;

inline int CManager::CalSalary()
{
    m_nSalary = m_nSub * 500 + 3000;
    return m_nSalary;
}

inline int CTechnician::CalSalary(){
    m_nSalary = m_nWage * m_nHours + 3000;
    return m_nSalary;
}

inline int CWorker::CalSalary(){
    m_nSalary = 5000;
    return m_nSalary;
}

inline int CSeller::CalSalary(){
    m_nSalary = m_nSales/10+2000;
    return m_nSalary;
}

